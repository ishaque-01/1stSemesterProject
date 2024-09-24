#include <iostream>
#include <limits>
#include <cctype>

// Use this library if you are using windows if linux or mac don't change it
// #include <windows.h>

using namespace std;

// 3x3 Board
char arr[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, column;
char play = 'X';
bool draw = false;
string player_1 = "", player_2 = "";

// 5x5 Board
char arr_2[5][5] = {{'a', 'b', 'c', 'd', 'e'}, {'f', 'g', 'h', 'i', 'j'}, {'k', 'l', 'm', 'n', 'o'}, {'p', 'q', 'r', 's', 't'}, {'u', 'v', 'w', 'x', 'y'}};

void game_name()
{

	cout << "\t\t  _____ _        _____            _____           \n";
	cout << "\t\t |_   _(_) ___  |_   _|_ _  ___  |_   _|__   ___   \n";
	cout << "\t\t   | | | |/ __|   | |/ _` |/ __|   | |/ _ \\ / _ \\  \n";
	cout << "\t\t   | | | | (__    | | (_| | (__    | | (_) |  __/  \n";
	cout << "\t\t   |_| |_|\\___|   |_|\\____|\\___|   |_|\\___/ \\___|  \n";
}
void game_name_2()
{

	cout << "\t\t      | _____ _        _____            _____          |\n";
	cout << "\t\t      ||_   _(_) ___  |_   _|_ _  ___  |_   _|__   ___ |\n";
	cout << "\t\t      |  | | | |/ __|   | |/ _` |/ __|   | |/ _ \\ / _ \\|\n";
	cout << "\t\t      |  | | | | (__    | | (_| | (__    | | (_) |  __/|\n";
	cout << "\t\t      |  |_| |_|\\___|   |_|\\____|\\___|   |_|\\___/ \\___||\n";
	cout << "\t\t      |                                                |\n";
	cout << "\t\t      |________________________________________________|       \n";
}

void enter_name()
{

start:
	cout << endl
		 << endl;
	game_name();
	cout << endl
		 << endl;
	cout << "\t\t ______________________________________________\n\n";
	cout << "\t\t  ENTER NAME OF THE PLAYER NO 1: ";
	getline(cin, player_1);
	cout << "\n\t\t ______________________________________________\n";
	if (player_1.empty())
	{
		// system("cls");
		system("clear");
		goto start;
	}

	cout << endl;
start_1:

	cout << "\t\t  ENTER NAME OF THE PLAYER NO 2: ";
	getline(cin, player_2);

	if (player_2.empty())
		goto start_1;
}

void game_2()
{
	// system("cls");
	system("clear");

	// Works in windows
	// system("color 3");

	// For linux	
	cout << "\033[38;2;0;55;218m";

	cout << endl;
	game_name();

	cout << endl;
	cout << "\t\t   " << player_1 << ":[X]" << "\t\t\t\t" << player_2 << ":[O]" << endl;

	cout << "\t\t _________________________________________________\n";
	cout << endl
		 << endl;
	cout << "\t\t\t       |     |     |     |     " << endl;
	cout << "\t\t\t    " << arr_2[0][0] << "  |  " << arr_2[0][1] << "  |  " << arr_2[0][2] << "  |  " << arr_2[0][3] << "  |  " << arr_2[0][4] << "  " << endl;
	cout << "\t\t\t  _____|_____|_____|_____|_____" << endl;
	cout << "\t\t\t       |     |     |     |     " << endl;
	cout << "\t\t\t    " << arr_2[1][0] << "  |  " << arr_2[1][1] << "  |  " << arr_2[1][2] << "  |  " << arr_2[1][3] << "  |  " << arr_2[1][4] << "  " << endl;
	cout << "\t\t\t  _____|_____|_____|_____|_____" << endl;
	cout << "\t\t\t       |     |     |     |     " << endl;
	cout << "\t\t\t    " << arr_2[2][0] << "  |  " << arr_2[2][1] << "  |  " << arr_2[2][2] << "  |  " << arr_2[2][3] << "  |  " << arr_2[2][4] << "  " << endl;
	cout << "\t\t\t  _____|_____|_____|_____|_____" << endl;
	cout << "\t\t\t       |     |     |     |     " << endl;
	cout << "\t\t\t    " << arr_2[3][0] << "  |  " << arr_2[3][1] << "  |  " << arr_2[3][2] << "  |  " << arr_2[3][3] << "  |  " << arr_2[3][4] << "  " << endl;
	cout << "\t\t\t  _____|_____|_____|_____|_____" << endl;
	cout << "\t\t\t       |     |     |     |     " << endl;
	cout << "\t\t\t    " << arr_2[4][0] << "  |  " << arr_2[4][1] << "  |  " << arr_2[4][2] << "  |  " << arr_2[4][3] << "  |  " << arr_2[4][4] << "  " << endl;
	cout << "\t\t\t       |     |     |     |     " << endl;
}

void player_turn_2()
{
	char choice;
	do
	{
	turn:
		if (play == 'X')
			cout << "\n\n\t\t     " << player_1 << "[X]: ";
		else if (play == 'O')
			cout << "\n\n\t\t     " << player_2 << "[O]: ";

		cin >> choice;

		if (cin.fail() || !isalpha(choice) || cin.peek() != '\n' || choice == 'z' || choice == 'Z')
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			goto turn;
		}
		else
			break;
	} while (true);

	switch (choice)
	{
	case 'A':
	case 'a':
		row = 0;
		column = 0;
		break;
	case 'B':
	case 'b':
		row = 0;
		column = 1;
		break;
	case 'C':
	case 'c':
		row = 0;
		column = 2;
		break;
	case 'D':
	case 'd':
		row = 0;
		column = 3;
		break;
	case 'E':
	case 'e':
		row = 0;
		column = 4;
		break;
	case 'F':
	case 'f':
		row = 1;
		column = 0;
		break;
	case 'G':
	case 'g':
		row = 1;
		column = 1;
		break;
	case 'H':
	case 'h':
		row = 1;
		column = 2;
		break;
	case 'I':
	case 'i':
		row = 1;
		column = 3;
		break;
	case 'J':
	case 'j':
		row = 1;
		column = 4;
		break;
	case 'K':
	case 'k':
		row = 2;
		column = 0;
		break;
	case 'L':
	case 'l':
		row = 2;
		column = 1;
		break;
	case 'M':
	case 'm':
		row = 2;
		column = 2;
		break;
	case 'N':
	case 'n':
		row = 2;
		column = 3;
		break;
	case 'O':
	case 'o':
		row = 2;
		column = 4;
		break;
	case 'P':
	case 'p':
		row = 3;
		column = 0;
		break;
	case 'Q':
	case 'q':
		row = 3;
		column = 1;
		break;
	case 'R':
	case 'r':
		row = 3;
		column = 2;
		break;
	case 'S':
	case 's':
		row = 3;
		column = 3;
		break;
	case 'T':
	case 't':
		row = 3;
		column = 4;
		break;
	case 'U':
	case 'u':
		row = 4;
		column = 0;
		break;
	case 'V':
	case 'v':
		row = 4;
		column = 1;
		break;
	case 'W':
	case 'w':
		row = 4;
		column = 2;
		break;
	case 'X':
	case 'x':
		row = 4;
		column = 3;
		break;
	case 'Y':
	case 'y':
		row = 4;
		column = 4;
		break;

	default:
		cout << "\n\n\t Invalid Choice";
	}

	if (play == 'X' && arr_2[row][column] != 'X' && arr_2[row][column] != 'O')
	{
		arr_2[row][column] = 'X';
		play = 'O';
	}
	else if (play == 'O' && arr_2[row][column] != 'O' && arr_2[row][column] != 'X')
	{
		arr_2[row][column] = 'O';
		play = 'X';
	}
	else
	{
		cout << "\t\tBox Filled...! Try Again!" << endl;
		player_turn_2();
	}

	game_2();
}

