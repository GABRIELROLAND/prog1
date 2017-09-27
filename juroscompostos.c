#include<stdio.h>
#include<math.h>
int main()
{
	float preco,parcela,juros;
	int i,opc;
	do
{
	printf("\nDigite o Valor a ser Financiado!!\n");
	scanf("%f",&preco);
	printf("\nDigite o numero de Parcelas Desejado!\n");
	scanf("%f",&parcela);
	printf("\nEntre com o Juros!!\n");
	scanf("%f",&juros);
	for(i=1;i<=parcela;i++)
{
	printf("\nValor do %d mes:%.2f\n",i,(pow((1+(juros/100)),parcela)*preco)/parcela);	//formula para dar o valor por parcela com juros //
}
	printf("\nValor Total com Juros:%.2f\n",(pow((1+(juros/100)),parcela)*preco)); //formula para dar o valor total com juros//
	printf("\nDeseja Continuar?\n1=Sim 2-nao\n");
	scanf("%d",&opc);
}
	while(opc==1);
	
	if(opc==2)
{
	printf("\nObrigado ate a Proxima!!!!!\n---------------------------");
}

	system("pause");
	return 0;
}



