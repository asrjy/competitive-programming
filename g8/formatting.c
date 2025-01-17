#include<stdio.h>
int main(){
    /*
    int a, b;
    scanf("%2d %3d", &a, &b);
    a = 12345;
    b = 123456;
    printf("%4d %5d", a, b);
    float p, q;
    printf("\n");
    scanf("%3f %4f", &p, &q);
    printf("%4.1f %10.2f", p, q);
    */
    int x, y, z;
    scanf("%d%*d%d",&x,&y,&z);
    printf("%d %d %d",x,y,z);
    return 0;
}
