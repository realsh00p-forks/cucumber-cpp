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
        "@boost//:asio",
        "@boost//:filesystem",
        "@boost//:foreach",
        "@boost//:multi_array",
        "@boost//:program_options",
        "@boost//:scoped_ptr",
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
    ],
)
