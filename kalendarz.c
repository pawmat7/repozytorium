#include<stdio.h>
int main (void)
{
	int mies, dz, i, j, k, l, m, n, o, p, ldm;
	printf("Wpisz numer miesiaca: ");
	scanf("%d",&mies);
	printf("Wpisz numer dnia tygodnia w pierwszym dniu miesiaca: ");
	scanf("%d", &dz);
	printf("Wpisz liczbe dni w miesiacu: ");
	scanf("%d", &ldm);	
	printf("Miesiac %d\n", mies);
	printf("|Ni |Po |Wt |Sr |Cz |Pt |So |\n");
		for (i=0;i<dz;i++) /*pierwsza linijka*/
			{
				printf("|   ");
				}	
		for (j=1;j<8-i;j++) /*druga linijka*/
			{
				printf("| %d ",j);			
	
				}
		printf("| \n");
		for (k=j;k<j+7;k++) /*trzecia linijka*/
			{
				if(k>9)	
					printf("| %d",k);	
				else
					printf("| %d ",k);
				}
			printf("|\n");	
		for (l=k;l<k+7;l++) /*czwarta linijka*/			
			{
				if(l>9)	
					printf("| %d",l);	
				else
					printf("| %d ",l);
				}
			printf("|\n");	

		if (ldm=30)
			{
				if (dz=6)
					{
						for (m=l;m<l+7;m++) /*5 linijka*/
							{printf("| %d",m);}
							printf("|\n");
						for (n=m;n<ldm+1;n++) /*6 linijka*/
							{printf("| %d", n);}
							}
				else
					for (m=l;m<ldm+1;m++) /*5 linijka*/
						{printf("| %d",m);}
						printf("\n");
					}	
		else if (ldm=31)
	{
				if ((dz=6) || (dz=5))
					{
						for (o=l;o<l+7;o++) /*5 linijka*/
							{printf("| %d",o);}
							printf("|\n");
						for (p=o;p<ldm+1;p++) /*6 linijka*/
							{printf("| %d", p);}
							}
				else
					for (o=l;o<ldm+1;o++) /*5 linijka*/
						{printf("| %d",o);}
						printf("\n");
					}	
		

	return 0;
}
