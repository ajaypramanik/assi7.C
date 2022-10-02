//3. Write a program to check whether a given number is there in the Fibonacci
//series or not.

#include<stdio.h>

int main() {

int a=-1,b=1,c,i,n;


printf("\nenter a number :");
scanf("%d",&n);

for(i=0; 1; i++)
{
    c=a+b;
    //x=printf("%d\t",c);
    a=b;
    b=c;
    if(n==c) {
        printf("febonacci no");
      break;  
    }
    if(c>n)
     {
        printf("not a febonacci");
        break;
    }

    

}

    return 0;

}
