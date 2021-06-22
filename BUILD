load("@rules_cc//cc:defs.bzl", "cc_library")

cc_test(
  name = "APP_test",
  size = "small",
  srcs = glob(["**/*.cpp"]),
  copts = ["-Iexternal/gtest/include"],
  deps = [
    "@com_google_googletest//:gtest_main",
	":AppSrc"
    ],
)


cc_library(
  name = "AppSrc", 
  visibility = ["//visibility:public"],
  srcs = glob(["**/*.cpp","Src/*.cpp","Tests/*.cpp"]),
  hdrs = glob(["**/*.h","Inc/*.h"]),
)
