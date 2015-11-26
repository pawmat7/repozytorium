#include<stdio.h>
int main (void)
{
	char slowo[100];
	FILE *plik;
	plik=fopen("polski.txt", "r");
	if (plik==NULL) 
	{
		printf("nie otworzono pliku");
		return 1;
	}
	int i=0;
	while(i<5)
	{
		fgets(slowo, 100, plik);
		printf("%s", slowo);
		i++;
	}
	fclose(plik);
	return 0;
}
