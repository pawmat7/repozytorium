#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char pole[9]={'0','1','2','3','4','5','6','7','8'};
int stan (void)
	{
	printf(" %c | %c | %c\n", pole[0], pole [1], pole[2]);
	printf("---|---|---\n");
	printf(" %c | %c | %c\n", pole[3], pole [4], pole[5]);
	printf("---|---|---\n");
	printf(" %c | %c | %c\n", pole[6], pole [7], pole[8]);
	return 0;
	}
int ruch_k (void)
{
	int r;
	srand(time(0));
	r=(rand() % 9);
	return r;
}
int ruch_g (void)
	{
	int p;
	printf("podaj numer pola, w ktore wpisac X: ");
	scanf ("%d", &p);
	return p;
	}
int wykonanie_k(int r)
{
	pole[r]='O';
	return 0;
}
int wykonanie_g(int p)
{
	pole[p]='X';
	return 0;
}
	
int spr (int r)
{
	int f;
	if (pole[r]=='X' || pole[r]=='O')
    f=0;
    else
    f=1;
    return f;
}
int koniec (void)
{
	int k;
	if 	(((pole[0]==pole[1]) && (pole[1]==pole[2])) || 
		((pole[3]==pole[4]) && (pole[4]==pole[5]))  ||
		((pole[6]==pole[7]) && (pole[7]==pole[8]))  || 
		((pole[0]==pole[3]) && (pole[3]==pole[6]))  ||
		((pole [1]==pole[4]) && (pole[4]==pole[7])) ||
		((pole[2]==pole[5]) && (pole[5]==pole[8]))  ||
		((pole[0]==pole[4]) && (pole[4]==pole[8]))  || 
		((pole[2]==pole[4]) && (pole[4]==pole[6])))
		k=1;
	else
		k=0;
	return k;
}
int main (void)
{
	int p, r, f, k=0;
	while (k==0)
	{
		stan();
		p=ruch_g();
		wykonanie_g(p);
		k=koniec();
		f=0;
		while(f==0)
        	{
            		r=ruch_k();
            		f=spr(r);
        	}
		wykonanie_k(r);
		k=koniec();
	}	
	stan();
	printf("Koniec gry!\n\n");
	getchar();
	return 0;	
	}
