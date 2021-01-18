load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "cucumber-cpp",
    hdrs = glob(["**/*.hpp"]),
    strip_include_prefix = ".",
    visibility = ["//visibility:public"],
    deps = ["@boost//:asio"],
)
