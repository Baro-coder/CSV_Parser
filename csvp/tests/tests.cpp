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

    // -- test_csvp.cpp
    TESTCASE_csvp_getTwo__2_should_be_returned();

    // *** Test Cases - end ***

    cout << endl << "[*] Running tests : Done." << endl;
    cout << endl << "[*] All tests passed." << endl;
    exit(0);
}