bool game_over_2()
{

	for (int i = 0; i < 5; i++)
	{
		if (arr_2[i][0] == arr_2[i][1] && arr_2[i][0] == arr_2[i][2] && arr_2[i][0] == arr_2[i][3] && arr_2[i][0] == arr_2[i][4] ||
			arr_2[0][i] == arr_2[1][i] && arr_2[0][i] == arr_2[2][i] && arr_2[0][i] == arr_2[3][i] && arr_2[0][i] == arr_2[4][i])
			return false;
	}

	if (arr_2[0][0] == arr_2[1][1] && arr_2[0][0] == arr_2[2][2] && arr_2[0][0] == arr_2[3][3] && arr_2[0][0] == arr_2[4][4] || arr_2[0][4] == arr_2[1][3] && arr_2[0][4] == arr_2[2][2] && arr_2[0][4] == arr_2[3][1] && arr_2[0][4] == arr_2[4][0])
	{
		return false;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr_2[i][j] != 'X' && arr_2[i][j] != 'O')
			{
				return true;
			}
		}
	}

	draw = true;
	return false;
}

void game_1()
{

	// Use this library if you are using windows if linux or mac don't change it
	// HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	// SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE);
	
	cout << "\033[38;2;255;0;255m";


	// For clearing terminal screen in windows for linux we use system("clear");
	// system("cls");
	system("clear");

	cout << endl
		 << endl;
	game_name();

	cout << endl
		 << endl;
	cout << "\t\t   " << player_1 << ":[X]" << "\t\t\t\t" << player_2 << ":[O]" << endl;

	cout << "\t\t _________________________________________________\n";
	cout << endl
		 << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << arr[0][0] << "  |  " << arr[0][1] << "  |   " << arr[0][2] << "  " << endl;
	cout << "\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << arr[1][0] << "  |  " << arr[1][1] << "  |   " << arr[1][2] << "  " << endl;
	cout << "\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t  " << arr[2][0] << "  |  " << arr[2][1] << "  |   " << arr[2][2] << "  " << endl;
	cout << "\t\t\t\t     |     |     " << endl;
}

