// Author: Dvir Sadon and Noa Elram
#include <stdio.h>
float add(float x , float y)
{
	return x+y;
}

float sub(float x , float y)
{
	return x-y;
}

double mul(double x, int y)
{
	return y*x;
}

double div(double x , int y)
{
	return x/y;
}
int main()
{
	//Enter code here ↓↓
	printf("add = %.4f\n", add(5,3));
	printf("sub = %.4f\n", sub(5,3));
	printf("mul = %.4f\n", mul(5,3));
	printf("div = %.4f\n", div(6,3));
	return 0;
}
