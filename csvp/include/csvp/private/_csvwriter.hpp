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
    class CSV_Writer
    {
    private:
        std::string name;

    public:
        CSV_Writer();
        CSV_Writer(std::string name);

        ~CSV_Writer();

        void introduce();
    };
};
