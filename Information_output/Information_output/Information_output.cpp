
#include "pch.h"
#include <iostream>
#include <clocale>  //Psani hacku a carek
using namespace std;

void Printing(int width, int height, char c);

int WindowWidth=119;
char text[][51] =
{
	"Moje jméno je LUKÁŠ NEVRKLA.",
	"Je mi 17 let.",
	"Chodím na Střední průmyslovou školu Třebíč.",
	"Jsem ve 3. ročníku technického lycea.",
	"Moje třída je TLA3."
};

int main()
{
	setlocale(LC_ALL, "");
	Printing(WindowWidth, 5, '>');

	for (int i = 0, k=0; i < sizeof(text) / sizeof(text[0]); i++, k=0)
	{
		while (text[i][k] != '\0') { k++; }
		for (int x = 0; x < (WindowWidth - k) / 2; x++) { cout << "-"; }
		cout << text[i];
		for (int x = 0; x < (WindowWidth - k) / 2; x++) { cout << "-"; }
		cout << "\n";
	}

	Printing(WindowWidth, 5, '<');

	system("pause");
	return 0;
}

void Printing(int width, int height,char c)
{
	for (int y = 0; y < height; y++)
	{	
		for (int x = 0; x < width; x++)
		{
			cout << c;
		}

		cout << "\n";
	}
}
