#pragma once

#include <iostream>


namespace csvp
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
