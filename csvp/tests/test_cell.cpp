#include <cassert>

#include "tests.hpp"


void TESTCASE_test_cell__constructor_default__pos_zero()
{
    // log entry
    log_testcase_entry(__FILE__, __func__);

    // Prepare
    Cell* cell = new Cell();

    // Assert
    assert(cell->getColIndex() == 0);
    assert(cell->getRowIndex() == 0);

    delete cell;
};

void TESTCASE_test_cell__constructor_default__pos_counter() 
{
    // log entry
    log_testcase_entry(__FILE__, __func__);

    // Prepare
    Cell *cell;
    cell->resetPositionCounters();

    // Assert
    for (int i = 0; i < 1000; i++)
    {
        cell = new Cell();
        assert(cell->getColIndex() == i);
        assert(cell->getRowIndex() == 0);
        delete cell;
    }

    cell = new Cell();
    assert(cell->getColIndex() == 0);
    assert(cell->getRowIndex() == 1);

    delete cell;
}

void TESTCASE_test_cell__constructor_params__pos_positive()
{
    // log entry
    log_testcase_entry(__FILE__, __func__);

    // Prepare
    Cell *c1 = new Cell(1, 5);
    Cell *c2 = new Cell(3, 3);
    Cell *c3 = new Cell(5, 1);

    // Assert
    assert(c1->getColIndex() == 1);
    assert(c1->getRowIndex() == 5);
    delete c1;

    assert(c2->getColIndex() == 3);
    assert(c2->getRowIndex() == 3);
    delete c2;

    assert(c3->getColIndex() == 5);
    assert(c3->getRowIndex() == 1);
    delete c3;
};

void TESTCASE_test_cell__constructor_params__pos_negative()
{
    // log entry
    log_testcase_entry(__FILE__, __func__);

    // Prepare
    int poss[3][2] = {{-1, 5}, {8, -2}, {-4, -7}};

    // Assert
    for (int i = 0; i < 3; i++) {
        try
        {
            Cell *cell = new Cell(poss[i][0], poss[i][1]);
            delete cell;
        }
        catch (std::invalid_argument &e)
        {
            continue;
        }
        catch (...)
        {
            throw std::logic_error("Unknown exception :: Expected exception: `std::invalid_argument`");
        }
    }
}
