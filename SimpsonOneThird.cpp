#include<iostream.h>
#include<conio.h>
#include<math.h>
float func(float x)
{
 float val;
 val = sqrt(tan(x));
 return val;
}
void main()
{
  clrscr();
  float a,b,h;
  int n,i=1;
  float sum;
  a=0;
  b=0.785;
  cout<<"Enter the number of intervals\n";
  cin>>n;
  //Lets calculate h
  h = (b - a)/n;
  sum = 0;
  sum = sum + func(a);
  a = a+h;
  while(a<b)
  {
   if(i%2 == 0)
   {
   sum = sum + 2*(func(a));
   }
   else
   {
   sum = sum + 4*(func(a));
   }
   i=i+1;
   a = a+h;
  }
  sum = sum + func(b);
  sum = (h*sum)/3;
  cout<<"Final Value :\t"<<sum;
  getch();

}
