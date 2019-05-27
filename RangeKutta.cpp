#include<iostream.h>
#include<conio.h>
#include<math.h>
float func(float x,float y)
{
 float f;
 f = y - x;
 return(f);
}
void main()
{
  clrscr();
  float h=0.1,k1,k2,k3,k4,x,y;
  x = 0.0;
  y = 2.0;
  int i=0;
  while(i<3)
  {
   k1 = h*func(x,y);
   k2 = h*func(x + (h/2.0) , y + (k1/2.0));
   k3 = h*func(x + (h/2.0) , y + (k2/2.0));
   k4 = h*func(x+h , y+k3);
   y = y + ((1.0/6.0)*(k1 + (2.0*k2) + (2.0*k3) + k4));
   x = x + h;
   i++;
   cout<<y<<endl;
  }
  getch();
}
