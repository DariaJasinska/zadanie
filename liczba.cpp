#include <iostream>
#include <cmath>

using namespace std;

bool czy_bezkwadratowa( int n )
{
	if( n < 1 ) return false;

	for( int i = 2; i <= sqrt(n); i++ )
	{
		if( n % ( i * i ) == 0 )
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int x;
	cin >> x;

	if( x <= 0 )
	{
		cout << "Podana liczba nie jest dodatnia";
		return 0;
	}

	bool wynik = czy_kwadratowa(x);
	cout << x << ", ";

	if( wynik == true )
	{
		cout << "liczba bezkwadratowa";
	}
	else
	{
		cout << "liczba nie jest bezkwadratowa";
	}

	return 0;
}
