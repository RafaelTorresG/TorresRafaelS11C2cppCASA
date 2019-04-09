#include<iostream>
int factorial(int);

int main()
{
 std::cout<<"Inserte numero entero: "<<std::endl;  
 int n;  
 std::cin>>n;
 std::cout<<"el factorial es: "<<factorial(n)<<std::endl;
 return 0;
}



int factorial(int x)
{

 if(x==0||x==1)
  {
   return 1;  
  }  
 else
  {
   int fac=0;  
   int aux=1;
   for(int i=2;i<=x;i++)
    {
     fac=i*aux;
     aux=fac;
    }
  return fac;
  }
}


