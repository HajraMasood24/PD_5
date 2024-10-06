#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1(int ex,int ey);



int ex=2, ey=2;

main()
{


	system("cls");
	printMaze();
	printEnemy1();
	
	while(true)
	{	
		int d=1;
		moveEnemy1(ex,ey);
		int ex=ex+d;
		if (ex==20)
		{
			d=-d;
		}
		if (ex==2)
		{
			d=-d;
		}
	}
	return 0;


}

void printEnemy1()
{
	
	gotoxy(ex,ey);
         cout<<"  ____  "<<endl;
	gotoxy(ex,ey+1);
	 cout<<" : -- : "<<endl;
	gotoxy(ex,ey+2);
	 cout<<"  ....   "<<endl;
	gotoxy(ex,ey+3);
	 cout<<"  ^  ^   "<<endl;
}


void eraseEnemy1()
{
	
	gotoxy(ex,ey);
         cout<<"        "<<endl;
	gotoxy(ex,ey+1);
	 cout<<"         "<<endl;
	gotoxy(ex,ey+2);
	 cout<<"        "<<endl;
	gotoxy(ex,ey+3);
	 cout<<"         "<<endl;
}

void moveEnemy1(int ex,int ey)
{
	gotoxy(ex,ey);
	printEnemy1();
	Sleep(200);
	gotoxy(ex,ey);
	void eraseEnemy1();

}

void printMaze()
{
	cout<<"###################################################"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"##                                               ##"<<endl;
	cout<<"###################################################"<<endl;
}


void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}