#include<stdio.h>
#include<unistd.h>
int main(){
    int i;
    for(i=1;i<=150;i++){
        printf("JAY SHREE SHYAM\n");
        fflush(stdout);
        usleep(330000);
    }
    return 0;
}