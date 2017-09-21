//tabla de n a m con scanf y for anidado
#include <stdio.h>
int main() {
	int a;
	printf("ingresa donde empieza: ");
	scanf ("%d", &a);
	int b;
	printf("ingresa donde termina: ");
	
	scanf("%d", &b);
	int i;
	for(i=1; i<=b; i=i+1){
		
		printf("%d x %d =%d\n", a, i, a*i);

	}
	return 0;
	
}
