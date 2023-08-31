/*4. Receba um vetor A[10] de inteiros e uma letra. Caso a letra seja ‘C’, o vetor
deve ser ordenado em ordem crescente. Se for ‘D’, em ordem decrescente.*/
#include<stdio.h>
    void ordenacao(int vetor[10])
	{
		int i, j, auxiliar;
		char letra;
		printf("Informe uma letra(C/D): ");
	    scanf("%s", &letra);
		if(letra=='C'||letra=='c')
		{
			for(i=0;i<10;i++)
	        {   
	            for(j=i+1;j<10;j++)
	            {  
	                if(vetor[i]>vetor[j])
					{
					    auxiliar=vetor[i];
						vetor[i]=vetor[j];
						vetor[j]=auxiliar; 
				    }
			    }
		    }
	    }
	    else if(letra=='D'||letra=='d')
		{
			for(i=0;i<10;i++)
	        {
	        	for(j=i+1;j<10;j++)
	            {  
	                if(vetor[j]>vetor[i])
					{
					    auxiliar=vetor[j];
						vetor[j]=vetor[i];
						vetor[i]=auxiliar; 
				    }
			    }
		    }
	    }
	    else
		    printf("Letra informada invalida!");
		    
	}
main()
{
	int i, vet[10];
	for(i=0;i<10;i++)
	{
		printf("Informe um valor para o vetor: ");
		scanf("%d", &vet[i]);
	}
	ordenacao(vet);
	for(i=0;i<10;i++)
	{
		printf("%d\n", vet[i]);	
	}
}
