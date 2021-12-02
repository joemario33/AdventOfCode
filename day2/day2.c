#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main () {
	FILE* inpt = NULL;
	char* buff = NULL;
	size_t len = 0;
	int result;
	
	while ( getline( &buff, &len, inpt ) != -1) {
	
		//TODO
	}
	

	printf("%d", result);
	return (0);

}
