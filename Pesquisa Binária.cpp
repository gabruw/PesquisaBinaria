#include<stdio.h>
#include<stdlib.h>

int vetorPesquisa[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main()
{ 
	int num;
	int x;
	int beg = 0;
	int half = 0;
	int end = 9;
	
	printf("Insira um numero para a busca: ");
	scanf("%d", &num); 
 
	if(vetorPesquisa[0] == num)
	{
		printf("Numero encontrado com sucesso no indice 0\n");
	}
	else if(vetorPesquisa[9] == num)
	{
		printf("Numero encontrado com sucesso no indice 9\n");
	}
	else
	{
		while(beg < end)
		{ 
			half = (beg + end)/2; 
		
			if (vetorPesquisa[half] == num)
			{ 
				printf("Numero encontrado com sucesso no indice %d\n", half);
				break;
			}
			else if(num > vetorPesquisa[half])
			{ 
				beg = half + 1;
			}
			else
			{ 
				end = half;
			}
		}	 
	}
}
