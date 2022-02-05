#include <stdio.h>

#include <string.h>



int main()

{
    
char str[3];
    
double a,b,c;
    

printf("Enter a value\n");
    
scanf("%lf",&a);
    

printf("Enter b value\n");
    
scanf("%lf",&b);
    

printf("Enter the operation  note: only add,sub,mul,div accepted\n");
    
scanf("%s",str);
    

if(strcmp(str,"add")==0)
{
        
c=a+b;
        
printf("Result = %lf",c);
    
}
    

else if(strcmp(str,"sub")==0)
{
        
c=a+b;
        
printf("Result = %lf",c);
    
}
    

else if(strcmp(str,"mul")==0)
{
        
c=a+b;
        
printf("Result = %lf",c);
    
}
    

else if(strcmp(str,"div")==0)
{
        
c=a+b;
        
printf("Result = %lf",c);
    
}
    

else
{
        
printf("Enter valid operation");
    
}
    
    

return 0;

}