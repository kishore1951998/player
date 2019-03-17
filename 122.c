#include <stdio.h>

int main()
{
   
   char s[100];
   printf("Enter the character");
  
   gets(s);
 
     if(s[3]=='0'&&s[4]=='1')
       
         printf("January");
       
        else if(s[3]=='0'&&s[4]=='2')
         printf("Febrauary");
         else if(s[3]=='0'&&s[4]=='3')
         printf("March");
         else if(s[3]=='0'&&s[4]=='4')
         printf("April");
         else if(s[3]=='0'&&s[4]=='5')
         printf("May");
         else if(s[3]=='0'&&s[4]=='6')
         printf("June");
        else  if(s[3]=='0'&&s[4]=='7')
         printf("July");
      else if(s[3]=='0'&&s[4]=='8')
         printf("August");
         
         
         else if(s[3]=='0'&&s[4]=='9')
         printf("September");
         
           else if(s[3]=='0'&&s[4]=='10')
         printf("October");
         
           else if(s[3]=='0'&&s[4]=='11')
         printf("November");
         
           else if(s[3]=='0'&&s[4]=='12')
         printf("December");
         
       
       
       
 
    return 0;
}
