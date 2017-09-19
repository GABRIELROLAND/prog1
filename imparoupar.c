#include<stdio.h>
int main ()
{
int n,opc;
do
{
printf("\n Digite um Numero\n");
scanf("%d",&n);
if(n%2==0)
{
printf("\nEste numero e Par\n");
}
else
{
printf("\nEste numero e impar\n");
}
printf("\nMenu\n");
printf("-----------------------");
printf("\nDeseja Continuar? 1-sim 2-nao\n");
scanf("%d",&opc);
}
while(opc==1);
system("pause");
return 0;
}
