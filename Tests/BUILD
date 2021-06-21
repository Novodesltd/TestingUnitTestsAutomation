load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
  name = "APP_test",
  size = "small",
  srcs = ["Test1.cpp"],
  copts = ["-Iexternal/gtest/include"],
  deps = [
    "@com_google_googletest//:gtest_main",
    "//Inc:APPLib"],
)

