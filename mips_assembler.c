#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

int binarytohex(char* binary) {
    return strtol(binary, NULL, 2);
}

void printtofile(FILE* fp, char* binary){
	int hexinstruction = 0;

	hexinstruction = binarytohex(binary);
	fprintf(fp, "0x%08x\n", hexinstruction);

}

char * dectobin32(char * dec){
  if(!strncmp(dec, "0",1)) {
    return "00000";
  }
  if(!strncmp(dec, "1",1)) {
    return "00001";
  }
  if(!strncmp(dec, "2",1)) {
    return "00010";
  }
  if(!strncmp(dec, "3",1)) {
    return "00011";
  }
  if(!strncmp(dec, "4",1)) {
    return "00100";
  }
  if(!strncmp(dec, "5",1)) {
    return "00101";
  }
  if(!strncmp(dec, "6",1)) {
    return "00110";
  }
  if(!strncmp(dec, "7",1)) {
    return "00111";
  }
  if(!strncmp(dec, "8",1)) {
    return "01000";
  }
  if(!strncmp(dec, "9",1)) {
    return "01001";
  }
  if(!strncmp(dec, "10",2)) {
    return "01010";
  }
  if(!strncmp(dec, "11",2)) {
    return "01011";
  }
  if(!strncmp(dec, "12",2)) {
    return "01100";
  }
  if(!strncmp(dec, "13",2)) {
    return "01101";
  }
  if(!strncmp(dec, "14",2)) {
    return "01110";
  }
  if(!strncmp(dec, "15",2)) {
    return "01111";
  }
  if(!strncmp(dec, "16",2)) {
    return "10000";
  }
  if(!strncmp(dec, "17",2)) {
    return "10001";
  }
  if(!strncmp(dec, "18",2)) {
    return "10010";
  }
  if(!strncmp(dec, "19",2)) {
    return "10011";
  }
  if(!strncmp(dec, "20",2)) {
    return "10100";
  }
  if(!strncmp(dec, "21",2)) {
    return "10101";
  }
  if(!strncmp(dec, "22",2)) {
    return "10110";
  }
  if(!strncmp(dec, "23",2)) {
    return "10111";
  }
  if(!strncmp(dec, "24",2)) {
    return "11000";
  }
  if(!strncmp(dec, "25",2)) {
    return "11001";
  }
  if(!strncmp(dec, "26",2)) {
    return "11010";
  }
  if(!strncmp(dec, "27",2)) {
    return "11011";
  }
  if(!strncmp(dec, "28",2)) {
    return "11100";
  }
  if(!strncmp(dec, "29",2)) {
    return "11101";
  }
  if(!strncmp(dec, "30",2)) {
    return "11110";
  }
  if(!strncmp(dec, "31",2)) {
      return "11111";
  }
  else{
     return "00000";
  }
}

char* regtobin(char* reg){
   if(!strncmp(reg, "$zero",5)) {
     return "00000";
   }
   if(!strncmp(reg, "$at",3)) {
     return "00001";
   }
   if(!strncmp(reg, "$v0",3)) {
     return "00010";
   }
   if(!strncmp(reg, "$v1",3)) {
     return "00011";
   }
   if(!strncmp(reg, "$a0",3)) {
     return "00100";
   }
   if(!strncmp(reg, "$a1",3)) {
     return "00101";
   }
   if(!strncmp(reg, "$a2",3)) {
     return "00110";
   }
   if(!strncmp(reg, "$a3",3)) {
     return "00111";
   }
   if(!strncmp(reg, "$t0",3)) {
     return "01000";
   }
   if(!strncmp(reg, "$t1",3)) {
     return "01001";
   }
   if(!strncmp(reg, "$t2",3)) {
     return "01010";
   }
   if(!strncmp(reg, "$t3",3)) {
     return "01011";
   }
   if(!strncmp(reg, "$t4",3)) {
     return "01100";
   }
   if(!strncmp(reg, "$t5",3)) {
     return "01101";
   }
   if(!strncmp(reg, "$t6",3)) {
     return "01110";
   }
   if(!strncmp(reg, "$t7",3)) {
     return "01111";
   }
   if(!strncmp(reg, "$s0",3)) {
     return "10000";
   }
   if(!strncmp(reg, "$s1",3)) {
     return "10001";
   }
   if(!strncmp(reg, "$s2",3)) {
     return "10010";
   }
   if(!strncmp(reg, "$s3",3)) {
     return "10011";
   }
   if(!strncmp(reg, "$s4",3)) {
     return "10100";
   }
   if(!strncmp(reg, "$s5",3)) {
     return "10101";
   }
   if(!strncmp(reg, "$s6",3)) {
     return "10110";
   }
   if(!strncmp(reg, "$s7",3)) {
     return "10111";
   }
   if(!strncmp(reg, "$t8",3)) {
     return "11000";
   }
   if(!strncmp(reg, "$t9",3)) {
     return "11001";
   }
   if(!strncmp(reg, "$k0",3)) {
     return "11010";
   }
   if(!strncmp(reg, "$k1",3)) {
     return "11011";
   }
   if(!strncmp(reg, "$gp",3)) {
     return "11100";
   }
   if(!strncmp(reg, "$sp",3)) {
     return "11101";
   }
   if(!strncmp(reg, "$fp",3)) {
     return "11110";
   }
   if(!strncmp(reg, "$ra",3)) {
       return "11111";
   }
   else{
      return "00000";
   }
}

