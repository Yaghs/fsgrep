/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.c to edit this template
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "fsgrep.h"

void fsgrep(const char *filename, const char *searchterm) {
    char line[1024];

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "cannot open file %s\n", filename);
        exit(1);
    }

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, searchterm) != NULL) {
            printf("%s", line);
        }
        else{
            continue;
        }
    }

    fclose(fp);
    printf("----------PROGRAM COMPLETE----------\n");
}