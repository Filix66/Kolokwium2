#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <string>

using namespace std;

fstream plik;

void zad1();
void zad2();
void zad3(string text);
void zad4(string text);

void cw1();
void cw2();
void cw3(string text);
void cw4(string text);

int main()
{
	string x = "Filip lubi placki";

	//kolokwium 1

	//zad1();
	//zad2();
	//zad3(x);
	//zad4(x);

	//kolokwium 2
	//cw1();
	//cw2();
	//cw3(x);
	cw4(x);
}

void zad1(){
	plik.open("zad1.txt", ios::out);
	string text;
	cout << "Wpisz Text: ";
	getline(cin,text);
	plik << text;

	plik.close();
}

void zad2(){
	plik.open("zad1.txt", ios::in);

	string text, najSlowo;
	int dlugosc = 0, dlugosc2 = 0;

	while (!plik.eof())
	{
		plik >> text;
		dlugosc = text.length();
		
		if (dlugosc > dlugosc2)
		{
			dlugosc = dlugosc2;
			najSlowo = text;
		}
	}

	cout << najSlowo << " " << najSlowo.length();
	plik.close();
}

void zad3(string text) 
{
	int amount = 0;

	for (size_t i = 0; i <= text.length(); i++)
	{
		if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'y')
		{
			amount++;
		}
	}

	cout << amount;
}

void zad4(string text) {

	int locznie = 0;

	for (size_t i = 0; i <= text.length(); i++)
	{
		if (text[i] == ' ')
		{
			cout << "spacja na miejscu: " << i << endl;
			locznie++;
		}

	}

	cout << "spacji lacznie: " << locznie;
}

void cw1()
{
	plik.open("cw1.txt", ios::out);

	bool x = true;
	int liczba, oneOrTwo;

	while (x)
	{
		cout << "Podaj liczbe do wprowadzena: ";
		cin >> liczba;
		plik << liczba << endl;
	
		cout << "Chcesz wprowadzic nastepna liczbe? Wcisnij 1 jak nie to 2: ";
		cin >> oneOrTwo;

		if (oneOrTwo == 1){
			x = true;
		}
		else {
			x = false;
		}
	}

	plik.close();
}

void cw2() {


	plik.open("cw1.txt", ios::in);

	int najLiczba = 0, liczba = 0;

	while (!plik.eof())
	{
		plik >> liczba;

		if (liczba > najLiczba)
		{
			najLiczba = liczba;
		}
	}

	cout << "najwieksza liczba: " << najLiczba;
	plik.close();
}

void cw3(string text) {

	int liczba = 1;

	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] != ' ') 
		{
			if (liczba % 2 == 0)
			{
				cout << text[i] << text[i];
			}
			else {
				cout << text[i];
			}
			liczba++;
		}
		else {
			cout << text[i];
		}
	}
}

void cw4(string text){

	int liczbaWystompien = 0;

	for (size_t i = 0; i < text.length(); i++)
	{
		if (text[i] == 'a')
		{
			liczbaWystompien++;
		}
	}

	cout << liczbaWystompien;
}