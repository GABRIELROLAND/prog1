#include<stdio.h>
int main()
{
int num1,num2,opc;
printf("\n Digite o primeiro numero\n");
scanf("%d",&num1);
printf("\n Digite o segundo Numero\n");
scanf("%d",&num2);
printf("-----------------------------");


printf("\n Menu\n");
do
{
printf("\n1-soma\n2-subtraçao\n3-Multiplicaçao\n4-divisao\n");
scanf("%d",&opc);
}
while(opc<1||opc>4);

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
printf("\nResultado %d*%d=%d\n",num1,num2,num1*num2);	
}
else if(opc==4)
{
printf("\nResultado %d/%d=%d\n",num1,num2,num1/num2);	
}
else if (opc>4)
{
printf("\nDigite uma opcao Valida\n");	
}
system("pause");
return 0;
}
