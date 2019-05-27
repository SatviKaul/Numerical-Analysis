#include<iostream.h>
#include<conio.h>
#include<math.h>
float func(float x)
{
 float val;
 val = sin(x)/x;
 return val;
}
void main()
{
  clrscr();
  float a,b,h;
  int n,i=1;
  float sum;
  a=1;
  b=3.14;
  cout<<"Enter the number of intervals\n";
  cin>>n;
  //Lets calculate h
  h = (b - a)/n;
  sum = 0;
  sum = sum + func(a);
  a = a+h;
  while(a<b)
  {
   if(i%3 == 0)
   {
   sum = sum + 2*(func(a));
   }
   else
   {
   sum = sum + 3*(func(a));
   }
   i=i+1;
   a = a+h;

  }
  sum = sum + func(b);
  sum = (3*h*sum)/8;
  cout<<"Final Value :\t"<<sum;
  getch();

}

M6.CPP
Displaying M3.CPP.
