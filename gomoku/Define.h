//#pragma once
# ifndef __DEFINE_H__
# define __DEFINE_H__
#define LEFT 36 // Tọa độ trái màn hình bàn cờ
#define TOP 5 // Tọa độ trên màn hình bàn cờ
#define BOARD_SIZE 12 // Kích thức ma trận bàn cờ
#define _CRT_SECURE_NO_WARNINGS
typedef struct _POINT _POINT;
struct _POINT { int x, y, c; }; // x: tọa độ dòng, y: tọa độ cột, c: đánh dấu
extern bool _TURN; //true là lượt người thứ nhất và false là lượt người thứ hai
extern int _COMMAND; // Biến nhận giá trị phím người dùng nhập
extern int _X, _Y; //Tọa độ hiện hành trên màn hình bàn cờ
extern int TURN;
extern _POINT _A[BOARD_SIZE][BOARD_SIZE]; //Ma trận bàn cờ
extern int demX;
extern int demO;
extern int scoreX;
extern int scoreY;
extern bool validEnter;
extern int z;
# endif
