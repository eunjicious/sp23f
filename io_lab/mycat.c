#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

#define BUFF_SIZE 16

int main(int argc, char* argv[])
{
	int ifd, ofd;
	char* buff;
	ssize_t nreads, nwrites;

	if(argc < 2) {
		fprintf(stdout, "No arguments\n");
		return 0;
	} else if(argc == 2) {
		// output to stdout file  

	} else if(argc == 4 && !strcmp(argv[2], "into")) {
		// output to redirection file 

	} else {
		fprintf(stdout, "Wrong arguments\n");
		return 0;
	}

	// Open input file

	// Allocate buffer 
	if(!(buff = (char*) malloc (sizeof(char) * BUFF_SIZE))){
		fprintf(stdout, "Failed to allocate memory\n");
		exit(-1);
	}

	// Copy files 
	
	// Close files 
}
