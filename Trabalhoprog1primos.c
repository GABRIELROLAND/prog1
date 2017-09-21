#include<stdio.h>
int main()
{
int opc;
int n,i;

printf("\nOla!!!!\nMeu Nome eh:Gabriel Roland Fernandes\nvou Calcular Numeros Primos\n");
do
{
int primo=0;	
do
{	
printf("\nEntre com um Numero Positivo\n");
scanf("%d",&n);
}
while(n<=0);
for(i=1;i<=n;i++)
{
{	
if(n%i==0)
{
primo++;
}
}
}
if(primo==2)
{
printf("\n O Numero %d eh Primo!!!\n",n);	
}
else
{
printf("\nO Numero %d nao eh Primo!!!\n",n);
}

printf("\nMenu\n-----------------\nDeseja Continuar?\n1-Sim\n2-Nao\n");
scanf("%d",&opc);
}
while(opc==1);
if(opc==2)
{
printf("Obrigado,Ate a Proxima!!!\nPara ver meu codigo entre no Link!\nLink:https://github.com/GABRIELROLAND/prog1\n");	
}
return 0;
}



