#include <stdio.h>
#include <stdlib.h>
//remember that the intel 8080 is little endian, so smaller value bytes show up first for multibyte data

enum opcode{//this is more for identifying multibyte instructions better
    NOP = 0x00,
    JMP = 0xC3
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
            case NOP:
                break;
            case JMP:
                break;
            default:
                break;
        }



    }
}


