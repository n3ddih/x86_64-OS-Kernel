#include "print.h"
#define MAX 100

void kernel_main(){
    print_clear();
    print_set_color(COLOR_GREEN, COLOR_BLACK);
    print_str("Welcome to my first 64-bit kernel!");
    print_newline();
    print_str("Created by Tran Quang Vu");
    print_newline();
    print_str("Originally from CodePulse youtube channel [ I> ]");
    // while(1){
    //     char[MAX] cmd;
    //     printf("Command: ");
    //     gets(cmd);
    //     printf("%s", cmd);
    // }
}