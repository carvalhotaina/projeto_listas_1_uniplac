/* 
aluna:Taína Carvalho | 03/03/2023

Construa um algoritmo que leia a cotação do dólar, leia um valor em dólares, converta esse
valor para Real e mostre o resultado.

*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	float dolar,reais;
	
	//entrada
	
	cout<<"insira um VALOR EM REAIS por favor pessoa bonita :";
	cin>>reais;
	
	//processo
	
	dolar= reais/5.20;
	
	//saida
	cout<<" a sua conversao para dolar ficou em: "<< dolar;
}

