#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

int playerchoice, num, retry, aprovado, playerresp;

void cpuchoice(); int Volta_Tudo(); void pchoice();

void delay(int milliseconds) //função para ter um timer entre os códigos
{
    clock_t start_time = clock();
    
    while (clock() < start_time + milliseconds);
}

int main() 
{
	setlocale (LC_ALL,"Portuguese");
	
	retry = 2;
	
	cout << "--------------- Pedra x Papel x Tesoura ---------------\n\n";
	
	while (retry = 2)
	{
	
	pchoice(); //escolha do player
	
	cpuchoice(); //escolha da cpu
	
	delay(2000);
	
	if (playerchoice == 1 && num == 1)  //jogador usa pedra e cpu usa papel
	{
		cout << "\n\n-É.. Você Perdeu" << endl;
	}
	
	else if (playerchoice == 1 && num == 2) //jogador usa pedra cpu tesoura
	{
		cout << "\n\n-Parabéns! Você Ganhou!!!!" << endl;
	}
	
	else if (playerchoice == 2 && num == 0) //player usa papel e cpu usa pedra
	{
		cout << "\n\n-Aeeeeee Você ganhou!" << endl;
	}
	
	else if (playerchoice == 2 && num == 2) //player usa papel e cpu usa tesoura
	{
		cout << "\n\n-Você Perdeu, não foi dessa vez..." << endl;
	}
	
	else if (playerchoice == 3 && num == 0) //player usa tesoura e cpu usa pedra
	{
		cout << "\n\n-Você Perdeu." << endl;
	}
	
	else if (playerchoice == 3 && num == 1) //player usa tesoura e cpu usa papel
	{
		cout << "\n\n-Boa! Você Ganhou" << endl;
	}
	
	else 
	{
		cout << "\n\n-Deu Empate..." << endl;
	}
	
	aprovado = 1;
	
	delay(1000);
	
	while (aprovado >= 1)
{
	
	cout << "\n|Deseja tentar novamente? (1 = Sim) (2 = Não)" << endl << endl << "-> Resposta: ";
		
	cin >> retry;
	
	delay(1100);
	
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
		cout << "-Opção inválida.\n";
		
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
	
	cout << "-Faça sua Escolha:\n \n|Pedra-(1)\n|Papel-(2)\n|Tesoura-(3)\n";
	
	cout << "\n-> Resposta: ";
	
	cin >> playerchoice;
	
	if (playerchoice != 1 && playerchoice != 2 && playerchoice != 3)
	{
		cout << "\n-Opção Inválida, Tente novamente...\n\n";
	}
	
	else
	{
		break;
	}
}
	cout << "\n(CPU Está Escolhendo, Aguarde . . .)" << endl;
	
	delay(2000); //vai botar um timer de 1000 Milissegundos antes do proximo código ser exibido

	switch (playerchoice)
	{
		case 1:
			cout << "\n|Player: (Pedra)   |";
			break;
		case 2:
			cout << "\n|Player:  (Papel)   |";
			break;
		case 3:
			cout << "\n|Player: (Tesoura)   |";
			break;
		default:
			cout << "\nOpção inválida";
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
		cout << "CPU: (Pedra)";
	}
	
	if(num == 1)
	{
		cout << "CPU: (Papel)";
	}

	if (num == 2)
	{
		cout << "CPU: (Tesoura)";
	}

}
