#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<errno.h>
#include<string.h>
#include<fcntl.h>
#include<time.h>

void statinfo(char *path){
	struct stat file;
	stat(path, &file);
    printf("Printing stats on %s \n", path);
    printf("Size: %ld \n", file.st_size);
    printf("File permissions: %d \n", file.st_mode);
    printf("Time of last access: %s \n", ctime(&file.st_atime));
}

int main() {
	statinfo("main.c");
}