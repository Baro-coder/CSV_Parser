/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `csvp/csvp.hpp` for details.
 */

#include <csvp/csvp.hpp>

namespace csvp {
    
    int Cell::_COL_COUNTER = 0;
    int Cell::_ROW_COUNTER = 0;
    
    void Cell::resetPositionCounters()
    {
        _COL_COUNTER = 0;
        _ROW_COUNTER = 0;
    }


    Cell::Cell()
    {
        if(_COL_COUNTER == 1000)
        {
            _ROW_COUNTER++;
            _COL_COUNTER = 0;
        }

        this->_col = _COL_COUNTER++;
        this->_row = _ROW_COUNTER;
    };

    Cell::Cell(int col, int row) {
        if(col < 0 || row < 0) {
            throw std::invalid_argument("`col` and `row` must be a positive values");
        }
        
        this->_col = col;
        this->_row = row;
    };

    Cell::~Cell() {

    };


    int Cell::getColIndex()
    {
        return this->_col;
    };

    int Cell::getRowIndex() {
        return this->_row;
    };

} // namespace csvp
