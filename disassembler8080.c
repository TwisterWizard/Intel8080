#include <stdio.h>
#include <stdlib.h>
//remember that the intel 8080 is little endian, so smaller value bytes show up first for multibyte data

//dont think this is the best method since it would require hard coding every possible combination
//will try matching the instruction first and then the targets by checking ranges
//https://www.pastraiser.com/cpu/i8080/i8080_opcodes.html
enum opcode{//this is more for identifying multibyte instructions better
    MOV4 = 0x40,//will probably have to split this up by target register!
    ADD8 = 0x80,//mov instr end and add instr start
    ADC88 = 0x88,//add instr end and adc instr start
    SUB9 = 0x90,
    SBB98 = 0x98,
    ANAa = 0xA0,
    XRAa8 = 0xA8,
    ORAb = 0xB0,
    CMPb8 = 0xB8,
    JMP = 0xC3,
};


//decalaration of necessary var
FILE *rom;
char instBuffer[4];//where the read instruction bytes will go The longest should be 3, so let's make it 4

int main(){
    //read from the h file for space invaders
    rom = fopen("./spaceInvaders/invaders.h", "r"); //open in read mode
    
    //remember that fget moves forward the specified number of bytes in the file
    while(instBuffer[0] == NULL || instBuffer[0] != EOF){
        instBuffer[0] = fgetc(rom);

        switch(instBuffer[0]){
            default://assume NOP, no operation
                break;
        }



    }
}


