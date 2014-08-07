#include "compiler.h"
#include <sstream>
void compiler::run()
{

}
void compiler::inteperate_line()
{
    get_next_line();
    if(instruction=="cls"){
        opcodes.push_back(0x00E0);
    }else if(instruction=="ret"){
        opcodes.push_back(0x00EE);
    }else if(instruction=="sys"){
        sys();
    }else if(instruction=="jp"){
        jp();
    }else if(instruction=="call"){
        call();
    }else if(instruction=="se"){
        se();
    }else if(instruction=="sne"){
        sne();
    }else if(instruction=="ser"){
        ser();
    }else if(instruction=="ld"){
        ld();
    }else if(instruction=="add"){
        add();
    }else if(instruction=="ldr"){
        ldr();
    }
}
void compiler::get_next_line()
{
    line=input_file.get_next_line();
}
void compiler::strip_instruction()
{
    for(unsigned int iii=0;iii<line.length();iii++){
        if((line[iii])!=' '){
            instruction+=line[iii];
        }else if(line[iii]==' '){
            break;
        }
    }
}
void compiler::string_too_opcode(std::string opcode)
{
    std::istringstream buffer(opcode);
    unsigned short temp_opcode;
    buffer >> std::hex >> temp_opcode;
    opcodes.push_back(temp_opcode);
}
