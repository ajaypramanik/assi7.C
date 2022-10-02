//8. Write a program to find next Prime number of a given number


#include<stdio.h>

int main() {

int num,i,count,n;
printf("enter a number:");
scanf("%d",&n);


for(num=n; 1; num++)
{
    count=0;
    for(i=2; i<=num/2; i++) {
      if(num%i==0) {
        count=1;
      }
    
}
 if(count==0) {
    
printf("%d\t",num) ;
  break;
 }
    }
  
  return 0;
}