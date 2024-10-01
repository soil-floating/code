//7-29 海伦-秦九韶 - 《C++编程基础及应用》- 习题3-7
#include <stdio.h>
#include <math.h>
double ss(double,double,double);
int main()
{
	double a,b,c,s;
	scanf("%lf %lf %lf",&a,&b,&c);
	ss(a,b,c);
	return 0;
}
double ss(double a,double b,double c)
{
	double s,p;
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	if(a+b<=c||a+c<=b||b+c<=a)
		printf("Error Input.");
	else
		printf("%.2lf\n",s);
	return s;
}