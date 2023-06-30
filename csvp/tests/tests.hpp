#pragma once

#include <iostream>

#include <csvp/csvp.hpp>


// Function printing actual working testcase in format
//  [+] `file_name` : `func_name`
void log_testcase_entry(const char *file_name, const char *func_name);

// Test Cases
// -- test__csvreader.cpp



// -- test__csvwriter.cpp


// -- test_csvp.cpp

// Test testcase - to introduce unit tests structure into the project
void TESTCASE_csvp_getTwo__2_should_be_returned();