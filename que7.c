//Write a program to print all Prime numbers between two given numbers

#include<stdio.h>

int main() {

int a,b,num,i,count;
printf("enter number");
scanf("%d",&a);
printf("enter  number");
scanf("%d",&b);

for(num=a; num<=b; num++)
{
    count=0;
    for(i=2; i<=num/2; i++) {
      if(num%i==0) {
        count=1;
        break;
      }
    
}
 if(count==0) {
printf("%d\t",num) ;
 }
    }
  
  return 0;
}