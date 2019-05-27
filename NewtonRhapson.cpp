#include<iostream.h>
#include<conio.h>
#include<math.h>
float calc(float a)
{
 //Equation
 float ans = (a*sin(a)) + cos(a);
 return ans;
}
float calcD(float a)
{
 return(a * (cos(a)));
}
float mid(float a)
{
 float c;
 c = a - (calc(a)/calcD(a));
 return c;
}
void main()
{
  float a,b,c,ans;
  int i,n;
  clrscr();
  a=3.14;

  cout<<"Enter number of Iterations\n";
  cin>>n;
  i=1;
  while(i<=n)
  {
   c = mid(a);
   ans = calc(c);
   cout<<"Iteration : "<<i<<"\tx : "<<c<<"\tAnswer : "<<ans<<endl;
   a = c;

   i++;
  }
  getch();
}
