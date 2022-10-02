//9. //Write a program to check whether a given number is an Armstrong number
//or not



#include<stdio.h>

#include<math.h>

    int main()
    {
         int i , num,sum,x, r;

         printf("enter a number :") ;
         scanf("%d",&num);
        
        for(i=1;i<=num;i++)
         {    
                x=i;
                sum=0;
           while(x!=0)
           {
            
             r = x%10;
             sum =sum + (r*r*r);
             x = x / 10;
             
           } 
           
        if(sum == i)// &&( i==num))
           {
               //printf("%d\t",i);
           printf("this is amastrong number");
           break;
           }
          else {
          printf("not a amastrong no");
          break;
          }
         }
         return 0;
    }


