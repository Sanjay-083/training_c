#include<stdio.h>
void main(){
    int n;
    printf("ENTER the number:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("%d\n", n * i);
    }

}