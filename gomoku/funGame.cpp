# include "funGame.h"
# include "Include.h"

void NhapNhay(int a,int b, int i, int j)  //a là số biến nhấp nháy, b là loại nhấp nháy, i,j là vị trí
{
	int speed;
	speed = 150;
	if (b == 1) //O ngang
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i][j + 1].x, _A[i][j + 1].y);
			printf(" ");
			GotoXY(_A[i][j + 2].x, _A[i][j + 2].y);
			printf(" ");
			GotoXY(_A[i][j + 3].x, _A[i][j + 3].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i][j + 4].x, _A[i][j + 4].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("O");
			GotoXY(_A[i][j + 1].x, _A[i][j + 1].y);
			printf("O");
			GotoXY(_A[i][j + 2].x, _A[i][j + 2].y);
			printf("O");
			GotoXY(_A[i][j + 3].x, _A[i][j + 3].y);
			printf("O");
			if (a == 5)
			{
				GotoXY(_A[i][j + 4].x, _A[i][j + 4].y);
				printf("O");
			}
			Sleep(speed);
		}
	}
	else if (b == -1) //X ngang
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i][j + 1].x, _A[i][j + 1].y);
			printf(" ");
			GotoXY(_A[i][j + 2].x, _A[i][j + 2].y);
			printf(" ");
			GotoXY(_A[i][j + 3].x, _A[i][j + 3].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i][j + 4].x, _A[i][j + 4].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("X");
			GotoXY(_A[i][j + 1].x, _A[i][j + 1].y);
			printf("X");
			GotoXY(_A[i][j + 2].x, _A[i][j + 2].y);
			printf("X");
			GotoXY(_A[i][j + 3].x, _A[i][j + 3].y);
			printf("X");
			if (a == 5)
			{
				GotoXY(_A[i][j + 4].x, _A[i][j + 4].y);
				printf("X");
			}
			Sleep(speed);
		}
	}
	else if (b == 2) //O dọc
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i + 1][j ].x, _A[i + 1][j ].y);
			printf(" ");
			GotoXY(_A[i + 2][j ].x, _A[i + 2][j].y);
			printf(" ");
			GotoXY(_A[i + 3][j ].x, _A[i + 3][j].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i+4][j ].x, _A[i+4][j ].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("O");
			GotoXY(_A[i + 1][j].x, _A[i + 1][j].y);
			printf("O");
			GotoXY(_A[i + 2][j].x, _A[i + 2][j].y);
			printf("O");
			GotoXY(_A[i + 3][j].x, _A[i + 3][j].y);
			printf("O");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j].x, _A[i + 4][j].y);
				printf("O");
			}
			Sleep(speed);
		}
	}
	else if(b==-2)
	{ 
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i + 1][j].x, _A[i + 1][j].y);
			printf(" ");
			GotoXY(_A[i + 2][j].x, _A[i + 2][j].y);
			printf(" ");
			GotoXY(_A[i + 3][j].x, _A[i + 3][j].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j].x, _A[i + 4][j].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("X");
			GotoXY(_A[i + 1][j].x, _A[i + 1][j].y);
			printf("X");
			GotoXY(_A[i + 2][j].x, _A[i + 2][j].y);
			printf("X");
			GotoXY(_A[i + 3][j].x, _A[i + 3][j].y);
			printf("X");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j].x, _A[i + 4][j].y);
				printf("X");
			}
			Sleep(speed);
		}
	}
	else if (b == 3) // O chéo phải
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i + 1][j+1].x, _A[i + 1][j+1].y);
			printf(" ");
			GotoXY(_A[i + 2][j+2].x, _A[i + 2][j+2].y);
			printf(" ");
			GotoXY(_A[i + 3][j+3].x, _A[i + 3][j+3].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j+4].x, _A[i + 4][j+4].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("O");
			GotoXY(_A[i + 1][j + 1].x, _A[i + 1][j + 1].y);
			printf("O");
			GotoXY(_A[i + 2][j + 2].x, _A[i + 2][j + 2].y);
			printf("O");
			GotoXY(_A[i + 3][j + 3].x, _A[i + 3][j + 3].y);
			printf("O");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j + 4].x, _A[i + 4][j + 4].y);
				printf("O");
			}
			Sleep(speed);
		}
	}
	else if (b == -3)
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i + 1][j + 1].x, _A[i + 1][j + 1].y);
			printf(" ");
			GotoXY(_A[i + 2][j + 2].x, _A[i + 2][j + 2].y);
			printf(" ");
			GotoXY(_A[i + 3][j + 3].x, _A[i + 3][j + 3].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j + 4].x, _A[i + 4][j + 4].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("X");
			GotoXY(_A[i + 1][j + 1].x, _A[i + 1][j + 1].y);
			printf("X");
			GotoXY(_A[i + 2][j + 2].x, _A[i + 2][j + 2].y);
			printf("X");
			GotoXY(_A[i + 3][j + 3].x, _A[i + 3][j + 3].y);
			printf("X");
			if (a == 5)
			{
				GotoXY(_A[i + 4][j + 4].x, _A[i + 4][j + 4].y);
				printf("X");
			}
			Sleep(speed);
		}
	}
	else if (b == 4)
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i - 1][j + 1].x, _A[i - 1][j + 1].y);
			printf(" ");
			GotoXY(_A[i - 2][j + 2].x, _A[i - 2][j + 2].y);
			printf(" ");
			GotoXY(_A[i - 3][j + 3].x, _A[i - 3][j + 3].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i - 4][j + 4].x, _A[i - 4][j + 4].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("O");
			GotoXY(_A[i - 1][j + 1].x, _A[i - 1][j + 1].y);
			printf("O");
			GotoXY(_A[i - 2][j + 2].x, _A[i - 2][j + 2].y);
			printf("O");
			GotoXY(_A[i - 3][j + 3].x, _A[i - 3][j + 3].y);
			printf("O");
			if (a == 5)
			{
				GotoXY(_A[i - 4][j + 4].x, _A[i - 4][j + 4].y);
				printf("O");
			}
			Sleep(speed);
		}
	 }
	else if (b == -4)
	{
		for (int k = 0; k <= 10; k++)
		{
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf(" ");
			GotoXY(_A[i - 1][j + 1].x, _A[i - 1][j + 1].y);
			printf(" ");
			GotoXY(_A[i - 2][j + 2].x, _A[i - 2][j + 2].y);
			printf(" ");
			GotoXY(_A[i - 3][j + 3].x, _A[i - 3][j + 3].y);
			printf(" ");
			if (a == 5)
			{
				GotoXY(_A[i - 4][j + 4].x, _A[i - 4][j + 4].y);
				printf(" ");
			}
			Sleep(speed);
			GotoXY(_A[i][j].x, _A[i][j].y);
			printf("X");
			GotoXY(_A[i - 1][j + 1].x, _A[i - 1][j + 1].y);
			printf("X");
			GotoXY(_A[i - 2][j + 2].x, _A[i - 2][j + 2].y);
			printf("X");
			GotoXY(_A[i - 3][j + 3].x, _A[i - 3][j + 3].y);
			printf("X");
			if (a == 5)
			{
				GotoXY(_A[i - 4][j + 4].x, _A[i - 4][j + 4].y);
				printf("X");
			}
			Sleep(speed);
		}

	}
}

