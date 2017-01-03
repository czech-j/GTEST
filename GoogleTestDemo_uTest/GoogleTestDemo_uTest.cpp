
#include "stdafx.h"
#include <gtest\gtest.h>

bool isEven(int number) { return number % 2 == 0; }


TEST(isEvenTest, even_argument)
{
	EXPECT_TRUE(isEven(2));
}


TEST(isEvenTest, odd_argument)
{
	EXPECT_TRUE(isEven(3));
}

int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}