load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
  name = "APP_test",
  srcs = glob(["*.cpp"]),
  copts = ["-Iexternal/gtest/include"],
  deps = ["//Inc:APPLib"],
)

