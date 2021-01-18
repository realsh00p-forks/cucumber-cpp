load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "driver",
    visibility = ["//visibility:public"],
    deps = ["gtest_driver"],
)

cc_library(
    name = "gtest_driver",
    srcs = ["GTestDriver.cpp"],
    deps = [
        "//include:cucumber-cpp",
        "@gtest",
    ],
)