char* getfunctionCode(char* function){
   // Get the Function out of the string to go to the correct value



   //****************************** ALU INSTRUCTIONS ******************************
	if(!strcasecmp(function, "ADD")){
      return "100000";
	}
	else if(!strcasecmp(function, "ADDU")){
      return "100001";
	}
	else if(!strcasecmp(function, "ADDI")){
      return "001000";
	}
	else if(!strcasecmp(function, "ADDIU")){
      return "001001";
	}
	else if(!strcasecmp(function, "SUB")){
      return "100010";
	}
	else if(!strcasecmp(function, "SUBU")){
      return "100011";
	}
	else if(!strcasecmp(function, "MULT")){
      return "011000";
	}
	else if(!strcasecmp(function, "MULTU")){
      return "011001";
	}
	else if(!strcasecmp(function, "DIV")){
      return "011010";
	}
	else if(!strcasecmp(function, "DIVU")){
      return "011011";
	}
	else if(!strcasecmp(function, "AND")){
      return "100100";
	}
	else if(!strcasecmp(function, "ANDI")){
      return "001100";
	}
	else if(!strcasecmp(function, "OR")){
      return "100101";
	}
	else if(!strcasecmp(function, "ORI")){
      return "001101";
	}
	else if(!strcasecmp(function, "XOR")){
      return "100110";
	}
	else if(!strcasecmp(function, "XORI")){
      return "001110";
	}
	else if(!strcasecmp(function, "NOR")){
      return "100111";
	}
	else if(!strcasecmp(function, "SLT")){
      return "101010";
	}
	else if(!strcasecmp(function, "SLTI")){
      return "001010";
	}
	else if(!strcasecmp(function, "SLL")){ //also get shiftamount
      return "000000";
	}
	else if(!strcasecmp(function, "SRL")){ //also get shiftamount
      return "000010";
    }
	else if(!strcasecmp(function, "SRA")){ //also get shiftamount
      return "000011";
	}
	//****************************** Load/Store INSTRUCTIONS ******************************
	else if(!strcasecmp(function, "LUI")){
      return "001111";
	}
	else if(!strcasecmp(function, "LW")){
      return "100011";
    }
	else if(!strcasecmp(function, "SW")){
      return "101011";
	}
	else if(!strcasecmp(function, "LB")){
      return "100000";
	}
	else if(!strcasecmp(function, "LH")){
      return "100001";
	}
	else if(!strcasecmp(function, "SB")){
      return "101000";
	}
	else if(!strcasecmp(function, "SH")){
      return "101001";
	}
	else if(!strcasecmp(function, "MFHI")){
      return "010000";
	}
	else if(!strcasecmp(function, "MFLO")){
      return "010010";
	}
	else if(!strcasecmp(function, "MTHI")){
      return "010001";
	}
	else if(!strcasecmp(function, "MTLO")){
      return "010011";
	}
	//******************************* Control Flow INSTRUCTIONS *************************** BEQ, BNE, BLEZ, BLTZ, BGEZ, BGTZ, J, JR, JAL,JALR
    else if(!strcasecmp(function, "BEQ")) {
      return "000100";
    }
    else if(!strcasecmp(function, "BNE")) {
      return "000101";
    }
    else if(!strcasecmp(function, "BLEZ")) {
      return "000110";
    }
    else if(!strcasecmp(function, "BGEZ")) {
      return "000001";
    }
    else if(!strcasecmp(function, "BGTZ")) {
      return "000111";
    }
	else if(!strcasecmp(function, "J")) {
      return "000010";
    }
    else if(!strcasecmp(function, "JR")) {
      return "001000";
    }
    else if(!strcasecmp(function, "JAL")) {
      return "000011";
    }
    else if(!strcasecmp(function, "JALR")) {
      return "001001";
    }
    //syscall
    else if(!strcasecmp(function, "SYSCALL")){
        return "001100";
    }
    else{
        printf("%s instruction not implemented", function);
        return NULL;
    }
}

