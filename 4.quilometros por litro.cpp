/* 
aluna:Ta�na Carvalho | 03/03/2023

Considere que para um autom�vel que realizou determinado percurso, se tenha: marca,
quilometragem inicial, quilometragem final e litros consumidos. Fa�a um algoritmo que
mostre um relat�rio contendo, al�m destes dados, qual o consumo do autom�vel em
Km/litros.

*/

#include <iostream>
using namespace std;
main ( )
{
	//variaveis
	
	string marca;
	float km_inicial, km_final, litros_consu, km_litros;

	//entrada
	
	cout<<"informe a marca do seu veiculo: ";
	cin>>marca;
	cout<<"informe a quilometragem  inicial: ";
	cin>>km_inicial;
	cout<<"informe a quilometragem final: ";
	cin>>km_final;
	cout<<"informe os litros consumidos ";
	cin>>litros_consu;
	
	//processo
	
	km_litros= litros_consu/km_final;
	
	//saida
	
	cout<<"\n marca do automovel: "<<marca<<" cujo o km inicial eram "<<km_inicial<<" e o final "<<km_final<<endl;
	cout<<"consumindo "<<litros_consu<<" litros, consumiu rodando por km em litros "<<km_litros<<"km\l";

}

