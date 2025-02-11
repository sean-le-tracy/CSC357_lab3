#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 2

int main() {
    FILE *fp = fopen("/usr/lib/locale/locale-archive", "r");

    if (fp == NULL) {
        perror("Could not open file");
        return 1;
    }

    char buffer[BUFFER_SIZE];
    size_t bytesRead;

    while (bytesRead = fread(buffer, 1, BUFFER_SIZE, fp) > 0){

    }
        

    fclose(fp);
    return 0;
}