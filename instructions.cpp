#include "compiler.h"
#include <string>
#include <sstream>
///0nnn - SYS addr
void compiler::sys()
{
    std::string temp="";
    for(unsigned int iii=4;iii<line.length();iii++){
        temp+=line[iii];
    }
    std::string opcode="0"+temp;
    string_too_opcode(opcode);
}
///1nnn - JP addr
void compiler::jp()
{
    std::string temp="";
    for(unsigned int iii=3;iii<line.length();iii++){
        temp+=line[iii];
    }
    std::string opcode="1"+temp;
    string_too_opcode(opcode);
}
///2nnn - CALL addr
void compiler::call()
{
    std::string temp="";
    for(unsigned int iii=5;iii<line.length();iii++){
        temp+=line[iii];
    }
    std::string opcode="2"+temp;
    string_too_opcode(opcode);
}
///3xkk - SE Vx, byte
void compiler::se()
{
    std::string temp="3";
    for(unsigned int iii=3;iii<line.length();iii++){
        if((line[iii]==',')|(line[iii]==' ')){
            9*10;
        }else{
            temp+=line[iii];
        }
    }
    string_too_opcode(temp);
}
///4xkk - SNE Vx, byte
void compiler::sne()
{
    std::string temp="4";
    for(unsigned int iii=4;iii<line.length();iii++){
        if(line[iii]==','|line[iii]==' '){
            9*10;
        }else{
            temp+=line[iii];
        }
    }
    temp+='0';
    string_too_opcode(temp);
}
///5xy0 - SER Vx, Vy
void compiler::ser()
{
    std::string temp="5";
    for(unsigned int iii=4;iii<line.length();iii++){
        if(line[iii]==','|line[iii]==' '){
            9*10;
        }else{
            temp+=line[iii];
        }
    }
    temp+='0';
    string_too_opcode(temp);
}
///6xkk - LD Vx, byte
void compiler::ld()
{
    std::string temp="6";
    for(unsigned int iii=3;iii<line.length();iii++){
        if(line[iii]==','|line[iii]==' '){
            9*10;
        }else{
            temp+=line[iii];
        }
    }
    string_too_opcode(temp);
}
///7xkk - ADD Vx, byte
void compiler::add()
{
    std::string temp="7";
    for(unsigned int iii=3;iii<line.length();iii++){
        if(line[iii]==','|line[iii]==' '){
            9*10;
        }else{
            temp+=line[iii];
        }
    }
    string_too_opcode(temp);
}
void compiler::ldr()
{
    std::string temp="8";
    for(unsigned int iii=4;iii<line.length();iii++){
        if(line[iii]==','|line[iii]==' '){
            9*10;
        }else{
            temp+=line[iii];
        }
    }
    temp+='0';
    string_too_opcode(temp);
}
