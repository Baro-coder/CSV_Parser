/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `csvp/csvp.hpp` for details.
 */

#pragma once

namespace csvp {

    // CSV Cell Model
    class Cell
    {
    public:
        // Constructors
        Cell();
        Cell(int col_index, int row_index);
        
        // Destructor
        ~Cell();

        // Getters
        // -- get column index
        int getColIndex();
        // -- get row index
        int getRowIndex();

        // Setters
        // -- reset position counters
        static void resetPositionCounters();

    private:
        static int _COL_COUNTER; // col index counter for default constructor
        static int _ROW_COUNTER; // row index counter for default constructor
        int _row; // row index
        int _col; // column index
    };
} // namespace csvp
