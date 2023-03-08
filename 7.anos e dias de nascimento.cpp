/* 
aluna:Taína Carvalho | 03/03/2023

Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. Para isso o
usuário deverá informar apenas a sua data de nascimento. Considere que cada mês tenha
30 dias e o ano tenha 360 dias.

*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	int ano, mes , dia, idade;
	int dia_cont, mes_cont, ano_cont, total_dias;
	
	//entrada
	
	cout<<"insira o dia da sua data de nascimento pessoa bonita: \n";
	cin>>dia;
	cout<<"insira o mes da sua data de nascimento: \n";
	cin>>mes;
	cout<<"insira o ano da sua data de nascimento: \n";
	cin>>ano;
	
	//processo
	
	idade=2023-ano;
	dia_cont=idade*dia;
	mes_cont=idade*mes;
	ano_cont=idade*365;
	total_dias=dia_cont + mes_cont + ano_cont;
	
	//saida
	
	cout<<" voce tem "<<total_dias<<" dias pessoa bonita";
}

