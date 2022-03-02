# include "funView.h"

void GotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void DrawBoard(int pSize)
{
	for (int i = 0; i <= pSize; i++)
	{
		for (int j = 0; j <= pSize; j++)
		{
			GotoXY(LEFT + 4 * i, TOP + 2 * j);
			TextColor(112);
			printf(".");
		}
	}
}

int ProcessFinish(int pWhoWin)
{
	GotoXY(3, 34); // Nhảy tới vị trí
	// thích hợp để in chuỗi thắng/thua/hòa
	switch (pWhoWin)
	{
	case -1:
		hieuUngXThang();
		break;
	case 1:
		hieuUngOThang();
		break;
	case 0:
		hieuUngHoa();
		break;
	case 2:
		_TURN = !_TURN; // Đổi lượt nếu không có gì xảy ra
	}
	GotoXY(_X, _Y); // Trả về vị trí hiện hành của con trỏ màn hình bàn cờ
	return pWhoWin;
}

//Hàm xử lý khi người chơi thua
int AskContinue()
{
	GotoXY(50, 25);
	printf("Nhan 'ENTER' de tiep tuc dung: ");
	return toupper(_getch());
}

void FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

void TextColor(int x)
{
	HANDLE mau;
	mau = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau, x);
}