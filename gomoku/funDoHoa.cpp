# include "funDoHoa.h"
void manHinhGame()
{
	GotoXY(6, 2);
	TextColor(112);
	printf("%c", 201);
	for (int i = 0; i <= 106; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 187);
	for (int i = 0; i <= 28; i++)
	{
		GotoXY(6, 3 + i);
		printf("%c", 186);
	}
	GotoXY(6, 32);
	printf("%c", 200);
	for (int i = 0; i <= 106; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 188);
	for (int i = 0; i <= 28; i++)
	{
		GotoXY(114, 3 + i);
		printf("%c", 186);
	}
	//Trên là khung bự
	GotoXY(11, 4);
	printf("%c", 218);
	for (int i = 0; i <= 17; i++)
	{
		printf("%c", 196);
	}
	printf("%c", 191);
	for (int i = 0; i <= 7; i++)
	{
		GotoXY(11, 5 + i);
		printf("%c", 179);
		GotoXY(30, 5 + i);
		printf("%c", 179);
	}
	GotoXY(11, 13);
	printf("%c", 192);
	for (int i = 0; i <= 17; i++)
	{
		printf("%c", 196);
	}
	printf("%c", 217);
	DrawBoard(12);
	GotoXY(44, 35);
	//Khung dai dien trai 
	GotoXY(89, 4);
	printf("%c", 218);
	for (int i = 0; i <= 17; i++)
	{
		printf("%c", 196);
	}
	printf("%c", 191);
	for (int i = 0; i <= 7; i++)
	{
		GotoXY(89, 5 + i);
		printf("%c", 179);
		GotoXY(108, 5 + i);
		printf("%c", 179);
	}
	GotoXY(89, 13);
	printf("%c", 192);
	for (int i = 0; i <= 17; i++)
	{
		printf("%c", 196);
	}
	printf("%c", 217);
	//Khung dai dien Phai
	TextColor(116);
	GotoXY(15, 6);
	printf("%c%c", 219, 219);
	GotoXY(17, 7);
	printf("%c%c", 219, 219);
	GotoXY(19, 8);
	printf("%c%c%c%c", 223, 220, 220, 223);
	GotoXY(19, 9);
	printf("%c%c%c%c", 220, 223, 223, 220);
	GotoXY(23, 10);
	printf("%c%c", 219, 219);
	GotoXY(25, 11);
	printf("%c%c", 219, 219);
	GotoXY(17, 10);
	printf("%c%c", 219, 219);
	GotoXY(15, 11);
	printf("%c%c", 219, 219);
	GotoXY(23, 7);
	printf("%c%c", 219, 219);
	GotoXY(25, 6);
	printf("%c%c", 219, 219);
	GotoXY(15, 15);
	printf("MOVE :    0");
	GotoXY(15, 18);
	printf("TURN : ");
	//Đây là chữ X
	TextColor(115);
	GotoXY(96, 6);
	printf("%c%c%c%c%c%c", 220, 254, 254, 254, 254, 220);
	GotoXY(96, 11);
	printf("%c%c%c%c%c%c", 223, 254, 254, 254, 254, 223);
	GotoXY(95, 7);
	printf("%c", 223);
	GotoXY(102, 7);
	printf("%c%c", 223, 220);
	GotoXY(95, 10);
	printf("%c", 220);
	GotoXY(102, 10);
	printf("%c%c", 220, 223);
	GotoXY(94, 7);
	printf("%c", 220);
	GotoXY(94, 10);
	printf("%c", 223);
	GotoXY(94, 8);
	printf("%c        %c", 219, 219);
	GotoXY(94, 9);
	printf("%c        %c", 219, 219);
	//Xong O
	GotoXY(95, 15);
	printf("MOVE :    0");
	GotoXY(95, 18);
	printf("TURN : ");
}

void Turn(int i)
{
	if (i == 1)//TurnX
	{
		GotoXY(104, 17);
		printf("  ");
		GotoXY(103, 18);
		printf("    ");
		GotoXY(103, 19);
		printf("    ");
		GotoXY(104, 20);
		printf("  ");
		TextColor(116);
		GotoXY(23, 17);
		printf("%c   %c", 220, 220);
		GotoXY(24, 18);
		printf("%c%c%c", 223, 220, 223);
		GotoXY(23, 19);
		printf("%c%c %c%c", 220, 223, 223, 220);
	}
	else if (i == 2)
	{
		GotoXY(23, 17);
		printf("     ");
		GotoXY(24, 18);
		printf("   ");
		GotoXY(23, 19);
		printf("     ");
		TextColor(115);
		GotoXY(104, 17);
		printf("%c%c", 220, 220);
		GotoXY(103, 18);
		printf("%c  %c", 219, 219);
		GotoXY(103, 19);
		printf("%c  %c", 219, 219);
		GotoXY(104, 20);
		printf("%c%c", 223, 223);
	}
}

