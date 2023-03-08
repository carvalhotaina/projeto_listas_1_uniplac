/* 
aluna:Taína Carvalho | 03/03/2023

Uma sorveteria vende 3 tipos de picolés. Sabendo-se que o picolé do tipo 1 é vendido por
R$ 0,50, o do tipo 2 por R$ 0,60 e o do tipo 3 por R$ 0,75, faça um algoritmo que, para cada
tipo de picolé, mostre a quantidade vendida e o total arrecadado.

*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	float picole_um=0.50;
	float picole_dois=0.60;
	float picole_tres=0.75;
	float total_picole_um,total_picole_dois,total_picole_tres;
	int picole_quant_um,picole_quant_dois,picole_quant_tres;
	
	//entrada
	
	cout<<"insira a quantidade do picole 1 vendidas: ";
	cin>>picole_quant_um;
	cout<<"\n insira a quantidade do picole 2 vendidas: ";
	cin>>picole_quant_dois;
	cout<<"\n insira a quantidade do picole 3 vendidas:";
	cin>>picole_quant_tres;
	
	//processo
	
	total_picole_um = picole_quant_um * picole_um;
	total_picole_dois = picole_quant_dois * picole_dois;
	total_picole_tres = picole_quant_tres * picole_tres;

	//saida
	
	cout<<"\n o total de picoles 1 vendidos foi "<<picole_quant_um<<" e o dinheiro arrecadado foi "<<total_picole_um;
	cout<<"\n o total de picoles 2 vendidos foi "<<picole_quant_dois<<" e o dinheiro arrecadado foi "<<total_picole_dois;
	cout<<"\n o total de picoles 3 vendidos foi "<<picole_quant_tres<<" e o dinheiro arrecadado foi "<<total_picole_tres;
}

