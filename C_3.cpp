#include <stdio.h>

int wide, length;
float Power;
main(){
	printf("Enter Wide:");
	scanf("%d", &wide);
	printf("Enter Length:");
	scanf("%d", &length);
	Power = wide*length;
	printf("Power= %f", Power);
}
