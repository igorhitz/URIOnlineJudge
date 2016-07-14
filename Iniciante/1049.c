#include <stdio.h>
#include <string.h>

int main(){
	char palavra[14];

	scanf("%s", &palavra);
	if(strcmp(palavra, "vertebrado") == 0){
		scanf("%s", &palavra);
		if(strcmp(palavra, "ave") == 0){
			scanf("%s", &palavra);
			if(strcmp(palavra, "carnivoro") == 0)
				printf("aguia\n");
			else
				printf("pomba\n");
		}
		else{
			scanf("%s", &palavra);
			if(strcmp(palavra, "onivoro") == 0)
				printf("homem\n");
			else
				printf("vaca\n");	
		}
	}
	else{
		scanf("%s", &palavra);
		if(strcmp(palavra, "inseto") == 0){
			scanf("%s", &palavra);
			if(strcmp(palavra, "hematofago") == 0)
				printf("pulga\n");
			else
				printf("lagarta\n");
		}
		else{
			scanf("%s", &palavra);
			if(strcmp(palavra, "hematofago") == 0)
				printf("sanguessuga\n");
			else
				printf("minhoca\n");	
		}
	}

	return 0;
}