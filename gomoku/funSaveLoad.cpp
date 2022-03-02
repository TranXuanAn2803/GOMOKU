# define _CRT_SECURE_NO_WARNINGS
# include "funSaveLoad.h"


void Save(int demX, int demY)
{
	char name[20] = { NULL };
	int k, i = 0;
	system("cls");
	printf("\nHay nhap ten tap tin : ");
	do
	{
		if (i > 0)
		{
			printf("%c", name[i - 1]);
		}
		name[i] = _getch();
		k = name[i];
		i++;
	} while (k != 13 && i < 20);
	printf("\n Ten tap tin la: ");
	char* fname;
	fname = name;
	printf("%s", fname);
	
	printf("\n");
	system("pause");
	FILE* mn;
	mn = fopen("rar.txt", "a");
	if (mn != NULL)
	{
		for (int i = 0; i <= 19; i++)
		{
			fprintf(mn, "%c", name[i]);
		}
		
	}
	FILE* fp;
	fp = fopen("hieu.txt", "a");
	if (fp != NULL)
	{
		if

			(demX > demY)
		{
			fprintf(fp, " %d ", 2);
		}
		if (demY == demX)
		{
			fprintf(fp, "%d ", 1);
		}
		fprintf(fp, "%d %d", demX, demY);
		fprintf(fp, " %d %d", scoreX, scoreY);
		for (int i = 0; i <= 11; i++)
		{
			for (int j = 0; j <= 11; j++)
			{
				fprintf(fp, " %d", _A[i][j].c);
			}
		}
		fclose(fp);
	}

}

void Load(int& demX, int& demO)
{
	int a;
	int num;
	num = 1;
	int point;
	point = 1;
	int check;
	check = 0;
	system("cls");
	FILE* mn = NULL;
	mn = fopen("rar.txt", "r");
	if (mn != NULL)
	{
		printf("Co cac tap tin sau: \n");
		printf("%d. ", point);
		do
		{
			a = fgetc(mn);
			printf("%c ", a);
			check++;
			if (check == 20)
			{
				printf("\n");
				point++;
				printf("%d", point);
			}
			Sleep(200);
		} while (a != EOF);
			printf("\n\n");
			printf("Ban muon mo tap tin thu : ");
			scanf_s("%d", &num);
	}
	Sleep(1000);
	FILE* fp = NULL;
	fp = fopen("hieu.txt", "r");
	if (fp != NULL)
	{
		for (int i = 1; i <= num; i++)
		{
			fscanf_s(fp, " %d ", &TURN);
			fscanf_s(fp, "%d %d", &demX, &demO);
			fscanf_s(fp, " %d %d", &scoreX, &scoreY);
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 11; j++)
				{
					fscanf_s(fp, " %d", &_A[i][j].c);
				}
			}
		}
		system("cls");
		DrawBoard(BOARD_SIZE);
		manHinhGame();
		fclose(fp);
	}
}
void ResetDataLoad()
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			_A[i][j].x = 4 * j + LEFT + 2; // Trùng với hoành độ màn hình bàn cờ
			_A[i][j].y = 2 * i + TOP + 1; // Trùng với tung độ màn hình bàn cờ
		}
	}

	_COMMAND = -1; // Gán lượt và phím mặc định
	_X = _A[0][0].x; _Y = _A[0][0].y; // Thiết lập lại tọa độ hiện hành ban đầu
}
void ReturnData()
{
	TextColor(112);
	GotoXY(25, 15);
	printf("%d", demX);

	TextColor(112);
	GotoXY(105, 15);
	printf("%d", demO);

	if (TURN == 1)
	{
		Turn(1);
		_TURN = true;
	}
	else if (TURN == 2)
	{
		Turn(2);
		_TURN = false;
	}
	for (int x = 0; x <= 11; x++)
	{
		for (int y = 0; y <= 11; y++)
		{
			if (_A[x][y].c == -1)
			{
				GotoXY(_A[x][y].x, _A[x][y].y);
				TextColor(116);
				printf("X");
				continue;
			}
			else if (_A[x][y].c == 1)
			{
				GotoXY(_A[x][y].x, _A[x][y].y);
				TextColor(115);
				printf("0");
				continue;
			}
			else
			{
				continue;
			}

		}
	}
}
