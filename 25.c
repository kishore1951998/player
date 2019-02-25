#include <stdio.h>

int main()
{
  int N,i,l,k=0,z[10],m,j,t;
  char a[10][10];
  clrscr();
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
      
      scanf("%s",&a[i]);
      
  }
  
   for(i=0;i<N;i++)
  {
    
    
    
l=strlen(a[i]);
      
 z[k]=l;
      k++;
  }
  
  
 
   for(i=0;i<N;i++)
  {
  for(j=i+1;j<N;j++)
   {
       if(z[i]>z[j])
       {
           
           
           t=z[i];
           z[i]=z[j];
           z[j]=t;
           
       }
       
       
   }
  }
  for(i=0;i<N;i++)
  {
      
      
      for(j=0;j<N;j++)
      {
          
          if(z[i]==strlen(a[j]))
          printf("%s\n",a[j]);
      }
  }
  
  
  
}
