// лаба 6_1_1.cpp 

#include <iostream> 

#include <iomanip> 

#include <time.h> 

using namespace std;

void mas(int* b, const int size, const int max, const int min)

{

	int M;

	for (int i = 0; i < size; i++)

	{

		M = b[i] = min + rand() % (max - min + 1);

		cout << M << " ";

	}

}

void sum(int* b, const int size)

{

	int S = 0;

	for (int i = 0; i < size; i++)

	{

		if ((b[i] > 0))

		{

			S += b[i];

		}

	}

	cout << endl;

	cout << "Sum = " << S << endl;

}

void count(int* b, const int size)

{

	int C = 0;

	for (int i = 0; i < size; i++)

	{

		if ((b[i] > 0))

		{

			C++;

		}

	}

	cout << endl;

	cout << "Count = " << C << endl;

}

void mas2(int* b, const int size)

{

	{

		for (int i = 0; i < size; i++) {

			if ((b[i] > 0))

			{

				b[i] = 0;

			}

			cout << b[i] << " ";

		}

	}

}

int main()

{

	srand((unsigned)time(NULL));

	const int size = 24;

	int b[size];

	int max = 75;

	int min = -15;

	mas(b, size, max, min);

	sum(b, size);

	count(b, size);

	mas2(b, size);

	return 0;

}
