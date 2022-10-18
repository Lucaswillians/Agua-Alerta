#include <iostream> 
#include <windows.h>
#include <unistd.h> // header do WinApi

using namespace std;

int main ()
{
	char number, awnser;

	
	cout << "Digite uma opcao para lembra-lo(a) de tomar agua: ";
	cout << "\n\n\n";
	cout << "A = a cada 1 hora";
	cout << "\n\n\n";
	cout << "B = a cada 3 horas";
	cout << "\n";
	
	cin >> number;
	
	switch (number)
	{
			
		case 'A' :
			int hours=0, minutes=0, seconds=0, i=0;	
			
	cout << "Defina o horario atual: \n";
	cout << "Hora: \n";
	cin >> hours;
	cout << "Minutos: ";
	cin >> minutes;
	cout << "Segundos: ";
	cin >> seconds;
	

		while (i<1)
		{
		system ("cls");
		if (seconds >= 0 && seconds < 3600)
			{
				++seconds;
			sleep (1);	
			}
		
		if (seconds == 3600 )
			{
				seconds = 0;
				//++minutes;
				
		Beep(5000,3000); // 5000 hertz (C5) por 3000 milissegundos 
     	cin.get(); // espera tocar o som

			
		cout << "Hora de tomar agua!!!"; 
		cout << "\n\n\n\n"; 
		cout << "Por favor, assim que tomar, pressione a tecla enter para confirmar o andamento do sistema! :D "; 
		sleep (15);
			}
		}		
		break;		
	}	
	
	//códigos descartados por serem irrelevantes ao funcionamento
	/*
		if (minutes == 60)
			{
				minutes = 0;
				++hours;
			}
			
		if (hours == 24)
			{
				hours = 0;
			}
			
	*/		
			/*	cout << "\t \t \t \t \t \t \n \n\ \n Relogio: ";
		cout << hours<< "h: " << minutes << "min: " << seconds << "seg: ";
		*/		
		
		
		switch (number)
		{
			
			case 'B' :		
		int hours=0, minutes=0, seconds=0, i=0;	
			
		cout << "Defina o horario atual: \n";
		cout << "Hora: \n";
		cin >> hours;
		cout << "Minutos: ";
		cin >> minutes;
		cout << "Segundos: ";
		cin >> seconds;
	
		while (i<1)
		{
		system ("cls");
		if (seconds >= 0 && seconds < 10800)
			{
				++seconds;
			sleep (1);	
			}
		
		if (seconds == 10800)
			{
				seconds = 0;
				++minutes;
				
		Beep(5000,3000); // 5000 hertz (C5) por 3000 milissegundos 
     	cin.get(); // espera tocar o som
		
		cout << "Hora de tomar agua!!!"; 
		cout << "\n\n\n\n"; 
		cout << "Por favor, assim que tomar, pressione a tecla enter para confirmar o andamento do sistema! :D "; 
		sleep (15);	
			}
		}
		break;
		}		
	
	//códigos descartados por serem irrelevantes ao funcionamento
	/*	if (minutes == 60)
			{
				minutes = 0;
				++hours;
			}
			
		if (hours == 24)
			{
				hours = 0;
			}
			
			*/
			/*	cout << "\t \t \t \t \t \t \n \n\ \n Relogio: ";
		cout << hours<< "h: " << minutes << "min: " << seconds << "seg: ";
			*/	
	
		
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

