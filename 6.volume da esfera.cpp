/* 
aluna:Ta�na Carvalho | 03/03/2023

Fa�a um algoritmo para calcular o volume de uma esfera de raio r. F�rmula:
V = 4pir3 / 3

*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	float volume, raio;
	float pi= 3.14;

	
	//entrada
	
	cout<<"insira um VALOR do raio pessoa bonita :";
	cin>>raio;
	
	//processo
	
	volume=(4*pi*(raio*raio*raio))/3;
	
	//saida
	
	cout<<"\n  o volume da esfera e: "<< volume;
}

