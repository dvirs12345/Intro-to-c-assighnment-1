// Author: Dvir Sadon and Noa Elram
#include <stdio.h>
#include "power.c"
#include "basicMath.c"
#include "MyMath.h"
int main()
{
	//Enter code here ↓↓
	printf("Please enter a real number: \n");
	double a;
	scanf("%lf", &a);
	printf("The value of f(x) = e^x +x^3-2 the the point of %.4f is: %.4f\n",a,sub(add(Exp((int)a) , Pow(a,3)),2));
	printf("The value of f(x) = 3x +2x^2 the the point of %.4f is: %.4f\n",a,add(mul(3,a) , mul(Pow(a,2),2)));
	printf("The value of f(x) = (4x^3)/5-2x the the point of %.4f is: %.4f\n",a,sub(div(mul(Pow(a,3),4) ,5), mul(2,a)));
	return 0;
}
