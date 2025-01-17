#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, a;
    printf("Enter value of a: ");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++){
	if(a%i==0){
	    printf("Not a prime, divisible by %d\n",i);
	    exit(0);
	}
    }
    printf("Prime\n");
}
