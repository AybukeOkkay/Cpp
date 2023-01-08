// Oyun1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string oyuncu1, oyuncu2, gizliKelime, kelime;
char tahmin;
int yanlis = 0;

int main()
{
	cout << "----------Adam Asmaca----------" << endl;
	cout << "Oyuncu1: " << endl;
	cin >> oyuncu1;
	cout << "Oyuncu2: " << endl;
	cin >> oyuncu2;

	cout << oyuncu2 << " tahmin edilmesi için bir kelime giriniz: " << endl;
	cin >> kelime;

	while (gizliKelime.size()!=kelime.size())
	{
		gizliKelime.push_back('?');
	}
	for (int i = 0; i < 30; i++)
	{
		cout << endl;// girilen kelime gözükmesin diye boşluk bırakıldı
	}

	do
	{
		cout << "Bulunan Harflar: "<<endl;
		cout << gizliKelime;
		cout << "Tahmin giriniz: " << endl;
		cin >> tahmin;

		for (int i = 0; i <kelime.length(); i++)
		{
			if (tahmin==kelime[i])
			{
				gizliKelime[i] = tahmin;
				yanlis--;
			}
		}
		yanlis++;
		if (gizliKelime==kelime)
		{
			cout << "Kazandınız." << endl;
			break;
		}
		if (yanlis == 1) {
			cout << "             \n";
			cout << "             \n";
			cout << "             \n";
			cout << "             \n";
			cout << "            \n";
			cout << "            \n";
			cout << "__          \n";

		}
		else if (yanlis==2)
		{
			cout << "             \n";
			cout << "             \n";
			cout << "             \n";
			cout << "             \n";
			cout << "|            \n";
			cout << "|            \n";
			cout << "|__          \n";

		}
		else if (yanlis==3)
		{
			cout << "|             \n";
			cout << "|             \n";
			cout << "|             \n";
			cout << "|             \n";
			cout << "|            \n";
			cout << "|            \n";
			cout << "|__          \n";

		
		}
		else if (yanlis == 4)
		{
			cout << "________            \n";
			cout << "|             \n";
			cout << "|             \n";
			cout << "|             \n";
			cout << "|            \n";
			cout << "|            \n";
			cout << "|__          \n";

		}
		else if (yanlis == 5)
		{
			cout << "________            \n";
			cout << "|    ( )         \n";
			cout << "|             \n";
			cout << "|             \n";
			cout << "|            \n";
			cout << "|            \n";
			cout << "|__          \n";

		}
		else if (yanlis == 6)
		{
			cout << "________            \n";
			cout << "|    ( )         \n";
			cout << "|     |       \n";
			cout << "|     |        \n";
			cout << "|            \n";
			cout << "|            \n";
			cout << "|__          \n";

		}
		else if (yanlis == 7)
		{
			cout << "________            \n";
			cout << "|    ( )         \n";
			cout << "|     |       \n";
			cout << "|     |        \n";
			cout << "|     |       \n";
			cout << "|     |       \n";
			cout << "|__          \n";

		}
		else if (yanlis == 8)
		{
			cout << "________            \n";
			cout << "|    ( )         \n";
			cout << "|     |       \n";
			cout << "|    /|        \n";
			cout << "|     |       \n";
			cout << "|     |       \n";
			cout << "|__          \n";

		}
		else if (yanlis == 9)
		{
			cout << "________            \n";
			cout << "|    ( )         \n";
			cout << "|     |       \n";
			cout << "|    /|/       \n";
			cout << "|     |       \n";
			cout << "|     |       \n";
			cout << "|__          \n";

		}
		else if (yanlis == 10)
		{
			cout << "________            \n";
			cout << "|    ( )         \n";
			cout << "|     |       \n";
			cout << "|    /|/       \n";
			cout << "|     |       \n";
			cout << "|    /|       \n";
			cout << "|__          \n";

		}
		else if (yanlis == 11)
		{
		cout << "________            \n";
		cout << "|    ( )         \n";
		cout << "|     |       \n";
		cout << "|    /|/       \n";
		cout << "|     |       \n";
		cout << "|    /|/       \n";
		cout << "|__          \n";

		}
		else if (yanlis == 12)
		{
		cout << "________            \n";
		cout << "|    ( )         \n";
		cout << "|     |       \n";
		cout << "|    /|/      \n";
		cout << "|     |      \n";
		cout << "|    / /       \n";
		cout << "|__          \n";

		cout << "Oyunu kaybettiniz. " << endl;
		cout << "Kelime: " << kelime;
		}
	} while (yanlis<12);
   
}
