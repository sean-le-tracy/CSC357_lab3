#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 64

int main(){
    int fd = open ("/usr/lib/locale/locale-archive", O_RDONLY);

    if (fd == -1){
        perror("Could not open file");
        return 1;
    }

    ssize_t read_bytes;
    char buffer[BUFFER_SIZE];

    while(read_bytes = read(fd, buffer, BUFFER_SIZE) > 0){

    }

    if (read_bytes == -1){
        perror("Could not read file");
        return 1;
    }
    return 0;

}