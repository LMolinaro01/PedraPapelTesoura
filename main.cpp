#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

int playerchoice, num, retry, aprovado, playerresp;

void cpuchoice(); int Volta_Tudo(); void pchoice();

void delay(int milliseconds) //fun��o para ter um timer entre os c�digos
{
    clock_t start_time = clock();
    
    while (clock() < start_time + milliseconds);
}

int main() 
{
	setlocale (LC_ALL,"Portuguese");
	
	retry = 2;
	
	cout << "--------------- Bem Vindo ao Pedra Papel e Tesoura ---------------\n\n";
	
	while (retry = 2)
	{
	
	pchoice(); //escolha do player
	
	cpuchoice(); //escolha da cpu
	
	delay(1000);
	
	if (playerchoice == 1 && num == 1)  //jogador usa pedra e cpu usa papel
	{
		cout << "\n\n-�.. Voc� Perdeu" << endl;
	}
	
	else if (playerchoice == 1 && num == 2) //jogador usa pedra cpu tesoura
	{
		cout << "\n\n-Parab�ns! Voc� Ganhou!!!!" << endl;
	}
	
	else if (playerchoice == 2 && num == 0) //player usa papel e cpu usa pedra
	{
		cout << "\n\n-Aeeeeee Voc� ganhou!" << endl;
	}
	
	else if (playerchoice == 2 && num == 2) //player usa papel e cpu usa tesoura
	{
		cout << "\n\n-Voc� Perdeu, n�o foi dessa vez..." << endl;
	}
	
	else if (playerchoice == 3 && num == 0) //player usa tesoura e cpu usa pedra
	{
		cout << "\n\n-Voc� Perdeu." << endl;
	}
	
	else if (playerchoice == 3 && num == 1) //player usa tesoura e cpu usa papel
	{
		cout << "\n\n-Boa! Voc� Ganhou" << endl;
	}
	
	else 
	{
		cout << "\n\n-Deu Empate..." << endl;
	}
	
	aprovado = 1;
	
	while (aprovado >= 1)
{
	
	cout << "\n-Deseja tentar novamente? (1 = Sim) (2 = N�o)" << endl << endl << "-> Resposta: ";
		
	cin >> retry;
	
	cout << endl;
		
	if (retry == 2)
	{	
		aprovado = 0;
		
		cout << "\n------------------------------ Game Over ------------------------------\n\n";
		
		return 0;	
	}
		
	else if(retry == 1) 
	{
		break;
	}
	
	else
	{
		cout << "-Op��o inv�lida.\n";
		
		aprovado = 1;
	}
}
	
	}
	return 0;
	
	system("pause");
}

void pchoice()
{
	playerresp = 1;
	
	while (playerresp == 1)
{
	
	cout << "-Escolha um desses da�:\n \n 1) Pedra\n 2) Papel\n 3) Tesoura\n";
	
	cout << "\n-> Resposta: ";
	
	cin >> playerchoice;
	
	if (playerchoice != 1 && playerchoice != 2 && playerchoice != 3)
	{
		cout << "\n-Op��o Inv�lida, Tente novamente...\n\n";
	}
	
	else
	{
		break;
	}
}
	cout << "\n(O Computador Est� Escolhendo, Aguarde . . .)" << endl;
	
	delay(1000); //vai botar um timer de 1000 Milissegundos antes do proximo c�digo ser exibido

	switch (playerchoice)
	{
		case 1:
			cout << "\n-Voc� escolheu Pedra e ";
			break;
		case 2:
			cout << "\n-Voc� escolheu Papel e ";
			break;
		case 3:
			cout << "\n-Voc� escolheu Tesoura e ";
			break;
		default:
			cout << "\nOp��o inv�lida";
			exit(1);
	}
	
	delay(1000);
}

void cpuchoice()
{

	unsigned seed = time(0);
	
	srand(seed);
	
    num = rand()%3;
    
	
	if(num == 0) 
	{
		cout << "o Computador escolheu Pedra";
	}
	
	if(num == 1)
	{
		cout << "o Computador escolheu Papel";
	}

	if (num == 2)
	{
		cout << "o Computador escolheu Tesoura";
	}

}
