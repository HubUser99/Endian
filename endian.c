#include <stdio.h>

int main(void){
	int n = 1;
	// little endian if true
	if(*(char *)&n == 1) {
		printf("\nlittle endian\n");
	} else {
		printf("\nbig endian\n");
	}
}
