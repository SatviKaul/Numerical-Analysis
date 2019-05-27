#include<iostream.h>
#include<conio.h>
#include<math.h>
float func(float x)
{
 float val;
 val = sqrt(1 + pow(x,2));
 return val;
}
void main()
{
  clrscr();
  float a,b,h;
  int n;
  float sum;
  a=1;
  b=5;
  cout<<"Enter the number of intervals\n";
  cin>>n;
  h = (b - a)/n;
  sum = 0;
  sum = sum + func(a);
  a = a+h;
  while(a<b)
  {
   sum = sum + 2*(func(a));
   a = a+h;
  }
  sum = sum + func(b);
  sum = (h*sum)/2;
  cout<<"Final Value :\t"<<sum;
  getch();

}
