#include "compiler.h"
#include <string>
#include <sstream>
void compiler::sys()
{
    std::string temp="";
    for(unsigned int iii=4;iii<line.length();iii++){
        temp+=line[iii];
    }
    std::string opcode="0"+temp;
    std::istringstream buffer(opcode);
    unsigned short temp_opcode;
    buffer >> std::hex >> temp_opcode;
    opcodes.push_back(temp_opcode);
}
