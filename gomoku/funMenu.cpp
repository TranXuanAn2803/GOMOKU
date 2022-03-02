# include "funMenu.h"

// Tiêu đề sẽ in chữ GOMOKU
void Gomoku()
{
	TextColor(117);
	GotoXY(30, 2);
	printf("***");
	GotoXY(27, 3);
	printf("*******");
	GotoXY(26, 4);
	printf("***   **");
	GotoXY(25, 5);
	printf("****");
	GotoXY(25, 6);
	printf("****   *****");
	GotoXY(25, 7);
	printf("****   *****");
	GotoXY(25, 8);
	printf("****    **");
	GotoXY(26, 9);
	printf("***   **");
	GotoXY(27, 10);
	printf("******");
	//Trên là chữ G
	TextColor(124);
	GotoXY(44, 2);
	printf("***");
	GotoXY(42, 3);
	printf("*******");
	GotoXY(40, 4);
	printf("***     ***");
	GotoXY(40, 5);
	printf("***     ***");
	GotoXY(40, 6);
	printf("***     ***");
	GotoXY(40, 7);
	printf("***     ***");
	GotoXY(40, 8);
	printf("***     ***");
	GotoXY(42, 9);
	printf("*******");
	GotoXY(44, 10);
	printf("***");
	TextColor(115);
	//Trên đây là chữ O
	GotoXY(55, 2);


	printf("***     ***");
	GotoXY(55, 3);
	printf("****   ****");
	GotoXY(55, 4);
	printf("*** * * ***");
	GotoXY(55, 5);
	printf("***  *  ***");
	GotoXY(55, 6);
	printf("***     ***");
	GotoXY(55, 7);
	printf("***     ***");
	GotoXY(55, 8);
	printf("***     ***");
	GotoXY(55, 9);
	printf("***     ***");
	GotoXY(54, 10);
	printf("****     ****");
	//Trên đây là chữ M
	TextColor(117);
	GotoXY(73, 2);
	printf("***");
	GotoXY(71, 3);
	printf("*******");
	GotoXY(69, 4);
	printf("***     ***");
	GotoXY(69, 5);
	printf("***     ***");
	GotoXY(69, 6);
	printf("***     ***");
	GotoXY(69, 7);
	printf("***     ***");
	GotoXY(69, 8);
	printf("***     ***");
	GotoXY(71, 9);
	printf("*******");
	GotoXY(73, 10);
	printf("***");
	//Đây là chữ O
	TextColor(121);
	GotoXY(83, 2);
	printf("**    ***");
	GotoXY(83, 3);
	printf("**   ***");
	GotoXY(83, 4);
	printf("**  ***");
	GotoXY(83, 5);
	printf("** ***");
	GotoXY(83, 6);
	printf("****");
	GotoXY(83, 7);
	printf("** ***");
	GotoXY(83, 8);
	printf("**  ***");
	GotoXY(83, 9);
	printf("**   ***");
	GotoXY(83, 10);
	printf("**    ****");
	//Đây là chữ K
	TextColor(124);
	GotoXY(94, 2);
	printf("***     **");
	GotoXY(94, 3);
	printf("***     **");
	GotoXY(94, 4);
	printf("***     **");
	GotoXY(94, 5);
	printf("***     **");
	GotoXY(94, 6);
	printf("***     **");
	GotoXY(94, 7);
	printf("***     **");
	GotoXY(94, 8);
	printf("***     **");
	GotoXY(95, 9);
	printf("***   **");
	GotoXY(96, 10);
	printf("******");
}


void ThanhDown()
{
	GotoXY(23, 14);
	TextColor(112);
	printf("%c", 201);
	for (int i = 0; i <= 80; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 187);
	//Xong khung
	GotoXY(23, 16);
	printf("%c", 200);
	for (int i = 0; i <= 80; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 188);
	TextColor(112);
	GotoXY(45, 18);
	TextColor(112);
	printf("0%%");
	GotoXY(40, 20);
	printf("Cam on cac ban da den voi tro choi");
	Sleep(1300);
	TextColor(153);
	GotoXY(24, 15);
	for (int i = 0; i <= 20; i++)
	{
		printf(" ");
	}
	TextColor(112);
	GotoXY(45, 18);
	printf("25%%");
	GotoXY(40, 20);
	printf("                                                         ");
	TextColor(112);
	GotoXY(40, 20);
	printf("Hay luon nhan [L] neu ban muon dung tran dau");
	Sleep(1500);
	GotoXY(24, 15);
	TextColor(153);
	for (int i = 0; i <= 60; i++)
	{
		printf(" ");
	}
	TextColor(112);
	GotoXY(45, 18);
	printf("60%%");
	TextColor(112);
	GotoXY(40, 20);
	printf("                                                         ");
	GotoXY(40, 20);
	printf("Choi game qua 3 tieng moi ngay anh huong xau den suc khoe");
	Sleep(1500);
	GotoXY(24, 15);
	TextColor(153);
	for (int i = 0; i <= 80; i++)
	{
		printf(" ");
	}
	TextColor(112);
	GotoXY(45, 18);
	printf("100%%");
	TextColor(112);
	GotoXY(40, 20);
	printf("                                                         ");
	TextColor(112);
	GotoXY(40, 20);
	printf("Vi tran game cong bang. Xin dung gian lan");
	Sleep(1000);
}

