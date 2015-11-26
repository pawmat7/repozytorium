#include<stdio.h>
#define SIZE 5
int sumowanie(v1, v2)
{
	int suma;
	suma=v1+v2;
	return suma;	
}
int main(void) 
{
	int i, j, k;
	int suma1;
	int v1[SIZE];
	int v2[SIZE];
	printf("podaj wsp wektora v1: ");
	printf("\n");
	for(i=0;i<SIZE;i++)
		scanf("%d ",&v1[i]);
	printf("podaj wsp wektora v2: ");
	printf("\n");
	for(j=0;j<SIZE;j++)
		scanf("%d",&v2[j]);
	printf("suma to: ");
	for(k=0;k<SIZE;k++)
	{
		suma1=sumowanie(v1[k], v2[k]);
		printf("%d ", suma1); 
	}	
	return 0;
}	
