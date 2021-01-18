load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "wire",
    srcs = [
        "WireProtocol.cpp",
        "WireProtocolCommands.cpp",
        "WireServer.cpp",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//3rdparty:json_spirit",
        "//include:cucumber-cpp",
    ],
)
