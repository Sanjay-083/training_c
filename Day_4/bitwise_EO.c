#include<stdio.h>
void main(){
    int n=10;
    for(int i=0;i<n;i++){
        if((n&1)==0){
            printf("EVEN");
            break;
        }
        else
        {
            printf("ODD");
            break;
        }
           
    }
}