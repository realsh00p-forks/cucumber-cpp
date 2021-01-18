load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "calculator_steps",
    srcs = [
        "CalculatorSteps.cpp",
    ],
    deps = [
        "//examples/Calc/src:calculator",
        "//src:cucumber_main",
        "@gtest",
    ],
)
