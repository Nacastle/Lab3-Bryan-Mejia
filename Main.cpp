#include <iostream>

using std::cin;
using std::cout;
using std::endl;



int main(int argc, char*argv[])
{
	const int t1=6,t2=7;
	int matri[t1][t2]={0};

	for (int i = 0; i < 7; ++i)
	{
		cout << i << "\t";
	}
	cout << endl;
	cout << "*************************************************" << endl;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			cout << matri[i][j] << "\t";
		}
		cout << endl;
	}


	bool gane = false;
	while(!gane){
		int col = -1;
		int col2 = -1;
		int turno = 1;
		if (turno = 1)
		{
			while(col<0 || col>6){
				cout << "Jugada invalida";
				cout << "Turno del jugador 1.\nIngrese en que columna desea que caiga su ficha: " << endl;
				cin >> col;
				if (col<0 || col>6)
				{
					cout << "Jugada invalida" << endl;
				}
			}
			int movimientoSexy;
			int a,b;
		//Juga Turno 1
			for (int i = 5; i >= 0; --i)
			{
				if (matri[i][col]==0)
				{
					matri[i][col]=1;
					i=-1;
					a = i;
					b = col;
					movimientoSexy = matri[i][col];
				}
			}

			//Verificacion de Jugador 1;
			int vertical = 1;
			int horizontal = 1;
			int diagonal1 = 1;
			int diagonal2 = 1;
			for (int i = a + 1; matri[i][b] == movimientoSexy && i <= 5; i++){
				vertical++;
			}
			for (int i = a -1; matri[i][b] == movimientoSexy && i >= 0; i--){
				vertical++;
			}
			if (vertical >= 4)
			{
				cout << "Gana jugador 1." << endl;
				gane = true;
			}

		//Imprime Turno 1
			for (int i = 0; i < 7; ++i)
			{
				cout << i << "\t";
			}
			cout << endl;
			cout << "*************************************************" << endl;

			for (int i = 0; i < 6; ++i)
			{
				for (int j = 0; j < 7; ++j)
				{
					cout << matri[i][j] << "\t";
				}
				cout << endl;
			}
			turno = 2;
		}
		if(turno = 2)
		{
			while(col2<0 || col2>6){
				cout << "Jugada invalida";
				cout << "Turno del jugador 2.\nIngrese en que columna desea que caiga su ficha: " << endl;
				cin >> col2;
				if (col2<0 || col2>6)
				{
					cout << "Jugada invalida" << endl;
				}
			}
			//Juga 
			for (int i = 5; i >= 0; --i)
			{
				if (matri[i][col2]==0)
				{
					matri[i][col2]=2;
					i=-1;
				}
			}

			//Imprime Jugada del 2
			for (int i = 0; i < 7; ++i)
			{
				cout << i << "\t";
			}
			cout << endl;
			cout << "*************************************************" << endl;

			for (int i = 0; i < 6; ++i)
			{
				for (int j = 0; j < 7; ++j)
				{
					cout << matri[i][j] << "\t";
				}
				cout << endl;
			}
			turno = 1;
		}
		
	}
	
	return 0;
}

