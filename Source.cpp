#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>
using namespace std;
void main(){
      string a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 3; k++)
		{
			a[i][k] = "-1";
		}
	}

	cout << "Dispaly\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "|";
		for (int k = 0; k < 3; k++)
		{
			cout<< " "<<a[i][k]<<" ";
		}
		cout <<"|"<< endl;
	}

	string p1, p2;
	cout << "\nEnter 1st Player Name :";
	getline(cin, p1);
	cout << "Enter 2nd Player Name :";
	getline(cin, p2);
	cout << "\n";
	cout << p1 << "\tis X\n" << p2 << "\tis O\n";


	for (int i = 0; i < 3; i++)
	{
		int r, c;
		cout << "\n" << p1 << "Turn\nEnter row or Column :";
		cin >> r >> c;
		a[r][c]="X";
		for (int i = 0; i < 3; i++)
		{
			cout << "|";
			for (int k = 0; k < 3; k++)
			{
				cout << " " << a[i][k] << "\t";
			}
			cout << "|\n";
		}

		if (a[0][0] == "X" && a[1][0] == "X" && a[2][0] == "X" || a[0][1] == "X"&&
			a[1][1] == "X" && a[2][1] == "X" || a[0][2] == "X" && a[1][2] == "X"&&a[2][2] == "X"
			||
			a[0][0] == "X" && a[0][1] == "X" && a[0][2] == "X" || a[1][0] == "X"&&
			a[1][1] == "X" && a[1][2] == "X" || a[2][0] == "X" && a[2][1] == "X"&&a[2][2] == "X"
			||
			a[0][0] == "X" && a[1][1] == "X" && a[2][2] == "X" || a[0][2] == "X"&&
			a[1][1] == "X" && a[2][0] == "X"

			)
		{
			cout <<"\n" <<setw(50) << setfill('~') << '~' << endl;
			cout << "\t\t" << p1 << " WINNER!!! \n";
			cout << setw(50) << setfill('~') << '~' << endl;
			_getch();
		}


		else
		{


			int r1, c1;
			cout << "\n" << p2 << "Turn\nEnter row or Column :";
			cin >> r1 >> c1;
			a[r1][c1] = "O";
			for (int i = 0; i < 3; i++)
			{
				cout << "|";
				for (int k = 0; k < 3; k++)
				{
					cout << " " << a[i][k] << "\t";
				}
				cout << "|\n";
			}
			if (a[0][0] == "O" && a[1][0] == "O" && a[2][0] == "O" || a[0][1] == "O"&&
				a[1][1] == "O" && a[2][1] == "O" || a[0][2] == "O" && a[1][2] == "O"&&a[2][2] == "O"
				||
				a[0][0] == "O" && a[0][1] == "O" && a[0][2] == "O" || a[1][0] == "O"&&
				a[1][1] == "O" && a[1][2] == "O" || a[2][0] == "O" && a[2][1] == "O"&&a[2][2] == "O"
				||
				a[0][0] == "O" && a[1][1] == "O" && a[2][2] == "O" || a[0][2] == "O"&&
				a[1][1] == "O" && a[2][0] == "O"

				)
			{
				cout<<"\n"<< setw(50) << setfill('~') << '~'<<endl;
				cout  << "\t\t"<< p2 << " WINNER!!! \n";
				cout << setw(50) << setfill('~') << '~' << endl;
				_getch();
			}


		}
	}

	

	cout << "\n";
	
	system("pause");
}