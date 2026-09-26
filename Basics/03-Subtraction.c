#include<stdio.h>
 //This program subtracts two numbers
 int main(){
    int a,b,difference;

    //Read two numbers
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
   
    //Calculate the difference
    difference = a -b;
    
    //Display the result
    printf("Difference = %d",difference);
    return 0;
 }