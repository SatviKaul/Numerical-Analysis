#include<iostream.h>
#include<conio.h>
#include<math.h>
float calc(float a)
{
 //Equation
 float ans = (a*a*a) - (2*a) - 5;
 return ans;
}

float mid(float a,float b)
{
 float c;
 c = ((a*calc(b)) - b*calc(a))/(calc(b) - calc(a));
 return c;
}
void main()
{
  float a,b,c,ans;
  int i,n;
  clrscr();
  a=2;//-ve
  b=3;//+ve
  cout<<"Enter number of Iterations\n";
  cin>>n;
  i=1;
  while(i<=n)
  {
   c = mid(a,b);
   ans = calc(c);
   cout<<"Iteration : "<<i<<"\tx : "<<c<<"\tAnswer : "<<ans<<endl;
   if(ans<0)
	a = c;
   else
	b = c;

   i++;
  }
  getch();
}
