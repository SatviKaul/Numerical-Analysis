#include<iostream.h>
#include<conio.h>
#include<math.h>
float func(float x,float y)
{
 float val;
 val = pow(x,3) + y;
 return val;
}
void main()
{
  float x,y,h=0.01,n;
  clrscr();
  x =0;
  y =1;
  n = 0.02;
  while(x<n)
  {
   y = y + (h*(func(x,y)));
   x = x + h;
   cout<<x<<"  "<<y<<endl;
  }
  cout<<"Answer : "<<y;
  getch();
}

M7.CPP
Displaying M3.CPP.
