#include <stdio.h>

int main(){
    int a, b, c, max;
    printf("Enter the values : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b){
        max = a;
    }
    else{
        max = b;
    }
    if(max > c){
        printf("Largest number is %d",max);
    }
    else{
        printf("Largest number is %d",c);
    }
    return 0;
}