void player_turn()
{
	int choice;
again:
	if (play == 'X')
		cout << "\n\n\t\t\t\t   " << player_1 << "[X]: ";
	else if (play == 'O')
		cout << "\n\n\t\t\t\t   " << player_2 << "[O]: ";

	cin >> choice;

	if (cin.fail() || cin.peek() != '\n' || choice < 1 || choice > 9)
	{
		cin.sync();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\t\t\t\t   Invalid input.\n";
		goto again;
	}

	switch (choice)
	{
	case 1:
		row = 0;
		column = 0;
		break;
	case 2:
		row = 0;
		column = 1;
		break;
	case 3:
		row = 0;
		column = 2;
		break;
	case 4:
		row = 1;
		column = 0;
		break;
	case 5:
		row = 1;
		column = 1;
		break;
	case 6:
		row = 1;
		column = 2;
		break;
	case 7:
		row = 2;
		column = 0;
		break;
	case 8:
		row = 2;
		column = 1;
		break;
	case 9:
		row = 2;
		column = 2;
		break;
	default:
		cout << "\n\n\t\t\t Invalid Choice";
	}

	if (play == 'X' && arr[row][column] != 'X' && arr[row][column] != 'O')
	{
		arr[row][column] = 'X';
		play = 'O';
	}
	else if (play == 'O' && arr[row][column] != 'X' && arr[row][column] != 'O')
	{
		arr[row][column] = 'O';
		play = 'X';
	}
	else
	{
		cout << "\n\t\t\t\t   Box Filled...! Try Again!" << endl;
		player_turn();
	}

	game_1();
}

bool game_over()
{

	for (int i = 0; i < 3; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
			return false;
	}
	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] || arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
	{
		return false;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] != 'X' && arr[i][j] != 'O')
			{
				return true;
			}
		}
	}

	draw = true;
	return false;
}

void disicion()
{
	if (play == 'X' && draw == false)
		cout << "\n\t\t\t  " << player_2 << " Wins! Congratulations." << endl;

	else if (play == 'O' && draw == false)
		cout << "\n\t\t\t  " << player_1 << " Wins! Congratulations." << endl;
	else
		cout << "\n\t Game Draw.";
}

void start_menu()
{

	cout << endl
		 << endl;
	cout << "\t\t       ________________________________________________       \n";
	cout << "\t\t      |                                                |      \n";
	game_name_2();
	cout << "\t\t _________________________________________________________       \n";
	cout << "\t\t|                                                         |     \n";
	cout << "\t\t|                     O |  X  | O                         |     \n";
	cout << "\t\t|                   ____|_____|____                       |     \n";
	cout << "\t\t|                       |     |                           |     \n";
	cout << "\t\t|                     O |  X  | X                         |     \n";
	cout << "\t\t|                   ____|_____|____                       |     \n";
	cout << "\t\t|                       |     |                           |     \n";
	cout << "\t\t|                     X |  O  | O                         |     \n";
	cout << "\t\t|                                                         |     \n";
	cout << "\t\t|                                                         |     \n";
	cout << "\t\t|               ~~~~~~~~~~~~~~~~~~~~~                     |     \n";
	cout << "\t\t|              |        START        |                    |     \n";
	cout << "\t\t|               ~~~~~~~~~~~~~~~~~~~~~                     |     \n";
	cout << "\t\t|                                                         |    \n";
	cout << "\t\t|_________________________________________________________|    \n";

	cout << "\n\t\t\t  ";

	// for winndows use pause for linux or mac use getChar() for wait
	// system("pause");
	getchar();

	// system("cls");
	system("clear");
}

