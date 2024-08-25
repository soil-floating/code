#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include<iso646.h>
#pragma warning(disable:4996)
#define W 19
#define H W

void MapPrinter(int ArraysIntegerMap[W][H]) {//将数字转换为对应的标志
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++) 
            switch (*(*(ArraysIntegerMap + i) + j)) {//配合round 取模2正好对应棋手
            case 0:
                //PrinterWhite();
                printf("白");
                break;
            case 1:
                //PrinterBlack();
                printf("黑");
                break;
            
            case 2:
                printf("十");
                //PrinterGred();
                break;
            }
            putchar('\n');
        }
}
bool AppearWinner(int ArraysIntegerMap[W][H],int x,int y,int round) {//是否出现胜者,即五子判定
    bool BoolIfWin = 0;
    int count = 0;

    //横向
    for (int i = 0; i < 9; i++){
        if (x + i - 4 < 0) continue;
        else if (x + i - 4 > (W-1)) break;
        if (ArraysIntegerMap[y][x - 4 + i] == round%2)count++;
        else count = 0;
        if (count == 5) BoolIfWin = true;
    }
    if (count >= 5) return true;
    else count = 0;
    //纵向
    for (int i = 0; i < 9; i++) {
        if (y + i - 4 < 0) continue;
        else if (y + i - 4 > (H-1)) break;
        if (ArraysIntegerMap[y-4+i][x] == round%2)count++;
        else count = 0;
        if (count == 5) BoolIfWin = true;
    }

    //斜

    //左上到右下
    for (int i = 0; i < 9;i++) {
        if (y + i - 4 < 0 or x + i - 4 < 0) continue;
        else if (y + i - 4 > (H-1) or x + i - 4 > (W-1)) break;
        if (ArraysIntegerMap[y + i - 4][x + i - 4] == round % 2) count++;
        else count = 0;
        if (count == 5) BoolIfWin = true;
    }

    //右上到左下
    for (int i = 0; i < 9; i++) {
        if (y + i - 4 < 0 or x + i +4 > (W-1)) continue;
        else if (y + i - 4 > (H-1) or x + i + 4 < 0) break;
        if (ArraysIntegerMap[y + i - 4][x - i - 4] == round % 2) count++;
        else count = 0;
        if (count == 5) BoolIfWin = true;
    }
    return BoolIfWin;
}



int game(void) {//游戏
    int round = 0;
    int IntegerX;
    int IntegerY;
    bool BoolInput = 1;
    //初始化地图
    int ArraysIntegerMap[W][H];
    for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) *(*(ArraysIntegerMap + i) + j) = 2;//打印时全部填充网格“十”
A://循环
    system("cls");
    round++;
    printf("第%d回合\n", round);
    MapPrinter(ArraysIntegerMap);//打印地图


B://已落子转跳
    do{
        if (BoolInput == 0) {//初始值为真，第一次跳过执行
            while (not(getchar() == '\n')) continue;//清空缓冲行，防止上次输入继续未消失，即不停打印的现象
            printf("键入不合法，请重新。\n");
        }
        printf("键入横坐标：");
        BoolInput = scanf("%d", &IntegerX);//输入是否整数
        if(BoolInput) BoolInput = (IntegerX >= 0 and IntegerX <= 18) ? 1 : 0;//是否越界
    } while (!BoolInput);//为真时跳出循环
    do {//同上
        if (BoolInput == 0) {
            while (not(getchar() == '\n')) continue;
            printf("键入不合法，请重新。\n");
        }
        printf("键入纵坐标：");
        BoolInput = scanf("%d", &IntegerY);
        if(BoolInput) BoolInput = (IntegerY >= 0 and IntegerY <= 18) ? 1 : 0;
    } while (!BoolInput);

    if (not(ArraysIntegerMap[IntegerY][IntegerX] == 2)){
        BoolInput = 0;
        goto B; }//点位已落子，重新输入
    else ArraysIntegerMap[IntegerY][IntegerX] = round % 2;//落子


    
    if (AppearWinner(ArraysIntegerMap, IntegerX, IntegerY, round)) {
        system("cls");//为了好看
        printf("第%d回合\n", round);
        MapPrinter(ArraysIntegerMap);//为了好看
        round % 2 ? printf("黑方胜！") : printf("白方胜！");
    }
    else goto A;
    
    system("pause");
    return 0;
}



int main(void) {
    game();
    return 0;
}