int KiemTra(_POINT A[][12])
{
	//validEnter = true;
	//x win thi kq=-1 
	int i;
	int j;
	int m;
	int kq;
	int count; //biến đếm kiểm tra hòa
	count = 0;
	kq = 0;
	for (i = 0; i <= 11; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			m = _A[i][j + 1].c + _A[i][j + 2].c + _A[i][j + 3].c + _A[i][j + 4].c;
			if (m == 4)
			{
				if (_A[i][j].c == 0 && _A[i][j + 5].c == 0)
				{
					NhapNhay(4, 1, i, j + 1);
					kq = 1;
					break;
				}
				else
				{
					if (_A[i][j].c == 0 && _A[i][j + 5].c == 1)
					{
						NhapNhay(5, 1, i, j + 1);
						kq = 1;
						break;
					}
					else if (_A[i][j].c == 1 && _A[i][j + 5].c == 0)
					{
						NhapNhay(5, 1, i, j);
						kq = 1;
						break;
					}
					else if (_A[i][j].c == 1 && _A[i][j + 5].c == 1)
					{
						NhapNhay(4, 1, i, j + 1);
						kq = 1;
						break;
					}
					else
					{
						continue;
					}
				}
			}
			else if (m == -4)
			{
				if (_A[i][j].c == 0 && _A[i][j + 5].c == 0)
				{
					NhapNhay(4, -1, i, j + 1);
					kq = -1;
					break;
				}
				else
				{
					if (_A[i][j].c == 0 && _A[i][j + 5].c == -1)
					{
						NhapNhay(5, -1, i, j + 1);
						kq = -1;
						break;
					}
					else if (_A[i][j].c == -1 && _A[i][j + 5].c == 0)
					{
						NhapNhay(5, -1,i,j );
						kq = -1;
						break;
					}
					else if (_A[i][j].c == -1 && _A[i][j + 5].c == -1)
					{
						NhapNhay(4, -1, i, j + 1);
						kq = -1;
						break;
					}
					else
					{
						continue;
					}
				}
			}
			else
			{
				continue;
			}
		}
	}
	for (i = 0; i <= 11; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			m = _A[j + 1][i].c + _A[j + 2][i].c + _A[j + 3][i].c + _A[j + 4][i].c;
			if (m == 4)
			{
				if (_A[j][i].c == 0 && _A[j + 5][i].c == 0)
				{
					NhapNhay(4, 2, j + 1, i);
					kq = 1;
					break;
				}
				else if (_A[j][i].c == 1 && _A[j + 5][i].c == 0)
				{
					NhapNhay(5, 2, j, i);
					kq = 1;
					break;
				}
				else if (_A[j][i].c == 0 && _A[j + 5][i].c == 1)
				{
					NhapNhay(5, 2, j + 1, i);
					kq = 1;
					break;
				}
				else if (_A[j][i].c == 1 && _A[j + 5][i].c == 1)
				{
					NhapNhay(4, 2, j + 1, i);
					kq = 1;
					break;
				}
				else
				{
					continue;
				}
			}
			else if (m == -4)
			{
				if (_A[j][i].c == 0 && _A[j + 5][i].c == 0)
				{
					NhapNhay(4, -2, j + 1, i);
					kq = -1;
					break;
				}
				else if (_A[j][i].c == -1 && _A[j + 5][i].c == 0)
				{
					NhapNhay(5, -2, j , i);
					kq = -1;
					break;
				}
				else if (_A[j][i].c == 0 && _A[j + 5][i].c == -1)
				{
					NhapNhay(5, -2, j + 1, i);
					kq = -1;
					break;
				}
				else if (_A[j][i].c == -1 && _A[j + 5][i].c == -1)
				{
					NhapNhay(4, -2, j + 1, i);
					kq = -1;
					break;
				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
	}
	for (i = 0; i <= 6; i++)
	{
		for (j = 0; j <= 6; j++)
		{
			m = _A[i + 1][j + 1].c + _A[i + 2][j + 2].c + _A[i + 3][j + 3].c + _A[i + 4][j + 4].c;
			if (m == 4)
			{
				if (_A[i][j].c == 0 && _A[i + 5][j + 5].c == 0)
				{
					NhapNhay(4, 3, i + 1, j + 1);
					kq = 1;
					break;
				}
				else if (_A[i][j].c == 1 && _A[i + 5][j + 5].c == 0)
				{
					NhapNhay(5, 3, i , j );
					kq = 1;
					break;
				}
				else if (_A[i][j].c == 0 && _A[i + 5][j + 5].c == 1)
				{
					NhapNhay(5, 3, i + 1, j + 1);
					kq = 1;
					break;
				}
				else if (_A[i][j].c == 1 && _A[i + 5][j + 5].c == 1)
				{
					NhapNhay(4, 3, i + 1, j + 1);
					kq = 1;
					break;
				}
				else
				{
					continue;
				}
			}
			else if (m == -4)
			{
				if (_A[i][j].c == 0 && _A[i + 5][j + 5].c == 0)
				{
					NhapNhay(4, -3, i + 1, j + 1);
					kq = -1;
					break;
				}
				else if (_A[i][j].c == -1 && _A[i + 5][j + 5].c == 0)
				{
					NhapNhay(5, -3, i , j );
					kq = -1;
					break;
				}
				else if (_A[i][j].c == 0 && _A[i + 5][j + 5].c == -1)
				{
					NhapNhay(5, -3, i + 1, j + 1);
					kq = -1;
					break;
				}
				else if (_A[i][j].c == -1 && _A[i + 5][j + 5].c == -1)
				{
					NhapNhay(4, -3, i + 1, j + 1);
					kq = -1;
					break;
				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
	}
	for (i = 11; i >= 5; i--)
	{
		for (j = 0; j <= 6; j++)
		{
			m = _A[i - 1][j + 1].c + _A[i - 2][j + 2].c + _A[i - 3][j + 3].c + _A[i - 4][j + 4].c;
			if (m == 4)
			{
				if (_A[i][j].c == 0 && _A[i - 5][j + 5].c == 0)
				{
					NhapNhay(4, 4, i - 1, j + 1);
					kq = 1;
					break;
				}
				else if (_A[i][j].c == 1 && _A[i - 5][j + 5].c == 0)
				{
					NhapNhay(5, 4, i , j);
					kq = 1;
					break;
				}
				else if (_A[i][j].c == 0 && _A[i - 5][j + 5].c == 1)
				{
					NhapNhay(5, 4, i - 1, j + 1);
					kq = 1;
					break;
				}
				else if (_A[i][j].c == 1 && _A[i - 5][j + 5].c == 1)
				{
					NhapNhay(4, 4, i - 1, j + 1);
					kq = 1;
					break;
				}
				else
				{
					continue;
				}
			}
			else if (m == -4)
			{
				if (_A[i][j].c == 0 && _A[i - 5][j + 5].c == 0)
				{
					NhapNhay(4, -4, i - 1, j + 1);
					kq = -1;
					break;
				}
				else if (_A[i][j].c == -1 && _A[i - 5][j + 5].c == 0)
				{
					NhapNhay(5, -4, i , j );
					kq = -1;
					break;
				}
				else if (_A[i][j].c == 0 && _A[i - 5][j + 5].c == -1)
				{
					NhapNhay(5, -4, i - 1, j + 1);
					kq = -1;
					break;
				}
				else if (_A[i][j].c == -1 && _A[i - 5][j + 5].c == -1)
				{
					NhapNhay(4, -4, i - 1, j + 1);
					kq = -1;
					break;
				}
				else
				{
					continue;
				}
			}
			else
			{
				continue;
			}
		}
	}

	//Kiểm tra Hòa
	for (i = 0; i <= 11; i++)
	{
		for (j = 0; j <= 11; j++)
		{
			if (_A[i][j].c == 1 || _A[i][j].c == -1)
			{
				count++;
				continue;
			}
			else
			{
				count = 0;
				break;
			}
		}
	}
	if (count == 144) kq = 2;
	return kq;
}
int NewGame()
{

	validEnter = true;
	StartGame();
	manHinhGame();
	Turn(1);
	textComment(scoreX, scoreY);
	while (1)
	{
		_COMMAND = toupper(_getch());
		if (_COMMAND == 27)
		{
			GotoXY(60, 35);
			TextColor(112);
			printf("\nHay chon L neu muon luu truoc khi thoat.");
			_COMMAND = toupper(_getch());
			if (_COMMAND == 'L')
			{
				Save(demX, demO);
				ExitGame();
				system("cls");
				return 0;
			}
			Sleep(1000);
			ExitGame();
			system("cls");
			return 0;
		}
		else
		{
			if (_COMMAND == 'A') MoveLeft();
			else if (_COMMAND == 'W') MoveUp();
			else if (_COMMAND == 'S') MoveDown();
			else if (_COMMAND == 'D') MoveRight();
			else if (_COMMAND == 'L')
			{
				Save(demX, demO);
				ExitGame();
				system("cls");
				return 0;
			}
			else if (_COMMAND == 13 || _COMMAND == 32)
			{// Người dùng đánh dấu trên màn hình bàn cờ
				switch (CheckBoard(_X, _Y))
				{
				case -1:
					TextColor(118);
					demX++;
					GotoXY(25, 15);
					printf("%d", demX);
					Turn(2);
					GotoXY(_X, _Y);
					TextColor(116);
					printf("X"); break;
				case 1:
					TextColor(118);
					demO++;
					GotoXY(105, 15);
					printf("%d", demO);
					Turn(1);
					GotoXY(_X, _Y);
					TextColor(115);
					printf("0"); break;
				case 0: validEnter = false; // Khi đánh vào ô đã đánh rồi
				}
				z = KiemTra(_A);
				// Tiếp theo là kiểm tra và xử lý thắng/thua/hòa/tiếp tục
				if (validEnter == true)
				{
					switch (ProcessFinish(TestBoard(z)))
					{
					case -1: case 1: case 0:
						if (AskContinue() != 13)
						{
							ExitGame(); return 0;

						}
						else
						{
							demX = 0;
							demO = 0;
							StartGame();
							manHinhGame();
							Turn(1);
							textComment(scoreX, scoreY);
						}
					}
				}
				validEnter = true; // Mở khóa
			}
			else
			{
				_COMMAND = _getch();
				int rac = _COMMAND;
				if (rac == 72) MoveUp();
				else if (rac == 80) MoveDown();
				else if (rac == 77) MoveRight();
				else if (rac == 75) MoveLeft();
			}
		}
	}
}
int LoadGame()
{
	validEnter = true;
	Load(demX, demO);
	ResetDataLoad();
	ReturnData();
	textComment(scoreX, scoreY);
	while (1)
	{

		_COMMAND = toupper(_getch());
		if (_COMMAND == 27)
		{
			GotoXY(60, 35);
			TextColor(112);
			printf("\nHay chon L neu muon luu truoc khi thoat.");
			_COMMAND = toupper(_getch());
			if (_COMMAND == 'L')
			{
				Save(demX, demO);
				ExitGame();
				return 0;
			}
			Sleep(1000);
			ExitGame();
			system("cls");
			return 0;
		}
		else
		{
			if (_COMMAND == 'A') MoveLeft();
			else if (_COMMAND == 'W') MoveUp();
			else if (_COMMAND == 'S') MoveDown();
			else if (_COMMAND == 'D') MoveRight();
			else if (_COMMAND == 'L')
			{
				Save(demX, demO);
				ExitGame();
				return 0;
			}
			else if (_COMMAND == 13 || _COMMAND == 32)
			{// Người dùng đánh dấu trên màn hình bàn cờ
				switch (CheckBoard(_X, _Y))
				{
				case -1:
					TextColor(118);
					demX++;
					GotoXY(25, 15);
					printf("%d", demX);
					Turn(2);
					GotoXY(_X, _Y);
					TextColor(116);
					printf("X"); break;
				case 1:
					TextColor(118);
					demO++;
					GotoXY(105, 15);
					printf("%d", demO);
					Turn(1);
					GotoXY(_X, _Y);
					TextColor(115);
					printf("0"); break;
				case 0: validEnter = false; // Khi đánh vào ô đã đánh rồi
				}
				z = KiemTra(_A);
				// Tiếp theo là kiểm tra và xử lý thắng/thua/hòa/tiếp tục
				if (validEnter == true)
				{
					switch (ProcessFinish(TestBoard(z)))
					{
					case -1: case 1: case 0:
						if (AskContinue() != 13)
						{
							ExitGame();
							return 0;
						}
						else
						{
							demX = 0;
							demO = 0;
							StartGame();
							manHinhGame();
							Turn(1);
							textComment(scoreX, scoreY);
						}
					}
				}
				validEnter = true; // Mở khóa
			}
			else
			{
				_COMMAND = _getch();
				int rac = _COMMAND;
				if (rac == 72) MoveUp();
				else if (rac == 80) MoveDown();
				else if (rac == 77) MoveRight();
				else if (rac == 75) MoveLeft();
			}
		}
	}
}