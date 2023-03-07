#include <iostream>
using namespace std;

bool Simp(int n)
{
	bool check = true;

	if (n == 0 || n == 1)
	{
		check = false;

	}
	else
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				check = false;
			}
			break;
		}
	return check;
}
void Erat(int n,  int mass[], int size)
{
	for (int i = 0; i < size; i++)
	{

		if (Simp(mass[i]))
		{
			cout << "\t" << mass[i];
		}

	}
}

void main()
{
	setlocale(LC_ALL, "ru");

	int n;

	cin >> n;
	int size = n-1;

	int* mass = new int[size];

	int count = 2;

	for (int i = 0; i < size; i++)
	{
		mass[i] = count;
		count++;
	}
	cout << "Begin " " " << n << endl;
	
	Erat(n,  mass, size);

	delete[] mass;
}