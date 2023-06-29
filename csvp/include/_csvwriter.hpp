#pragma once

#include <iostream>

namespace csvp
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
