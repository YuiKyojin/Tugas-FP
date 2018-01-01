#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

#define SPONSOR char(176) //diluar
#define BATAS_KIRI 16
#define BATAS_KANAN 58
#define SIRKUIT char(186) //didalam

//fungsi kordinat
void gotoxy(int x, int y)
{
        COORD koordinat = {x, y};
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), koordinat);
}
//buat mobil
void car(int x, int y)
{
	gotoxy (x,y);   cout << "___" << endl;
	gotoxy (x,y+1); cout << "0|0 " << endl;
	gotoxy (x,y+2); cout << " | " << endl;
	gotoxy (x,y+3); cout << "0|0" << endl;
}
//untuk opening dan agar teks berada di tengah 
void opening(string s, int y)
{
    gotoxy(40 - (s.length() / 2), y);
    cout << s << endl;
}
//buat sirkuit
void gambarLatar()
{
    for(int i = 0; i <= 29; i++)
    {
        gotoxy(BATAS_KIRI + 3, i); cout << SIRKUIT;
        gotoxy(BATAS_KANAN - 2, i); cout << SIRKUIT;
        gotoxy(BATAS_KIRI, i); cout << SPONSOR << SPONSOR;
        gotoxy(BATAS_KANAN, i); cout << SPONSOR << SPONSOR;
    }
}
//hapus mobil(untuk gerak)
void hapus ()
{
	int x, y;
	gotoxy (x,y);   cout << "   " << endl;
	gotoxy (x,y+1); cout << "   " << endl;
	gotoxy (x,y+2); cout << "   " << endl;
	gotoxy (x,y+3); cout << "   " << endl;
}  

//kontrol mobil
void kontrol ()
{
	int control;
	getch() == control;
}

int main ()
{
	opening("=====WELCOME TO CAR RACING=====", 9);
	opening("Play your old retro car racing game", 10);
	opening("Press any key to play", 15);
	getch();
	
	system("cls");
	
	opening("=====How to Play=====", 6);
	opening("Press A to go left", 8);
	opening("Press D to go right", 9);
	opening("Press any key to play", 12);
	getch();
	
	system("cls");
	
	int spasi = 8, awal = 0;
	gambarLatar();	
	
	car(37,24);
	getch();
	hapus();
}

