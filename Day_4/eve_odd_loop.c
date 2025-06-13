#include<stdio.h>
void main(){
  int n=10;
  for(int i=0;i<n;i++){
    if(i%2==0){
        printf("%d EVEN \n",i);
    }
    else{
        printf("%d ODD \n", i);
    }
  }
}