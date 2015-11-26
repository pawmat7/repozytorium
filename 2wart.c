#include<stdio.h>
#include<math.h>
void obliczenia(double r, double u, double *pm, double *pa)
{	
	*pm=sqrt(r*r+u*u);
}
int main(void)
{
	double r, u, m, a;
	printf("czesc rzeczywista: ");
	scanf("%lf",&r);
	printf("czesc urojona: ");
	scanf("%lf",&u);
	obliczenia(r, u, &m, &a);
	printf("modul wynosi: %.3f\n", m);
	return 0;
}
