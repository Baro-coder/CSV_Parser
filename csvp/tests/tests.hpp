#pragma once

#include <iostream>

#include <csvp/csvp.hpp>
#include <csvp/public/cell.hpp>
#include <csvp/public/dataframe.hpp>
#include <csvp/private/_csvreader.hpp>
#include <csvp/private/_csvwriter.hpp>

using namespace csvp;

// Function printing actual working testcase in format
//  [+] `file_name` : `func_name`
void log_testcase_entry(const char *file_name, const char *func_name);

// Test Cases
// -- test__csvreader.cpp

// -- test__csvwriter.cpp

// -- test_cell.cpp
void TESTCASE_test_cell__constructor_default__pos_zero();
void TESTCASE_test_cell__constructor_default__pos_counter();
void TESTCASE_test_cell__constructor_params__pos_positive();
void TESTCASE_test_cell__constructor_params__pos_negative();

// -- test_dataframe.cpp
void TESTCASE_test_dataframe__constructor_default__no_content();

// -- test_csvp.cpp
