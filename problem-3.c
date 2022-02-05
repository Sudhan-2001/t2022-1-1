#include <stdio.h>


int main()

{
    
int a,i=1,j=1;
    



printf("Enter the count\n");
    

scanf("%d",&a);


if(a%2==0)
{
    
a=a-1;

}


while(i<=a)

{
        

printf("%d ",j);
        

j+=2;
        

i++;
    

}


    

return 0;

}