void hieuUngXThang()
{
	TextColor(116);
	int speed;
	int stop;
	stop = 0;
	speed = 25;
	system("cls");
xwin:
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(20 + i, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(32 - i * 2, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	//Chữ X

	for (int i = 0; i <= 8; i++)
	{
		GotoXY(45 + i / 2, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(49 + i, 12 - i);
		printf("OOOO");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(53 + i, 8 + i);
		printf("OOOO");
		Sleep(speed);
	}
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(58 + i / 2, 12 - i);
		printf("OOOO");
		Sleep(speed);
	}
	//ĐÂY LÀ W

	for (int i = 0; i <= 8; i++)
	{
		GotoXY(70, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	//Chữ I

	for (int i = 0; i <= 4; i++)
	{
		GotoXY(80, 4 + i);
		printf("OOOO");
		GotoXY(80, 12 - i);
		printf("OOOO");
		GotoXY(80 + i * 2, 8 - i);
		printf("OOOO");
		Sleep(speed);
	}
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(92, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	stop++;
	if (stop != 13)
	{
		TextColor(112 + stop);
		speed = 1;
		Sleep(85);
		goto xwin;
	}
}

void hieuUngOThang()
{
	TextColor(115);
	int speed;
	int stop;
	stop = 0;
	speed = 25;
	system("cls");
owin:
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(20 - i, 4 + i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(16 + i, 8 + i);
		printf("XXXX");
		Sleep(speed);
	}
	GotoXY(24, 12);
	printf("XXXX");
	Sleep(speed);
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(28 + i, 12 - i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(32 - i, 8 - i);
		printf("XXXX");
		Sleep(speed);
	}
	GotoXY(24, 4);
	printf("XXXX");
	Sleep(speed);
	//Chữ O

	for (int i = 0; i <= 8; i++)
	{
		GotoXY(45 + i / 2, 4 + i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(49 + i, 12 - i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(53 + i, 8 + i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(58 + i / 2, 12 - i);
		printf("XXXX");
		Sleep(speed);
	}
	//ĐÂY LÀ W

	for (int i = 0; i <= 8; i++)
	{
		GotoXY(70, 4 + i);
		printf("XXXX");
		Sleep(speed);
	}
	//Chữ I

	for (int i = 0; i <= 4; i++)
	{
		GotoXY(80, 4 + i);
		printf("XXXX");
		GotoXY(80, 12 - i);
		printf("XXXX");
		GotoXY(80 + i * 2, 8 - i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(92, 4 + i);
		printf("XXXX");
		Sleep(speed);
	}
	stop++;
	if (stop != 10)
	{
		TextColor(stop + 112);
		speed = 1;
		Sleep(85);
		goto owin;
	}
}

void hieuUngHoa()
{
	system("cls");
	int speed;
	int stop;
	stop = 0;
	speed = 5;
	TextColor(116);
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(20 + i, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	for (int i = 0; i <= 8; i++)
	{
		GotoXY(32 - i * 2, 4 + i);
		printf("OOOO");
		Sleep(speed);
	}
	//Đây là chữ X

	TextColor(115);
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(90 - i, 4 + i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(86 + i, 8 + i);
		printf("XXXX");
		Sleep(speed);
	}
	GotoXY(94, 12);
	printf("XXXX");
	Sleep(speed);
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(98 + i, 12 - i);
		printf("XXXX");
		Sleep(speed);
	}
	for (int i = 0; i <= 4; i++)
	{
		GotoXY(102 - i, 8 - i);
		printf("XXXX");
		Sleep(speed);
	}
	GotoXY(94, 4);
	printf("XXXX");
	Sleep(speed);
	//Chữ O
	TextColor(114);
draw:
	
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(40, 6 + i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 0; i <= 3; i++)
	{
		GotoXY(42 + i, 6 + i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 0; i <= 3; i++)
	{
		GotoXY(45 - i, 9 + i);
		printf("##");
		Sleep(speed);
	}
	//D

	for (int i = 0; i <= 6; i++)
	{
		GotoXY(48, 6 + i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 0; i <= 2; i++)
	{
		GotoXY(50 + i, 6 + i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 0; i <= 2; i++)
	{
		GotoXY(52 - i, 8 + i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 0; i <= 1; i++)
	{
		GotoXY(51 + i, 11 + i);
		printf("##");
		Sleep(speed);
	}
	//A

	for (int i = 0; i <= 6; i++)
	{
		GotoXY(58 + i / 2, 12 - i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 1; i <= 7; i++)
	{
		GotoXY(62 + i / 2, 5 + i);
		printf("##");
		Sleep(speed);
	}
	GotoXY(62, 10);
	printf("#");
	Sleep(speed);
	//A

	for (int i = 0; i <= 6; i++)
	{
		GotoXY(69 + i / 2, 6 + i);
		printf("##");
		Sleep(speed);
	}
	for (int i = 0; i <= 1; i++)
	{
		GotoXY(74 + i, 11 - i);
		printf("#");
		GotoXY(76 - i, 11 - i);
		printf("#");
		Sleep(speed);
	}
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(78 + i / 2, 12 - i);
		printf("##");
		Sleep(speed);
	}
	stop++;
	if (stop != 11)
	{
		TextColor(112 + stop);
		speed = 1;
		Sleep(85);
		goto draw;
	}
}

void textComment(int scoreX, int scoreY)
{
	TextColor(112);
	GotoXY(36, 4);
	printf(" Nhan[L] de luu game - Nhan [ESC] de thoat game");
	GotoXY(15, 21);
	printf("SCORE : ");
	GotoXY(95, 21);
	printf("SCORE : ");

	numXO(scoreX / 10, 22, 23, 12);
	numXO(scoreX % 10, 27, 23, 12);
	numXO(scoreY / 10, 97, 23, 3);
	numXO(scoreY % 10, 102, 23, 3);

}
void numXO(int X, int x, int y, int mau)
{
	TextColor(mau + 112);
	switch (X)
	{
	case 0:
	{
		GotoXY(x, y);
		printf("%c%c%c", 219, 223, 219);
		GotoXY(x, y + 1);
		printf("%c %c", 219, 219);
		GotoXY(x, y + 2);
		printf("%c%c%c", 219, 220, 219);
		//0
		break;
	}
	case 1:
	{
		GotoXY(x, y);
		printf("%c%c", 220, 219);
		GotoXY(x + 1, y + 1);
		printf("%c", 219);
		GotoXY(x, y + 2);
		printf("%c%c%c", 220, 219, 220);
		break;
	}
	case 2:
	{
		GotoXY(x, y);
		printf("%c%c%c", 223, 223, 219);
		GotoXY(x, y + 1);
		printf("%c=%c", 220, 223);
		GotoXY(2, y + 2);
		printf("%c%c%c", 219, 220, 220);
		break;
	}
	case 3:
	{
		GotoXY(x, y);
		printf("%c%c%c", 223, 223, 219);
		GotoXY(x, y + 1);
		printf("==%c", 219);
		GotoXY(x, y + 2);
		printf("%c%c%c", 220, 220, 219);
		break;
	}
	case 4:
	{
		GotoXY(x, y);
		printf("%c %c", 219, 219);
		GotoXY(x, y + 1);
		printf("%c%c%c", 219, 220, 219);
		GotoXY(x, y + 2);
		printf("  %c", 219);
		break;
	}
	case 5:
	{
		GotoXY(x, y);
		printf("%c%c%c", 219, 223, 223);
		GotoXY(x, y + 1);
		printf("%c%c%c", 219, 220, 220);
		GotoXY(x, y + 2);
		printf("%c%c%c", 220, 220, 219);
		break;
	}
	case 6:
	{
		GotoXY(x, y);
		printf("%c%c%c", 219, 223, 223);
		GotoXY(x, y + 1);
		printf("%c%c%c", 219, 220, 220);
		GotoXY(x, y + 2);
		printf("%c%c%c", 219, 220, 219);
		break;
	}
	case 7:
	{
		GotoXY(x, y);
		printf("%c%c%c", 223, 223, 219);
		GotoXY(x, y + 1);
		printf("%c%c%c", 220, 220, 219);
		GotoXY(x, y + 2);
		printf("  %c", 219);
		break;
	}
	case 8:
	{
		GotoXY(x, y);
		printf("%c%c%c", 219, 223, 219);
		GotoXY(x, y + 1);
		printf("%c%c%c", 219, 220, 219);
		GotoXY(x, y + 2);
		printf("%c%c%c", 219, 220, 219);
		break;
	}
	case 9:
	{
		GotoXY(x, y);
		printf("%c%c%c", 219, 223, 219);
		GotoXY(x, y + 1);
		printf("%c%c%c", 219, 220, 219);
		GotoXY(x, y + 2);
		printf("  %c", 219);
		break;
	}
	default:;
	}
}
