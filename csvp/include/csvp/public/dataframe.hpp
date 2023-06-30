/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `csvp/csvp.hpp` for details.
 */
#pragma once

#include <cstdio>
#include <vector>
#include <stdexcept>
#include "cell.hpp"

namespace csvp {

    // CSV DataFrame Model
    class DataFrame
    {
    public:
        // Constructors
        DataFrame();
        DataFrame(const char* filepath);
        DataFrame(const char *filepath, const bool containsHeaders);

        // Destructor
        ~DataFrame();

        // Getters
        // -- are headers contained
        bool areHeadersContained();
        // -- get columns count
        int getColsCount();
        // -- get rows count
        int getRowsCount();
        // -- get headers
        std::vector<std::string> getHeaders();
        // -- get cell from specified position
        Cell* getCell(int col, int row);
        // -- get specified column
        std::vector<Cell*> getColumn(int col);
        // -- get specified row
        std::vector<Cell*> getRow(int row);

    private:
        // Attributes
        bool _containsHeaders; // headers contained flag
        int _cols_count; // columns count
        int _rows_count; // rows count

        // headers array
        std::vector<std::string> _headers;
        // columns array
        std::vector<std::vector<Cell *>> _cols;
        // rows array
        std::vector<std::vector<Cell *>> _rows;

        // Validators
        bool _validColIndexValue(int col);
        bool _validRowIndexValue(int row);
    };
} // namespace csvp
