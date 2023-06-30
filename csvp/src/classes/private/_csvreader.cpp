/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `src/csvp.cpp` for details.
 */

#include <csvp/private/_csvreader.hpp>

namespace _CSVP
{
    CSV_Reader::CSV_Reader()
    {
        this->name = "Reader";
    }

    CSV_Reader::CSV_Reader(std::string)
    {
        this->name = name;
    }

    CSV_Reader::~CSV_Reader()
    {
        this->name = "";
    }

    void CSV_Reader::introduce(void)
    {
        std::cout << "CSV_Reader(" << this->name << ") says: Hello!" << std::endl;
    }
}
