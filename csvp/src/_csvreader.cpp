#include "_csvreader.hpp"

namespace csvp
{
    CSV_Reader::CSV_Reader()
    {
        this->name = "Reader";

#ifdef DEBUG
        std::cerr << "DEBUG :: CSV_Reader :: Creating instance (at " << this << ")" << std::endl;
#endif
    }

    CSV_Reader::CSV_Reader(std::string)
    {
        this->name = name;

#ifdef DEBUG
        std::cerr << "DEBUG :: CSV_Reader :: Creating instance (at " << this << ")" << std::endl;
#endif
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
