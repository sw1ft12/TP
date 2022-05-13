//
// Created by akhtyamovpavel on 5/1/20.
//

#include "AddTestCase.h"
#include "Functions.h"

TEST_F(AddTestCase, TwoPlusTwo){
    EXPECT_EQ(4, Add(2, 2));
}

TEST_F(AddTestCase, TenPlusFive){
    EXPECT_EQ(15, Add(10, 5));
}

TEST_F(AddTestCase, FiftyTwoPlusSixtySeven){
    EXPECT_EQ(119, Add(52, 67));
}

