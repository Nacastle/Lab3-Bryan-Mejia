#include <iostream>

using std::cin;
using std::cout;
using std::endl;



int main(int argc, char*argv[])
{
	const int t1=6,t2=7;
	int matri[t1][t2]={0};

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			cout << matri[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}

