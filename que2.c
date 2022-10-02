//Write a program to find the Nth term of the Fibonnaci series.
//2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main() {

int a=-1,b=1,c,n,i;


printf("\nenter a number :");
scanf("%d",&n);

for(i=0; i<=n-1; i++)
{
    c=a+b;
    printf("%d\t",c);
    a=b;
    //c=a+b;
    b=c;
  
}

    return 0;

}
