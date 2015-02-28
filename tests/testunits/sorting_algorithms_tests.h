#pragma once
#include "gtest/gtest.h"
#include "sorting_algorithms.h"

TEST(SortingAlgorithmsTests, MaxWorksCorrectlyTest){
    ASSERT_EQ(4, Algorithms::max(2,4));
    ASSERT_EQ(100, Algorithms::max(100,-1000));
}