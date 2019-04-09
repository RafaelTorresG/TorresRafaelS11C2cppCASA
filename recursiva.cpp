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

 if(x==0)
  {
   return 1;  
  }  
 else
  {
   int fac=factorial(x-1)*x;  
  return fac;
  }
}


