#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
	FILE* inpt = NULL;
	char* buff = NULL;
	size_t len = 0;
	int first;
	int second;
	int third;

	int prev;
	int current;
	int count = 0;

	inpt = fopen ( argv[1], "r");
	getline( &buff , &len, inpt);
	first = atoi(buff);
	getline(&buff , &len, inpt);
	second = atoi(buff);
	getline(&buff, &len, inpt);
	third = atoi(buff);
	prev = first + second + third;

	while ( getline( &buff, &len, inpt ) != -1) {
		first = second;
		second = third;
		third = atoi(buff);
		current = first + second + third;
		
		if (current > prev){
			count = count + 1;
		}
		prev = current;
	}
	printf("%d", count);
	return (0);

}
