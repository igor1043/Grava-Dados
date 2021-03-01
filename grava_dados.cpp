/*
Grava dados é um pequeno programa que lê dados inseridos pelo usuário e guarda num arquivo de texto. Este dados podem ser corrigidos.
Pequeno programa que utiliza a capacidade de gravação e edição local em arquivos utilizando o C++
*/
/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/


#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	int x, y, op;
	char d;
	ofstream gravar;
	ifstream ler;
	do{
		cout<<"\n1 - Cadastro";
		cout<<"\n2 - Listagem \n\n";
		cout<<"\nDigite sua opcao [   ]\b\b\b";
		cin>>op;
		switch(op){
			case 1:
				gravar.open("dados.txt",fstream::app);
					do{
						cout<<"\nQual sua idade? ";cin>>x;
						gravar<<x<<"\n";
						cout<<"\nMais idades <s/n> ? ";cin>>d;
					}while(d=='S' || d=='s');
				gravar.close();
			break;
			case 2:
				ler.open("dados.txt");
				while(ler){
					ler>>y;
					cout<<y<<"\n";
				}
				ler.close();
			break;
			default:
				cout<<"\nOpcao invalida";
			break;
		}
		cout<<"\nVoltar ao menu principal <s/n> ?";cin>>d;
	}while(d=='S' || d=='s');
	cout<<"\n\n";
	return 0;
}
