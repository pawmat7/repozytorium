#include<stdio.h>
#include<string.h>
int main (void)
{
	char slowo[100];
	char najdluzsze[100]={0};
	int i;
	FILE *plik;
	plik=(fopen("polski.txt", "r"));
	while(feof(plik)!=1)
	{
		fgets(slowo, 100, plik);
		if(strlen(slowo)>strlen(najdluzsze))
		{
			for(i=0;i<strlen(slowo);i++)
			{
				if(slowo[i]=='\n') break;
				najdluzsze[i]=slowo[i];
			}
		}
	}
	printf("najdluzsze slowo to: %s cokolwiek", najdluzsze);
	fclose(plik);
	return 0;
}