char* getopCode(char* instruction){
    //i formats

    if(!strcasecmp(instruction,"addi")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"addiu")){
       return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"andi")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"ori")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"xori")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"lui")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"beq")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"bne")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"blez")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"bgtz")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"bgez")){  //**********depends on rt**************
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"lb")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"lh")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"lw")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"slti")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"sb")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"sh")){
        return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction,"sw")){
        return getfunctionCode(instruction);
    }

    //j format
    else if(!strcasecmp(instruction, "j")) {
      return getfunctionCode(instruction);
    }

    else if(!strcasecmp(instruction, "jal")) {
      return getfunctionCode(instruction);
    }

    //r format
    else{
        return "000000";
    }
}


char * hextobin(char hex){
  if(hex == '0'){
    return("0000");
  }
  if(hex == '1'){
    return("0001");
  }
  if(hex == '2'){
    return("0010");
  }
  if(hex == '3'){
    return("0011");
  }
  if(hex == '4'){
    return("0100");
  }
  if(hex == '5'){
    return("0101");
  }
  if(hex == '6'){
    return("0110");
  }
  if(hex == '7'){
    return("0111");
  }
  if(hex == '8'){
    return("1000");
  }
  if(hex == '9'){
    return("1001");
  }
  if(hex == 'A' || hex == 'a'){
    return("1010");
  }
  if(hex == 'B' || hex == 'b'){
    return("1011");
  }
  if(hex == 'C' || hex == 'c'){
    return("1100");
  }
  if(hex == 'D' || hex == 'd'){
    return("1101");
  }
  if(hex == 'E' || hex == 'e'){
    return("1110");
  }
  if(hex == 'F' || hex == 'f'){
    return("1111");
  }
  else{
    return NULL;
  }
}


