#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int n, m, x, a, b, c, d;
	cout<<"Введите первое число: ";
	cin >> n;
	cout << "Введите второе число";
	cout << m;
	if (n < 1000 or m < 1000 or n>9999 or m>9999)
	{
		cout << "Ваши числа не являются четырехзначными.";
		exit(0);
	}
	for(int i=n; i<m; i++)
	{
		x = 1;
		a = x / 1000;
		x -= a * 1000;
		b = x / 100;



   

