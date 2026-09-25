#include<stdio.h>
// This program adds two numbers
int main(){
    int a,b,sum;
    //read two numbers
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    //Calculate the sum
    sum = a + b;
    //Display the result
    printf("Sum = %d",sum);
    return 0;
}