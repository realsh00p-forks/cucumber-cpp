load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "cucumber",
    srcs = glob(
        ["*.cpp"],
        exclude = ["main.cc"],
    ),
    visibility = ["//visibility:public"],
    deps = [
        "//include:cucumber-cpp",
    ],
)

cc_library(
    name = "cucumber_main",
    srcs = ["main.cpp"],
    visibility = ["//visibility:public"],
    deps = [
        ":cucumber",
        "//include:cucumber-cpp",
        "//src/connectors/wire",
        "//src/drivers:driver",
        "@boost//:asio",
        "@boost//:filesystem",
        "@boost//:program_options",
    ],
)
