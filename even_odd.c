#include<stdio.h>
int main(){
    int a,b;
    printf("enter two number ");
    scanf("%d%d",&a,&b);
    if (a>b)
       printf("a is maxium, %d\n");
    else
       printf("b is maxium,%d\n");
    
    return 0;
}