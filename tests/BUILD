load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
    name = "tests",
    srcs = glob(["**/*.cc"]),
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "cpplib_test",
    srcs = ["cpplib_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "grader_test",
    srcs = ["grader_test.cc"],
    deps = [
        "//src/lib:CPPLib",
        "@googletest//:gtest_main",
    ],
)
