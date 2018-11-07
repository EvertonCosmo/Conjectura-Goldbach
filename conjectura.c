#include <stdio.h>
#include <stdlib.h>

int eprimo(int num){
	
    int divisores = 0;
    int i;
    for(i=1; i<=num; i++){
        if(num%i==0)
        divisores++;
    }
        if(divisores == 2)
            return 1;
        else
            return 0;
}

int par(int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}

int  main(){
    int num=0;
    int a=0;

    printf("Digite um numero: ");
    scanf("%d",&num);
    int* b = (int*) malloc(sizeof(int)*(num/2));

    for(int i=3; i<=num; i++) {
        if(eprimo(i)) {
            b[i] = i;  
            printf("primo:%d \n",b[i]);
            a++;
          
        }
    }
	printf("numero de primos: %d\n",a);
	
    for(int i=5; i<=num; i++) {

        if(par(i)){

            for(int l=0; l<=num-a; l++) { 
               for(int c=0; c <=num-a; c++) {
                    if(i == (b[l]+b[c]))
                        printf(" %d = %d + %d \n", i, b[l], b[c]);
                }
            }
        }
    }

    free(b);
    
}
