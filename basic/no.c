#include<stdio.h>
void main()
{
int n, ans=0,rem;
printf("enter no");
scanf("%d",&n);
while(n>0)
{
rem = n % 10;
ans = ans * 10 + rem;
n = n / 10;
}
while(ans>0)
{
rem=ans%10;
switch(rem)
   {
   case 0:printf("zero");
          break;
    case 1: printf("one ");
	break;
    case 2: printf("two ");
break;	  
    case 3: printf("three ");	
break;  
    case 4: printf("four ");
break;	  
    case 5: printf("five ");
break;	  
    case 6: printf("six ");
break;	  
   case 7: printf("seven ");	
break;  
   case 8: printf("eight ");
break;   
   case 9: printf("nine ");	  
	break;
	}
	ans = ans / 	10;
}	
}