#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	
	if( x <= 0 )
	{
		cout << "Podana liczba nie jest dodatnia";
		return 0;
	}

	cout << x;
	return 0;
}
