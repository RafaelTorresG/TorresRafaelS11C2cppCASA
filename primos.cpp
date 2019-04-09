#include<iostream>
#include <math.h>
int main()
{
 std::cout<<"Inserte limite inferior: "<<std::endl;  
 int n;  
 std::cin>>n;
 std::cout<<"Inserte limite superior: "<<std::endl;  
 int m;  
 std::cin>>m;
 
 
 for(int p=n;p<=m;p++)
  {
   int test=2;
   double c=sqrt(p);
   int cont=0;
   while(test<c)
   {
   for(int i=2;i<p;i++)
    {
     if(p%i==0)
     {
      cont++;
     }
     else
     {
      cont=cont;
     }
    }
    test++; 
   }
   if(cont==0&&p!=1&&p!=0)
    {   
 	 std::cout<<p<<std::endl;
    }
    cont=0;
  }
 
return 0;
}

