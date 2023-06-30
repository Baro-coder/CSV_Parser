#include "tests.hpp"

using namespace std;

void log_testcase_entry(const char *file_name, const char *func_name)
{
    std::cout << "  [+] " << file_name << " : " << func_name << std::endl;
}

int main(void)
{ 
    cout << "[*] Running tests..." << endl << endl;
    
    // *** Test Cases - begin ***
    // -- test__csvreader.cpp

    // -- test__csvwriter.cpp

    // -- test_cell.cpp
    TESTCASE_test_cell__constructor_default__pos_zero();
    TESTCASE_test_cell__constructor_default__pos_counter();
    TESTCASE_test_cell__constructor_params__pos_positive();
    TESTCASE_test_cell__constructor_params__pos_negative();

    // -- test_dataframe.cpp
    TESTCASE_test_dataframe__constructor_default__no_content();

    // *** Test Cases - end ***

    cout << endl << "[*] Running tests : Done." << endl;
    cout << endl << "[*] All tests passed." << endl << endl;
    exit(0);
}
