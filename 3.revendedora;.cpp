/* 
aluna:Taína Carvalho | 03/03/2023

A revendedora Pica Pau Ltda., paga a seus vendedores, um salário fixo de R$ 350,00, mais
uma comissão fixa de R$ 50,00 por carro vendido e mais 5% do valor das vendas. Faça um
algoritmo que leia o nome do vendedor, quantos carros vendeu e o valor total das vendas.
Ao final, apresente o todos os dados lidos e o salário total do vendedor.

*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	float salario= 350.00;
	float comissao_por_carro, valor_vendas,total;
	int carro_vendido;
	string nome_vendedor;
	
	//entrada
	
	cout<<"insira seu nome vendedor: ";
	cin>>nome_vendedor;
	cout<<"insira a quantidade de carros vendidos: \n";
    cin>>carro_vendido;
	
	//processo
	
	comissao_por_carro = carro_vendido * 50;
	valor_vendas = comissao_por_carro*0.05;
	total= salario+ comissao_por_carro + valor_vendas;
	
	//saida
	
	cout<<"ola vendedor(a) "<<nome_vendedor<<", voce vendeu "<<carro_vendido<<endl;
	cout<<"seu salario e de R$"<<salario<<" mas o total sera de R$"<<total;
	
	
}

