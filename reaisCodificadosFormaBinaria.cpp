#include <stdio.h>
#include <string.h>
#include <math.h>
 
main(){
		
	float result1, result2;
	int r1,r2, x1, x2, faixa1X,faixa2X,faixa1Y,faixa2Y;
	int cromossomo1;
	int cromossomo2;
	int bits;
		
	printf("entre com o numero de bits\n");
	scanf("%i", &bits);
	
	printf("entre com o cromossomo em 1: ");
	scanf("%i", &cromossomo1);
	
	printf("entre com o cromossomo em 2: ");
	scanf("%i", &cromossomo2);
	
    x1 = cromossomo1;
    x2 = cromossomo2;

	printf("\n O numero de bits %i \t cromossomos %i e %i\n", bits, cromossomo1, cromossomo2 );
	
	puts("entre com a faixa 1 [x1 , y1]\n");
	scanf("%i", &faixa1X);
	scanf("%i", &faixa1Y);
	puts("entre com a faixa 2 [x2 , y2]\n");
	scanf("%i", &faixa2X);
	scanf("%i", &faixa2Y);
	
	printf("Faixa 1 [ %i , %i ]\n", faixa1X, faixa1Y);
	printf("Faixa 2 [ %i , %i ]\n\n", faixa2X, faixa2Y);
	
	printf("\n formato binario dos cromossomos 1: ");
     for (int i = bits-1; i>=0; i--){
         r1 = x1 >> i;
         if(r1 & 1){
             printf("1");
         }else{
             printf("0");
         }
     }
     
    printf("\n formato binario dos cromossomos 2: ");
      for (int i = bits-1; i>=0; i--){
         r2 = x2 >> i;
         if(r2 & 1){
             printf("1");
         }else{
             printf("0");
         }
     }

	result1 = faixa1X + x1 * (faixa1Y-faixa1X)/(pow(2,bits)-1);
	result2 = faixa2X + x2 * (faixa2Y-faixa2X)/(pow(2,bits)-1);
	
printf("\n\nresultado da faixa [ %f , %f ]\n", result1, result2 );
}