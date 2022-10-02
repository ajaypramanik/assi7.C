//Write a program to print all Prime numbers under 100

#include<stdio.h>

int main() {

int num,i,count;

for(num=1; num<100; num++)
{
    count=0;
    for(i=2; i<=num/2; i++) {
      if(num%i==0) {
        count=1;
      }
    
}
 if(count==0) {
printf("%d\t",num) ;
 }
    }
  
  return 0;
}