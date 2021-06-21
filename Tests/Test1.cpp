//============================================================================
// Name        : LockObj_Tests.cpp
// Author      : Neuroderm
// Version     :
// Copyright   : All rights reserved to Neuroderm Ltd
// Description : Testing of the LockObj Module, Ansi-style
//============================================================================

#include <gtest/gtest.h>
#include "Inc/Source1.h"

using namespace std;

TEST(Test1, ReturnHelloWorld)
{
	ASSERT_TRUE(HelloWorld());
}

TEST(Test2, TestFailure)
{
	ASSERT_TRUE(true); // to make it pass, change it from false to true.
}

TEST(Test3, TestPass)
{
	ASSERT_TRUE(true);
}
