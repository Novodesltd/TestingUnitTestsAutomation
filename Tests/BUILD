load("@rules_cc//cc:defs.bzl", "cc_test")

cc_test(
  name = "APP_test",
  size = "small",
  srcs = glob(["**/*.cpp","Src/*.cpp","Tests/*.cpp"]),
  hdrs = glob(["**/*.h","Inc/*.h"]),
  copts = ["-Iexternal/gtest/include"],
  deps = [
    "@com_google_googletest//:gtest_main",
	"//:AppSrc"
    ],
)

