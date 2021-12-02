#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	FILE* inpt = NULL;
	char* buff = NULL;
	size_t len = 0;
	int vpos = 0;
	int hpos = 0;
	char *input[5];

	int aim =0;

	inpt = fopen ( argv[1], "r");	
	while ( getline( &buff, &len, inpt ) != -1) {
		printf("%s\n", buff);
		input[0] = strtok(buff," ");
		input[1] = strtok(NULL," ");
		
		if (strcmp( input[0], "forward") == 0){
			printf("forward\n");
			hpos = hpos + atoi(input[1]);
			vpos = vpos + (atoi(input[1]) * aim);
		}
		if (strcmp( input[0], "up") == 0){
			printf("up\n");
			aim = aim - atoi(input[1]);
		}
		if (strcmp( input[0], "down") == 0){
			printf("down\n");
			aim = aim + atoi(input[1]);
		}
		
		
	}
	

	printf("%d\n", hpos);
	printf("%d", vpos);
	
	free(buff);

	return (0);
	
}
