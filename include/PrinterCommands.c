#include <gb.h>
#include "CommandBytes.h"

void PrinterInit(void){
    PrinterCommand(PRINTER_INIT);

}

void PrinterCommand(char *PrinterCmd) {

}

int PrinterGetStatus() {

//7 Low battery
//6 Other
//5 Paper Jam
//4 Packet Error
//3 Unprocessed/ready
//2 Image data full
//1 Printing
//0 Checksum error
}

int PrinterErrorCheck() {

}

void PrintTile(char *Tile) {

}

void SendByte(char byte) {
    
}