//Click là hàm giúp bắt sự kiện bàn phím để user di chuyển và chọn chức năng
int Click()
{
	int i;
	int j;
	int a;
	a = 1;
	int kq;
	GotoXY(52, 19);
	printf("%c%c", 175, 175);
	GotoXY(76, 19);
	printf("%c%c", 174, 174);
	GotoXY(50, 35);
	TextColor(112);
	while (1)
	{
		j = 0;
		i = _getch();
		if (i == 224)
		{
			i = _getch();
			if (i == 'H')
			{
				j = 1;
			}
			else if (i == 'P')
			{
				j = 2;
			}
			else
			{
				j = 0;
			}
		}
		if (i == 'W' || i == 'w' || j == 1)
		{
			if (a == 1)
			{
				GotoXY(52, 19);
				printf("  ");
				GotoXY(76, 19);
				printf("  ");
				GotoXY(52, 27);
				printf("%c%c", 175, 175);
				GotoXY(76, 27);
				printf("%c%c", 174, 174);
				a = 5;
			}
			else if (a == 2)
			{
				GotoXY(52, 21);
				printf("  ");
				GotoXY(76, 21);
				printf("  ");
				GotoXY(52, 19);
				printf("%c%c", 175, 175);
				GotoXY(76, 19);
				printf("%c%c", 174, 174);
				a = 1;
			}
			else if (a == 3)
			{
				GotoXY(52, 23);
				printf("  ");
				GotoXY(76, 23);
				printf("  ");
				GotoXY(52, 21);
				printf("%c%c", 175, 175);
				GotoXY(76, 21);
				printf("%c%c", 174, 174);
				a = 2;
			}
			else if (a == 4)
			{
				GotoXY(52, 25);
				printf("  ");
				GotoXY(76, 25);
				printf("  ");
				GotoXY(52, 23);
				printf("%c%c", 175, 175);
				GotoXY(76, 23);
				printf("%c%c", 174, 174);
				a = 3;
			}
			else
			{
				GotoXY(52, 27);
				printf("  ");
				GotoXY(76, 27);
				printf("  ");
				GotoXY(52, 25);
				printf("%c%c", 175, 175);
				GotoXY(76, 25);
				printf("%c%c", 174, 174);
				a = 4;
			}
			GotoXY(50, 35);
			continue;
		}
		else if (i == 'S' || i == 's' || j == 2)
		{
			if (a == 1)
			{
				GotoXY(52, 19);
				printf("  ");
				GotoXY(76, 19);
				printf("  ");
				GotoXY(52, 21);
				printf("%c%c", 175, 175);
				GotoXY(76, 21);
				printf("%c%c", 174, 174);
				a = 2;
			}
			else if (a == 2)
			{
				GotoXY(52, 21);
				printf("  ");
				GotoXY(76, 21);
				printf("  ");
				GotoXY(52, 23);
				printf("%c%c", 175, 175);
				GotoXY(76, 23);
				printf("%c%c", 174, 174);
				a = 3;
			}
			else if (a == 3)
			{
				GotoXY(52, 23);
				printf("  ");
				GotoXY(76, 23);
				printf("  ");
				GotoXY(52, 25);
				printf("%c%c", 175, 175);
				GotoXY(76, 25);
				printf("%c%c", 174, 174);
				a = 4;
			}
			else if (a == 4)
			{
				GotoXY(52, 25);
				printf("  ");
				GotoXY(76, 25);
				printf("  ");
				GotoXY(52, 27);
				printf("%c%c", 175, 175);
				GotoXY(76, 27);
				printf("%c%c", 174, 174);
				a = 5;
			}
			else
			{
				GotoXY(52, 27);
				printf("  ");
				GotoXY(76, 27);
				printf("  ");
				GotoXY(52, 19);
				printf("%c%c", 175, 175);
				GotoXY(76, 19);
				printf("%c%c", 174, 174);
				a = 1;
			}
			GotoXY(50, 35);
			continue;
		}
		else if (i == 7)
		{
			kq = 0;
			break;
		}
		else if (i == 13)
		{
			kq = 1;
			break;
		}
		else
		{
			continue;
		}
		i = 0;
	}
	if (kq == 0)
	{
		a = 0;
	}
	else {}
	return a;
}

