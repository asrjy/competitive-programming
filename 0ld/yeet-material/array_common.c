#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n], arr2[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d",&arr2[i]);
    }
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
            } else
                continue;    
        }
    }
    printf("\n");
    return 0;
}
