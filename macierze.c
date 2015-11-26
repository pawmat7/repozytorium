#include<stdio.h>
//Size1 to liczba wierszy
//Size2 to liczba kolumn
#define SIZE1 3
#define SIZE2 3
int mnozenie(int macierz1[SIZE1][SIZE2], int macierz2[SIZE2][SIZE1], int wr, int kl)
{
	int h, s=0;
		for(h=0;h<SIZE2;h++)
			s=macierz1[wr][h]*macierz2[h][kl]+s;
	return s;	
}	


int main (void)
{
	int macierz1[SIZE1][SIZE2];
	int macierz2[SIZE2][SIZE1];
	int i, j, k, l, m, n, o, p, q, r;
	
	//wczytywanie
	for(i=0;i<SIZE1;i++)
		{
			for(j=0;j<SIZE2;j++)
			{
				printf("Podaj element [%d,%d] macierzy 1: ",i+1, j+1);
				scanf("%d",&macierz1[i][j]);
			}
		}
	printf("\n");
	for(k=0;k<SIZE2;k++)
		{
			for(l=0;l<SIZE1;l++)
			{
				printf("Podaj element [%d,%d] macierzy 2: ",k+1, l+1);
				scanf("%d",&macierz2[k][l]);
			}
		}	
	//wyświetlanie
	printf("\nMacierz 1:\n");
	for(m=0;m<SIZE1;m++)
		{
			printf("[");
			for(n=0;n<SIZE2;n++) printf("%d ",macierz1[m][n]);
			printf("\b]\n");			
		}	
	printf("\nMacierz 2:\n");
		for(o=0;o<SIZE2;o++)
		{
			printf("[");
			for(p=0;p<SIZE1;p++) printf("%d ",macierz2[o][p]);
			printf("\b]\n");			
		}			
	printf("\nIloczyn macierzy 1 i macierzy 2:\n");
		for(q=0;q<SIZE1;q++)
			{
				printf("[");
				for(r=0;r<SIZE1;r++) printf("%d ", mnozenie(macierz1, macierz2, q, r));
				printf("\b]\n");
			}		
	return 0;
}				 
