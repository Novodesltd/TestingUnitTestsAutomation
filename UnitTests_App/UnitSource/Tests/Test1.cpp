//============================================================================
// Name        : LockObj_Tests.cpp
// Author      : Neuroderm
// Version     :
// Copyright   : All rights reserved to Neuroderm Ltd
// Description : Testing of the LockObj Module, Ansi-style
//============================================================================


#include "MockDeclarations.h"

using namespace std;

///******************************************************//*!
// Description: class for setting up and tairing down tests for class CBaseLockObj
// *******************************************************/
//class CBaseLockObj_Test : public ::testing::Test
//{
//protected:
//	CBaseLockObj CBaseLockTest;
//	virtual void SetUp()
//	{
//
//	}
//
//	virtual void TearDown()
//	{
//		free(&CBaseLockTest);
//	}
//};

/******************************************************//*!
_Description Updated: Jun 9, 2021, by Eyal _<br>
Brief
---
Tests that the Test object is unlocked if it hasn't been locked yet.

Full Description
---
NOthing more to elaborate
*******************************************************/
TEST(Test1, HelloWorldFuncTest)
{
	ASSERT_TRUE(HelloWorld());
}

TEST(Test2, TestFailure)
{
	ASSERT_TRUE(false); // to make it pass, change it from false to true.
}

TEST(Test3, TestPass)
{
	ASSERT_TRUE(true);
}
