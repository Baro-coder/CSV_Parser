/*
 *  Copyright (c) 2023 Baro-coder
 *
 *  This library is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU GENERAL PUBLIC LICENSE v3. See `src/csvp.cpp` for details.
 */

#pragma once

#include <iostream>

namespace _CSVP
{
    class CSV_Reader
    {
    private:
        std::string name;

    public:
        CSV_Reader();

        CSV_Reader(std::string name);

        ~CSV_Reader();

        void introduce();
    };
};
