/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to
 *  deal in the Software without restriction, including without limitation the
 *  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 *  sell copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *  IN THE SOFTWARE.
 */

#pragma once

#include "public/cell.hpp"
#include "public/dataframe.hpp"


// Namespace * CSV Parser *
namespace csvp {
    // Test function for unit tests init
    int getTwo();


    // Read CSV File from `filepath` and return read content as DataFrame
    DataFrame* csvRead(const char *filepath);
    // Read CSV File from `filepath` and return read content as DataFrame
    // `includeHeaders` - determine if there are headers on the first row or not | on default = true
    DataFrame* csvRead(const char* filepath, const bool includeHeaders);

    // Write `dataframe` content in a CSV format into the file in `filepath`
    void csvWrite(const char *filepath, DataFrame* dataframe);

} // namespace csvp
