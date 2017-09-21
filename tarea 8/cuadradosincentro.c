#include <stdio.h>
int main() {
	int b=0;
	int a=0;
	for(b=1; b<=6; b=b+1){
	for(a=1; a<=6; a=a+1){
		if(a>=2 && a<=5 && b>=2 && b<=5){
			printf("  ");
		}
			else{
			printf("+ ");
			}
	}
		printf("\n");
	}
	return 0;
}

