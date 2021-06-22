load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
  name = "APP_test",
  linkshared = 1
  srcs = glob(["**/*.cpp"]),
  hdrs = glob(["**/*.h"]),
  copts = ["-Iexternal/gtest/include"],
  deps = ["//Inc:APPLib"],
)