void play_again_3x3()
{

	arr[0][0] = '1';
	arr[0][1] = '2';
	arr[0][2] = '3';
	arr[1][0] = '4';
	arr[1][1] = '5';
	arr[1][2] = '6';
	arr[2][0] = '7';
	arr[2][1] = '8';
	arr[2][2] = '9';
	row = 0;
	column = 0;
	play = 'X';
	draw = false;
	player_1 = "";
	player_2 = "";
}
void play_again_5x5()
{

	arr_2[0][0] = 'a';
	arr_2[0][1] = 'b';
	arr_2[0][2] = 'c';
	arr_2[0][3] = 'd';
	arr_2[0][4] = 'e';
	arr_2[1][0] = 'f';
	arr_2[1][1] = 'g';
	arr_2[1][2] = 'h';
	arr_2[1][3] = 'i';
	arr_2[1][4] = 'j';
	arr_2[2][0] = 'k';
	arr_2[2][1] = 'l';
	arr_2[2][2] = 'm';
	arr_2[2][3] = 'n';
	arr_2[2][4] = 'o';
	arr_2[3][0] = 'p';
	arr_2[3][1] = 'q';
	arr_2[3][2] = 'r';
	arr_2[3][3] = 's';
	arr_2[3][4] = 't';
	arr_2[4][0] = 'u';
	arr_2[4][1] = 'v';
	arr_2[4][2] = 'w';
	arr_2[4][3] = 'x';
	arr_2[4][4] = 'y';
	row = 0;
	column = 0;
	play = 'X';
	draw = false;
	player_1 = "";
	player_2 = "";
}

int main()
{

	// system("color 2");
	cout << "\033[32m";

	start_menu();
	enter_name();
	// system("CLS");
	system("clear");

levell:
	cout << endl;
	game_name();
	int level;

	cout << endl
		 << endl;
	cout << "\t\t\t __________________________\n";
	cout << "\t\t\t|                          |\n";
	cout << "\t\t\t|      Select Level        |\n";
	cout << "\t\t\t|__________________________|\n";
	cout << "\t\t\t|                          |\n";
	cout << "\t\t\t|  1. Beginner             |\n";
	cout << "\t\t\t|__________________________|\n";
	cout << "\t\t\t|                          |\n";
	cout << "\t\t\t|  2. Intermediate         |\n";
	cout << "\t\t\t|__________________________|\n";
	cout << "\n\n\t\t\tEnter Level: ";
	cin >> level;

	if (cin.fail() || cin.peek() != '\n')
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		// system("cls");
		system("clear");
		goto levell;
	}

again_1:
	if (level == 1)
	{
		while (game_over())
		{
			game_1();
			player_turn();
		}
		disicion();
		char again;
		cout << "\n\t\tDo you want to play again? Y/N: ";
		cin >> again;
		if (again == 'y' || again == 'Y')
		{
			play_again_3x3();
			enter_name();
			// system("CLS");
			system("clear");
			goto levell;
			goto again_1;
		}
		else
			cout << "\t\tThanks for playing";
	}
	else if (level == 2)
	{
		while (game_over_2())
		{
			game_2();
			player_turn_2();
		}
		disicion();
		char again;
		cout << "\n\t\tDo you want to play again? if yes press Y: ";
		cin >> again;
		if (again == 'y' || again == 'Y')
		{
			play_again_5x5();
			enter_name();
			// system("CLS");
			system("clear");
			goto levell;
			goto again_1;
		}
		else
			cout << "\t\tThanks for playing";
	}
	else
	{
		// system("CLS");
		system("clear");
		goto levell;
	}

	return 0;
}

// to-do: add leaderboard using filing for save records.