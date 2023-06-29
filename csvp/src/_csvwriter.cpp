#include "_csvwriter.hpp"

namespace csv_parser
{
    CSV_Writer::CSV_Writer()
    {
        this->name = "Writer";

#ifdef DEBUG
        std::cerr << "DEBUG :: CSV_Reader :: Creating instance (at " << this << ")" << std::endl;
#endif
    }

    CSV_Writer::CSV_Writer(std::string)
    {
        this->name = name;

#ifdef DEBUG
        std::cerr << "DEBUG :: CSV_Writing :: Creating instance (at " << this << ")" << std::endl;
#endif
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
