# include "funModel.h"

//Hàm dọn dẹp tài nguyên (hàm nhóm Model)
void GabageCollect()
{

	// Dọn dẹp tài nguyên nếu có khai báo con trỏ
}

//Hàm kiểm tra xem có người thắng/thua hay hòa
int TestBoard(int z)
{
	//validEnter = true;
	if (z == 2) return 0; // Hòa
	else
	{
		if (z == -1 || z == 1)
		{
			if (z == -1)
			{
				scoreX++;
			}
			else
			{
				scoreY++;
			}
			return (_TURN == true ? -1 : 1); // -1 nghĩa là lượt ‘true’ thắng
		}
		else
			return 2; // 2 nghĩa là chưa ai thắng
	}
}
int CheckBoard(int pX, int pY)
{
	//validEnter = true;

	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			if (_A[i][j].x == pX && _A[i][j].y == pY && _A[i][j].c == 0)
			{
				if (_TURN == true)
				{
					_A[i][j].c = -1; // Nếu lượt hiện hành là true thì c = -1
				}
				else
				{
					_A[i][j].c = 1; // Nếu lượt hiện hành là false thì c = 1
				}
				return _A[i][j].c;
			}
		}
	}
	return 0;
}
void ResetData()
{
	//validEnter = true;
	Turn(TURN);
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			_A[i][j].x = 4 * j + LEFT + 2; // Trùng với hoành độ màn hình bàn cờ
			_A[i][j].y = 2 * i + TOP + 1; // Trùng với tung độ màn hình bàn cờ
			_A[i][j].c = 0; // 0 nghĩa là chưa ai đánh dấu, nếu đánh dấu phải theo quy
			//định như sau: -1 là lượt true đánh, 1 là lượt false đánh
		}
	}
	_TURN = true; _COMMAND = -1; // Gán lượt và phím mặc định
	_X = _A[0][0].x; _Y = _A[0][0].y; // Thiết lập lại tọa độ hiện hành ban đầu
}

