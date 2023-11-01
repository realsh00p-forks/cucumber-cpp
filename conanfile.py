from conans import ConanFile, CMake

import shutil
import os
import glob

class CucumberCpp(ConanFile):
    name = "cucumber-cpp"
    version = "0.3"

    exports = "*"
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake"

    def requirements(self):
        self.requires("boost/1.78.0")
        self.requires("gtest/1.12.1")

    def configure_cmake(self):
        cmake = CMake(self)
        cmake.configure()
        return cmake

    def build(self):
        cmake = self.configure_cmake()
        cmake.build()

    def package(self):
        self.copy(pattern="*", dst="include", src=os.path.join(self.source_folder, "include"))
        self.copy(pattern="*.a", dst="lib", keep_path=False)

    def package_info(self):
        self.cpp_info.name = "cucumber-cpp"
        self.cpp_info.includedirs = ["include"]
        self.cpp_info.libs = ["libcucumber-cpp.a"]
