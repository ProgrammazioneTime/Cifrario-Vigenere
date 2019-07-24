#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char frase[100], verme[100];
	int max,i,val,mod,salto;
	while(1)
	{
		system("cls");
		printf("Inserisci la frase da decifrare: ");
		fgets(frase,100,stdin);
		max=strlen(frase);
		
		printf("Inserisci il verme: ");
		fgets(verme,max,stdin);
		mod=strlen(verme)-1;
		
		printf("\n\nFrase decifrata: ");
		for(i=0 ,salto=0; i<max-1; i++,salto=0)
		{
			val = verme[i%mod] - 32;
			
			if(frase[i] < 32+val)
			{
				salto=95;
			}
			
			printf("%c",frase[i]-val+salto);
		}
		printf("\n\n");
		system("pause");
	}
}
