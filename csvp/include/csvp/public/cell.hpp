#pragma once

namespace csvp {
    // CSV Cell Model
    class Cell
    {
    public:
        Cell(int row_index, int col_index);
        ~Cell();

    private:
        int _row; // row index
        int _col; // column index

        // auto content;   // Automatic content type
    };
};