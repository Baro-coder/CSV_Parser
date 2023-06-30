/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `src/csvp.cpp` for details.
 */

#include <csvp/private/_csvwriter.hpp>

namespace _CSVP
{
    CSV_Writer::CSV_Writer()
    {
        this->name = "Writer";
    }

    CSV_Writer::CSV_Writer(std::string)
    {
        this->name = name;
    }

    CSV_Writer::~CSV_Writer()
    {
        this->name = "";
    }

    void CSV_Writer::introduce(void)
    {
        std::cout << "CSV_Writer(" << this->name << ") says: Hello!" << std::endl;
    }
}