int Menu()
{
	int kq;
	Gomoku();
	printf("\n\n\n\n\n");
	ThanhDown();
	system("cls");
	Gomoku();
	GotoXY(45, 15);
	TextColor(113);
	printf("%c", 201);
	for (int i = 0; i <= 40; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 187);
	for (int i = 16; i <= 30; i++)
	{
		GotoXY(45, i);
		printf("%c", 186);
		GotoXY(87, i);
		printf("%c", 186);
	}
	GotoXY(45, 31);
	printf("%c", 200);
	for (int i = 0; i <= 40; i++)
	{
		printf("%c", 205);
	}
	printf("%c", 188);
	//Tren la Khung
	TextColor(112);
	GotoXY(56, 19);
	printf(" START GAME ");
	GotoXY(56, 21);
	printf(" CONTINUE GAME ");
	GotoXY(56, 23);
	printf(" SETTING ");
	GotoXY(56, 25);
	printf(" ROLE OF GAME ");
	GotoXY(56, 27);
	printf(" QUIT ");

	kq = Click();
	TextColor(112);
	return kq;
}

void Quit()
{
	system("cls");
	TextColor(121);
	GotoXY(34, 4);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	for (int i = 0; i <= 5; i++)
	{
		GotoXY(34, 5 + i);
		printf("      %c%c      ", 219, 219);
	}
	TextColor(124);
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(50, 4 + i);
		printf("%c%c      %c%c", 219, 219, 219, 219);
	}
	GotoXY(52, 7);
	printf("%c%c%c%c", 219, 219, 219, 219);

	TextColor(126);
	GotoXY(69, 4);
	printf("%c%c", 219, 219);
	GotoXY(67, 5);
	printf("%c%c  %c%c", 219, 219, 219, 219);
	GotoXY(66, 6);
	printf("%c%c      %c%c", 219, 219, 219, 219);
	GotoXY(64, 7);
	printf("%c%c        %c%c", 219, 219, 219, 219);
	GotoXY(64, 8);
	printf("%c%c%c%c%c%c%c%c  %c%c", 219, 219, 219, 219, 219, 219, 219, 219, 219, 219);
	GotoXY(64, 9);
	printf("%c%c        %c%c", 219, 219, 219, 219);
	GotoXY(64, 10);
	printf("%c%c        %c%c", 219, 219, 219, 219);
	//
	TextColor(123);
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(80, 4 + i);
		printf("%c%c", 219, 219);
	}
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(82, 4 + i);
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		printf("%c", 219);
	}
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(89, 4 + i);
		printf("%c%c", 219, 219);
	}

	TextColor(125);
	for (int i = 0; i <= 6; i++)
	{
		GotoXY(94, 4 + i);
		printf("%c%c", 219, 219);
	}
	for (int i = 0; i <= 2; i++)
	{
		GotoXY(97, 6 - i);
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		printf("%c", 219);
		if (i == 2) printf("%c", 223);
	}
	GotoXY(96, 7);
	printf("%c", 219);
	for (int i = 0; i <= 2; i++)
	{
		GotoXY(97, 8 + i);
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		printf("%c", 219);
		if (i == 2) printf("%c", 220);
	}

	TextColor(118);
	GotoXY(105, 4);
	printf("%c%c%c%c%c", 220, 223, 223, 223, 219);
	GotoXY(104, 5);
	printf("%c", 219);
	GotoXY(104, 6);
	printf("%c%c", 223, 220);
	GotoXY(106, 7);
	printf("%c%c", 223, 220);
	GotoXY(108, 8);
	printf("%c%c", 223, 220);
	GotoXY(109, 9);
	printf("%c", 219);

	GotoXY(104, 10);
	printf("%c%c%c%c%c", 219, 220, 220, 220, 223);

	TextColor(116);
	for (int i = 0; i <= 16; i++)
	{
		GotoXY(40, 15 + i);
		printf("%c", 186);
		GotoXY(110, 15 + i);
		printf("%c", 186);
	}
	for (int i = 1; i <= 16; i++)
	{
		GotoXY(60, 31 - i);
		TextColor(112);
		printf("--- THANH VIEN NHOM ---");
		GotoXY(1, 35);
		Sleep(500);
		if (i < 16)
		{
			GotoXY(60, 31 - i);
			printf("                       ");
		}
		if (i >= 3)
		{
			GotoXY(55, 34 - i);
			printf("                          ");
			GotoXY(55, 33 - i);
			printf("Truong nhom : Tran Xuan An");
		}
		if (i >= 5)
		{
			GotoXY(55, 36 - i);
			printf("                                   ");
			GotoXY(55, 35 - i);
			printf("Thanh vien  : Vo Phi Minh Hieu     ");
		}
		if (i >= 6)
		{
			GotoXY(55, 37 - i);
			printf("                                  ");
			GotoXY(55, 36 - i);
			printf("              Ho Nguyen Tram Anh  ");
		}
		if (i >= 7)
		{
			GotoXY(55, 38 - i);
			printf("                                   ");
			GotoXY(55, 37 - i);
			printf("              Nguyen Ho Hoang Duy  ");
		}
		if (i >= 8)
		{
			GotoXY(55, 39 - i);
			printf("                                   ");
			GotoXY(55, 38 - i);
			printf("              Nguyen Thi Thanh Thao");
		}
		if (i >= 10)
		{
			GotoXY(47, 41 - i);
			printf("                                            ");
			GotoXY(47, 40 - i);
			printf("Giao vien huong dan : Thay Truong Toan Thinh");
		}
	}
	GotoXY(1, 35);
}
