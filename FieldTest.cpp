/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

//dj.9/26/16 added
TEST(FieldTest, placeMineInBounds2)
{
	Field minefield(20);
	
	minefield.placeMine(19,19);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(19,19) );
}
/*
TEST(FieldTest, placeMineInBounds3)
{
	Field minefield(20);
	
	minefield.placeMine(1,1);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(1,1) );
}

TEST(FieldTest, itsSafe)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_TRUE( minefield.isSafe(4,6) );
}

TEST(FieldTest, itsSafe2)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	minefield.placeMine(4,4);
	minefield.placeMine(5,6);
	minefield.placeMine(6,4);
	ASSERT_TRUE( minefield.isSafe(4,6) );
}

TEST(FieldTest, itsSafe3)
{
	Field minefield(10);
	
	minefield.placeMine(1,2);
	minefield.placeMine(11,1);
	minefield.placeMine(1,10);
	ASSERT_TRUE( minefield.isSafe(1,1) );
}

TEST(FieldTest, isntSafe)
{
	Field minefield(10);
	
	minefield.placeMine(1,2);
	ASSERT_FALSE( minefield.isSafe(1,2) );
}

TEST(FieldTest, isntSafe2)
{
	Field minefield(11);
	
	minefield.placeMine(11,2);
	ASSERT_FALSE( minefield.isSafe(11,2) );
}

TEST(FieldTest, isntSafe3)
{
	Field minefield(5);
	
	minefield.placeMine(1,5);
	ASSERT_FALSE( minefield.isSafe(1,5) );
}

*/
