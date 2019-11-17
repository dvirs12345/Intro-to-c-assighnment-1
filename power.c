// Author: Dvir Sadon and Noa Elram
#include <stdio.h>
#define EXP 2.7182
inline double Pow(double x, int y)
{
	double result =1;
	for(int i = 0;i<y;i++)
	{
		result = result*x;
	} 
	return result;
}
inline double Exp(int x)
{
	double result = Pow(EXP,x);
	return result;
}