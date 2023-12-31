/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: student
 *
 * Created on September 26, 2023, 9:07 PM
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "fsgrep.h"
/*
 * 
 */
int main(int argc, char** argv) {
   
    const char* searchterm = argv[1];
    const char* filename = argv[2];
    
    
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Cannot open file: %s\n", filename); 
    }
    
    fsgrep(filename, searchterm);
    fclose(fp);
    return 0; // Return 0 to indicate successful execution
}


