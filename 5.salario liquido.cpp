/* 
aluna:Ta�na Carvalho | 03/03/2023

Fa�a um algoritmo que leia o nome e o sal�rio bruto de um funcion�rio e calcule o sal�rio
l�quido do mesmo. Sobre o seu sal�rio bruto, incide um desconto de 10% para previd�ncia.
Feito o desconto para a previd�ncia, sobre o restante � feito um desconto de 25% a t�tulo
de imposto de renda. O algoritmo deve mostrar o nome do funcion�rio, o seu sal�rio bruto,
o seu sal�rio l�quido e os descontos.
s
*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	float salario_bruto, previdencia, imposto_renda;
	string nome;
	
	//entrada
	
	cout<<"informe o nome do funcionario: ";
	cin>>nome;
	cout<<"informe o salrio bruto deste funcionario: \n";
	cin>>salario_bruto;

	//processo
	
	previdencia=salario_bruto*0.90;
	imposto_renda= previdencia*0.75;
	
	//saida
	
	cout<<"o funcionario "<<nome<<" ganha o salario bruto de R$"<<salario_bruto;
	cout<<"\n mas com o desconto para a previdencia fica R$ "<<previdencia<<"mais o imposto de renda ficara R$"<<imposto_renda;
	cout<<"\n no final seu salario liquido sera de R$ "<<imposto_renda;

}

