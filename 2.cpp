#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	int fact=1, a,x=0;
	cout << "enter your number:";
	cin >> a;
	for (int i = 1; i<a; i++)
	{
		fact *= i;
		if (fact == a)
		{
			cout << "yes";
			x +=1 ;
		}
	}
	if (x == 0)
		cout << "no";
}