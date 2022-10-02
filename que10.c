
#include<stdio.h>

int main() {
    
         int i=1 , sum,x, r;
        printf("amastrong numbers are :");

       //while(i<=1000) 
       //{
        for(i=1;i<=1000;i++) {
              
              
                x=i;
                sum=0;
           while(x!=0)
           {
             
             r = x%10;
             sum =sum + (r*r*r);
             x = x/10;
           
           } 
           
           if(sum == i) 

           printf("%d\t", sum);
           

          
        }
         return 0;
           }

   
