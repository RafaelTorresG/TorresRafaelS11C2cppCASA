#include<iostream>
int dot(int [5], int [5]);
int exe(int [5], int [5]);

int main()
{
 int Mat1[]={1,2,3,4,5};
 int Mat2[]={10,20,30,40,50};
 std::cout<<"Producto punto: "<<dot(Mat1,Mat2)<<std::endl;
 exe(Mat1,Mat2);
 return 0;
}

int dot(int M1[5], int M2[5])
{
 int sum=0;
 for(int n=0;n<5;n++)
 {
  int a=0;
  a=M1[n]*M2[n];
  sum+=a;
 }
 return sum;
}

int exe(int M1[5],int M2[5])
{
 int p[5];
 for(int n=0;n<5;n++)
 {
  std::cout<<M1[n]*M2[n]<<std::endl;
 }
}