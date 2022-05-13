//
// Created by akhtyamovpavel on 5/1/20.
//

#include "LeapTestCase.h"

#include <Functions.h>


TEST_F(LeapTestCase, IsLeap1){
    EXPECT_TRUE(IsLeap(1996));
}

TEST_F(LeapTestCase, IsLeap2){
    EXPECT_TRUE(IsLeap(2000));
}

TEST_F(LeapTestCase, IsLeap3){
    EXPECT_FALSE(IsLeap(100));
}

TEST_F(LeapTestCase, IsLeap4){
    EXPECT_TRUE(IsLeap(96));
}

TEST_F(LeapTestCase, IsLeap5){
    EXPECT_FALSE(IsLeap(2003));
}

TEST_F(LeapTestCase, IsLeap6){
    try {
          IsLeap(-1);
    }
     catch(std::invalid_argument const& err){
          EXPECT_EQ(err.what(), std::string("Year must be greater than 0"));
     }
}

TEST_F(LeapTestCase, MonthDays1){
    EXPECT_EQ(GetMonthDays(1996, 2), 29);
}

TEST_F(LeapTestCase, MonthDays2){
    EXPECT_EQ(GetMonthDays(1997, 2), 28);
}

TEST_F(LeapTestCase, MonthDays3){
    EXPECT_EQ(GetMonthDays(2002, 4), 30);
}

TEST_F(LeapTestCase, MonthDays4){
    EXPECT_EQ(GetMonthDays(1563, 12), 31);
}

TEST_F(LeapTestCase, MonthDays5){
    try {     
        GetMonthDays(1789, 24);
    }
    catch(std::invalid_argument const & err){
        EXPECT_EQ(err.what(), std::string("Month should be in range [1-12]")); 
    }
}
