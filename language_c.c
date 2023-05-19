#include<stdio.h>
int main() {
int i, N, Somme ;
printf("donner un entier N : ") ;
scanf("%d", &N);
i=0;
Somme=0;
while (i <= N) {

Somme=Somme+i ;
i = i+1;

}
printf("la somme de %d premiers entiers = %d \n", N, Somme);
return 0;
}