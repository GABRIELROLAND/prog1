#include<stdio.h>

#include<stdlib.h>

int main ()
{
	int num1,num2,opc;
	printf("Programa Calculadora\n");
    printf("Digite o primeiro numero\n");
    scanf("%d",&num1);
    printf("Digite o segundo numero\n");
    scanf("%d",&num2);
    printf("\nMenu");
    printf("\n-------------\n");
    printf("\n1-Soma\n2-subtraçao\n3-multiplicaçao\n4-divisao");
    printf("\n-------------\n");
    printf("Digite uma opcao\n");
    scanf("%d",&opc);
    if(opc==1)
	{
    printf("\nResultado %d+%d=%d\n",num1,num2,num1+num2);
	}
    else if(opc==2)
	{
	printf("\nResultado %d-%d=%d\n",num1,num2,num1-num2);
	}
	else if(opc==3)
	{
	printf("\nResultado%d*%d=%d\n",num1,num2,num1*num2);
	}
	else if(opc==4)
	{
	printf("\nResultado%d/%d=%d\n",num1,num2,num1/num2);
	}
	else
	{
	printf("Escolha uma Operaçao Valida\n");
	}
	return 0;
}
