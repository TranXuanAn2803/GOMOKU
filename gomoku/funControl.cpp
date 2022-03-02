# include "funControl.H"

void StartGame(void)
{
	system("cls");
	ResetData(); // Khởi tạo dữ liệu gốc
	DrawBoard(BOARD_SIZE); // Vẽ màn hìnmment(scoreX, scoreY);
}

//Hàm thoát game (hàm nhóm Control)
void ExitGame()
{
	system("cls");
	GabageCollect();
	//Có thể lưu game trước khi exit
}
void MoveRight()
{
	if (_X < _A[BOARD_SIZE - 1][BOARD_SIZE - 1].x)
	{
		_X += 4;
		GotoXY(_X, _Y);
	}
}
void MoveLeft()
{
	if (_X > _A[0][0].x)
	{
		_X -= 4;
		GotoXY(_X, _Y);
	}
}
void MoveDown()
{
	if (_Y < _A[BOARD_SIZE - 1][BOARD_SIZE - 1].y)
	{
		_Y += 2;
		GotoXY(_X, _Y);
	}
}
void MoveUp()
{
	if (_Y > _A[0][0].y)
	{
		_Y -= 2;
		GotoXY(_X, _Y);
	}
}