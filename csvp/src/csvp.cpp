/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `csvp/csvp.hpp` for details.
 */

#include <csvp/csvp.hpp>
#include <csvp/private/_csvreader.hpp>
#include <csvp/private/_csvwriter.hpp>


namespace csvp {
    DataFrame* csvRead(const char *filepath) {
        DataFrame* df = new DataFrame();
        return df;
    }

    DataFrame* csvRead(const char *filepath, const bool includeHeaders) {
        DataFrame *df = new DataFrame();
        return df;
    }

    void csvWrite(const char *filepath, DataFrame *dataframe) {

    }
};
