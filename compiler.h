#ifndef COMPILER_H_INCLUDED
#define COMPILER_H_INCLUDED
#include "file.h"
#include <vector>
#include <string>
class compiler{
    public:
        File input_file;
        File output_file;
        std::vector<unsigned short> opcodes;
        std::string line;
    public:
        void run();
        void inteperate_line();
};
#endif // COMPILER_H_INCLUDED
