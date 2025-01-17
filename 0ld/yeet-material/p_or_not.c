#include<stdio.h>
int main(){
    int n, i;
    scanf("%d",&n);
    if (n <= 1){
        printf("not a prime\n");
        return 0;
    }; 
    if (n <= 3){
        printf("prime\n");
        return 0;
    } 
    if (n%2 == 0 || n%3 == 0){
        printf("prime\n");
        return 0;
    } 
    for (int i=5; i*i<=n; i=i+6) {
        if (n%i == 0 || n%(i+2) == 0) {
            printf("not a prime\n");
            return 0;
        }
    }
    printf("prime\n");
    return 0; 
}