/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `csvp/csvp.hpp` for details.
 */

#include <csvp/public/dataframe.hpp>
#include <csvp/public/cell.hpp>

namespace csvp {

    /* PUBLIC */

    // Constructors
    DataFrame::DataFrame() {
        this->_cols_count = 0;
        this->_rows_count = 0;
        this->_containsHeaders = false;
    };
    DataFrame::DataFrame(const char* filepath)
    {
        throw std::logic_error("Constructor not implemented yet");
    };
    DataFrame::DataFrame(const char *filepath, const bool containsHeaders) 
    {
        throw std::logic_error("Constructor not implemented yet");
    };

    // Destructor
    DataFrame::~DataFrame() {

    };

    // Getters
    // -- Headers contained
    bool DataFrame::areHeadersContained() 
    {
        return this->_containsHeaders;
    };
    // -- Rows Count
    int DataFrame::getColsCount()
    {
        return this->_cols_count;
    };
    // -- Cols Count
    int DataFrame::getRowsCount()
    {
        return this->_rows_count;
    };
    // -- Headers
    std::vector<std::string> DataFrame::getHeaders() 
    {
        if(this->_containsHeaders) 
        {
            return this->_headers;
        }
        throw std::logic_error("DataFrame dose not contain headers");
    }
    // -- Cell
    Cell *DataFrame::getCell(int col, int row)
    {
        if (!this->_validColIndexValue(col))
        {
            throw std::invalid_argument("Value Error : `col`");
        }
        if(!this->_validRowIndexValue(row)) 
        {
            throw std::invalid_argument("Value Error : `row`");
        }

        return _cols.at(col).at(row);
    };
    // -- Col
    std::vector<Cell *> DataFrame::getColumn(int col)
    {
        if (!this->_validColIndexValue(col))
        {
            throw std::invalid_argument("Value Error : `col`");
        }
        return this->_cols.at(col);
    };
    // -- Row
    std::vector<Cell *> DataFrame::getRow(int row)
    {
        if (!this->_validRowIndexValue(row))
        {
            throw std::invalid_argument("Value Error : `row`");
        }
        return this->_rows.at(row);
    };

    /* -------------------------------------------------------------------- */
    /* PRIVATE */

    // Validators
    // -- Col index
    bool DataFrame::_validColIndexValue(int col)
    {
        if (col < 0 || col >= this->_cols_count)
        {
            return false;
        }
        return true;
    };
    // -- Row index
    bool DataFrame::_validRowIndexValue(int row)
    {
        if (row < 0 || row >= this->_rows_count)
        {
            return false;
        }
        return true;
    };

} // namespace csvp
