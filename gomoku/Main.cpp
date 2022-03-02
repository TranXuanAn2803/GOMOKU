# include "Include.h"

void Setting()
{
	int setting;
	int music;
	GotoXY(40, 10);
	printf("Music");
	GotoXY(35, 11);
	printf("1. ON ");
	GotoXY(35, 12);
	printf("2. OFF");
	GotoXY(35, 13);
	printf("3. Other Music");
	GotoXY(35, 14);
	printf(" Moi ban chon chuc nang : ");
	scanf_s("%d", &setting);
	if (setting == 1)
	{
		PlaySound("kiminowa.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	else if (setting == 2)
	{
		PlaySound(NULL, NULL, SND_FILENAME | SND_ASYNC);
	}
	else if (setting == 3)
	{
		system("cls");
		printf("1. Ki mi no wa\n");
		printf("2. Beethoven Sonate\n");
		printf("3. FireSky\n");
		printf("4. WindFairy\n");
		printf("5. Xyyz\n");
		printf("6. PvZ\n");
		printf("Ban muon doi thanh bai hat so : ");
		scanf_s("%d", &music);
		switch (music)
		{
		case 1: PlaySound("kiminowa.wav", NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 2: PlaySound("beet.wav", NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 3: PlaySound("FireSky.wav", NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 4: PlaySound("WindFairy.wav", NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 5: PlaySound("Xyyz.wav", NULL, SND_FILENAME | SND_ASYNC);
			break;
		case 6: PlaySound("PvZ.wav", NULL, SND_FILENAME | SND_ASYNC);
			break;

		default: break;
		}
	}
	else
	{
		GotoXY(35, 15);
		printf("Ban khong chon chuc nang phu hop");
		Sleep(500);
	}
}
void RoleGame()
{
	system("cls");
	GotoXY(20, 10);
	printf("Luat Game: ");
	printf(" Nguoi choi danh va doi luot,khi hoan thanh 4 con khong chan hai dau hoac 5 con khong chan hai dau truoc se thang");
	GotoXY(40, 12);
	printf(" Cach di chuyen: ");
	GotoXY(40, 14);
	printf(" Nguoi choi thu nhat");
	GotoXY(70, 14);
	printf(" Nguoi choi thu hai");
	GotoXY(40, 16);
	printf("[W]");
	GotoXY(70, 16);
	printf("[^]");
	GotoXY(36, 17);
	printf("[A] [S] [D]");
	GotoXY(66, 17);
	printf("[<] [v] [>]");
	GotoXY(36, 19);
	printf("[         ]");
	GotoXY(66, 19);
	printf("[  ENTER  ]");
	printf("\n");
	system("pause");
}
int main(int argc, char* argv[])
{
	validEnter = true;
	scoreX = 0;
	scoreY = 0;
	demX = 0;
	demO = 0;
	PlaySound("kiminowa.wav", NULL, SND_FILENAME | SND_ASYNC);
	int menu;

	FixConsoleWindow();
Start:
	system("color 70");
	menu = Menu();
	if (menu == 2)
	{
		LoadGame();
		goto Start;
	}
	else if (menu == 3)
	{
		system("cls");
		Setting();
		system("cls");
		goto Start;
	}
	else if (menu == 1)
	{
		NewGame();
		//manHinhGame();
		//Turn(2);
		//textComment(67, 98);
		//GotoXY(0, 60);
		goto Start;
	}
	else if (menu == 5)
	{
		Quit();
		Sleep(250);
	}
	else if (menu == 4)
	{
		RoleGame();
		system("cls");
		Sleep(1000);
		goto Start;
	}
	else
	{
	}
	
	return 0;
}


