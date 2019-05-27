#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<math.h>
float calc(float a)
{
	float ans;
	ans=a*(exp(a))-1;
	return ans;
}
float middle(float a, float b)
{
	float c;
	c=(a+b)/2.0;
	return c;
}
void main()
{
	float a,b,c,ans;
	int n,i;
	clrscr();
	a=0;
	b=1;
	cout<<"Enter number of iterations"<<endl;
	cin>>n;
	i=1;
	while(i<=n)
	{
		c=middle(a,b);
		ans=calc(c);
		cout<<"Iteration "<<i<<endl;
		cout<<"X0 "<<c<<endl;
		if(ans<0)
		{
			a=c;
		}
		else
		{
			b=c;
		}
		i++;
	}
	getch();
}