int main(int argc, char * argv[]){

    FILE * input_file;
    FILE * output_file;
    char* instruction;
    char line[32];
    char * rs;
    char * rt;
    char * rd;
    char templine[32];
    char* opcode;
    char* functcode;
    char * shamt = "00000";
    char * regtoken;


     if (argc < 2) {
		printf("Error: You should provide input file.\nUsage: %s <input program> \n\n",  argv[0]);
		exit(1);
	}

    //Open the file
    input_file = fopen(argv[1], "r");
    if(input_file == NULL) {
		printf("Error: Can't open program file %s\n", argv[1]);
		exit(-1);
    }
    output_file = fopen("output_file.txt", "w");
    if(output_file == NULL) {
    printf("Error: Can't open output file\n");
    exit(-1);
    }


    while(fgets(templine,32,input_file) != NULL){
        functcode = "";
        opcode = "";
        instruction = "";
        shamt = "00000";
        strcpy(line, templine);
        if(!strcasecmp(templine, "syscall\n")){
          instruction = strtok(templine, "\n");
        }
        else{
          instruction = strtok(templine, " ");
        }
        opcode = getopCode(instruction);
        //printf("Line: %s", line);
        //printf("OPCODE:  %s\n\n",opcode);



        //R TYPE
        if(0 == strcmp(opcode, "000000")){
          char binary[34] = "";
          functcode = getfunctionCode(instruction);

          /* get the first token */
          strcpy(templine,line);
          regtoken = strtok(templine, " ");
          int i = 0;

          /* walk through other tokens */
          while( regtoken != NULL && strcmp(functcode, "001100")) {
             regtoken = strtok(NULL, " ");
             if(i == 0){
               rd = regtobin(regtoken);
               //printf("rd: %s\n", rd);
             }
             if(i == 1 && !(0 == strcmp(functcode,"000000") || 0 == strcmp(functcode,"000010") || 0 == strcmp(functcode,"000011"))){
               rs = regtobin(regtoken);
               //printf("rs: %s\n", rs);
             }
             if(i == 1 && (0 == strcmp(functcode,"000000") || 0 == strcmp(functcode,"000010") || 0 == strcmp(functcode,"000011"))){
               rt = regtobin(regtoken);
             }
             if(i == 2 && (0 == strcmp(functcode,"000000") || 0 == strcmp(functcode,"000010") || 0 == strcmp(functcode,"000011"))){
               shamt = dectobin32(regtoken);
             }
             else if(i == 2){
               rt = regtobin(regtoken);
               //printf("rt: %s\n", rt);
               strcat(binary,opcode);
               strcat(binary,rs);
               strcat(binary,rt);
               strcat(binary,rd);
               strcat(binary,shamt);
               strcat(binary,functcode);
             }
             i++;
          }
          if(0 == strcmp(functcode,"000000") || 0 == strcmp(functcode,"000010") || 0 == strcmp(functcode,"000011")){
            strcat(binary,opcode);
            strcat(binary,"00000");
            strcat(binary, rt);
            strcat(binary, rd);
            strcat(binary,shamt);
            strcat(binary,functcode);
          }
          if(0 == strcmp(functcode, "001100")){
            strcat(binary,"00000000000000000000000000001100");
          }



          //printf("Line: %sInstruction: %s\nOpcode: %s\nFuction Code: %s\nShift: %s\n", line,instruction,opcode,functcode,shamt);
          //printf("R Binary: %s\n",binary);
          printtofile(output_file, binary);
        }//concludes R TYPE

        //J Format
        else if(0 == strcmp(opcode,"000010") || 0 == strcmp(opcode, "000011")){
          char binary[34] = "";
          char * address;
          strcpy(templine,line);
          //printf("Templine: %s",templine);

          regtoken = strtok(templine, " ");
          //printf("Regtoken 1: %s\n",regtoken);
          int i = 0;


          /* walk through other tokens */
          while( regtoken != NULL ){
            regtoken = strtok(NULL, "x");
            if(i == 1){
              address = regtoken;
              //printf("Address: %s\n",address);
            }
            i++;
          }
          strcat(binary,opcode);
          strcat(binary, "00");
          for(i = 0; i < strlen(address) - 1; i++ ){
            strcat(binary,hextobin(address[i]));
          }
          //printf("J Binary: %s\n",binary);
          printtofile(output_file, binary);

        }

        //I Format
        else{
          char * intermmediate;
          char binary[100] = "";
          strcat(binary, opcode);

          /* get the first token */
          strcpy(templine,line);
          regtoken = strtok(templine, " ");
          int i = 0;

          /* walk through other tokens */
          while( regtoken != NULL && strcmp(functcode, "001100")) {
             regtoken = strtok(NULL, " ");
             if(i == 0){
               rt = regtobin(regtoken);
               //printf("rt: %s\n", rt);
             }
             if(i == 1 ){
               rs = regtobin(regtoken);
               //printf("rs: %s\n", rs);
             }
             if(i == 2 ){
               strcat(binary,rs);
               strcat(binary,rt);
               intermmediate = regtoken;

               if(!strncmp(intermmediate,"0x",2)){
                 char * newhexinter = &intermmediate[2];
                 char newbininter[20] = "";
                 for(int j = 0; j < 16 - ((strlen(newhexinter) - 1) * 4); j++){
                   strcat(newbininter,"0");
                 }
                 strcat(binary, newbininter);
                 for(int j = 0; j < 1; j++){
                   strcat(binary,hextobin(newhexinter[j]));
                 }
                 intermmediate[0] = 'x';

              }

               if(0==strncmp(intermmediate, "0",1)){
                 strcat(binary,"0000000000000000");
               }


               /*if(!strncmp(intermmediate,"-",1)){
                uint32_t temp = strtol(intermmediate,NULL,16);
                temp = 0xFFFF + temp;
                printf("temp: %x", temp);
                char hex_string[9];
                sprintf(hex_string,"%x",temp);
                int j = 0;
                while(!isdigit(hex_string[j]) || !isalpha(hex_string[j])){
                  strcat(binary,hextobin(hex_string[j]));
                  j++;
                }
              }*/

              else{

              }



             }
             i++;
           }




          //printf("Line: %sInstruction: %s\nOpcode: %s\nFuction Code: %s\nShift: %s\n", line,instruction,opcode,functcode,shamt);
          //printf("I Binary: %s\n",binary);
          printtofile(output_file, binary);
        }

    }
    fclose(input_file);
    fclose(output_file);





    return 0;




}
