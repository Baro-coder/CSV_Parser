#include <cassert>

#include "tests.hpp"

void TESTCASE_test_dataframe__constructor_default__no_content()
{
    // log entry
    log_testcase_entry(__FILE__, __func__);

    // Prepare
    DataFrame* df = new DataFrame();

    // Assert
    assert(df->getColsCount() == 0);
    assert(df->getRowsCount() == 0);
    assert(df->areHeadersContained() == false);
    delete df;
}
