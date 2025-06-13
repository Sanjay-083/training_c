#include <stdio.h>
void main()
{
    //For Loop
    int n=5;
    for (int i=0;i<=n;i++){
        printf("\n%d",i);
    }

    //While loop
    int i=0;
    while(i<=n){
      printf("\n%d",i);
      i++;
    }

    //do While 
do{
    printf("\n%d", i);
    i++;
}while(i<=n);
}
