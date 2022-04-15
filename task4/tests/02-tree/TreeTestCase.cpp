//
// Created by akhtyamovpavel on 5/1/20.
//


#include "TreeTestCase.h"
#include "Tree.h"
#include <cstdio>
#include <fstream>

namespace fs = std::filesystem;

TEST_F(TreeTestCase, exceptionTest1){
    try{
        GetTree("./12345", true);
    }
    catch(std::invalid_argument const & err){
        EXPECT_EQ(err.what(), std::string("Path not exist"));
    }
}

TEST_F(TreeTestCase, exceptionTest2){
    std::ofstream("12345.txt");
    try{
        GetTree("./12345.txt", true);
    }
    catch(std::invalid_argument const& err){
        EXPECT_EQ(err.what(), std::string("Path is not directory"));
    }
}

TEST_F(TreeTestCase, noexceptTest){
    fs::create_directory("test");
    EXPECT_NO_THROW(FilterEmptyNodes(GetTree(".", false), "."));
} 

TEST_F(TreeTestCase, equalTest){
    EXPECT_EQ(GetTree(".", true) == GetTree(".", true), true);      
}

