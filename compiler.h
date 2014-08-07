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
        std::string instruction;
    public:
        void run();
        void inteperate_line();
        void get_next_line();
        void strip_instruction();
        void string_too_opcode(std::string opcode);
        void sys();
};
#endif // COMPILER_H_INCLUDED
