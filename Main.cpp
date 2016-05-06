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

//Inicia el juego
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
			int movimientoSexy = 0;
			int movimientojugada = 0;
		//Juga Turno 1
			for (int i = 5; i >= 0; --i)
			{
				if (matri[i][col]==0)
				{
					matri[i][col]=1;
					i=-1;
					movimientoSexy = i;
				}
			}

			//Verificacion de Jugador 1;
			//Diagonales
			for (int i = 0; i < 4; ++i)
			{
				int x = movimientoSexy - i, y = movimientoSexy + i;
				if (x > -1 && x < 6 && y > -1 && y <7)
				{
					if (matri[x][y]==1)
					{
						++movimientojugada;
					}
					else if (matri[x-1][y+1] == 0 || matri[x-1][y+1] == 2)
					{
						i=5;
						int pos = x, pos2 = y;
						movimientojugada = 0;
						for (int j = 0; j < 4; ++j)
						{
							int pos = x+j, pos2 = y - j;
							if (pos > -1 && pos < 6 && pos2 > -1 && pos2 < 7)
							{
								if (matri[pos][pos2] == 1)
								{
									++movimientojugada;
								}
							}
						}
					}
				}
			}
			//

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

			//Verificacion de Jugador 2;
			//Diagonales
			for (int i = 0; i < 4; ++i)
			{
				int x = movimientoSexy - i, y = movimientoSexy + i;
				if (x > -1 && x < 6 && y > -1 && y <7)
				{
					if (matri[x][y]==2)
					{
						++movimientojugada;
					}
					else if (matri[x-1][y+1] == 0 || matri[x-1][y+1] == 1)
					{
						i=5;
						int pos = x, pos2 = y;
						movimientojugada = 0;
						for (int j = 0; j < 4; ++j)
						{
							int pos = x+j, pos2 = y - j;
							if (pos > -1 && pos < 6 && pos2 > -1 && pos2 < 7)
							{
								if (matri[pos][pos2] == 2)
								{
									++movimientojugada;
								}
							}
						}
					}
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