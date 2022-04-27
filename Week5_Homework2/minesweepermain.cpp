#include "minesweeper.h"

int main()
{
	int width;						//가로
	int height;						//세로
	int num_mine;

	printf("지뢰 맵의 가로의 길이를 입력해 주세요(최대 80): ");
	scanf_s("%d", &width);
	printf("지뢰 맵의 세로의 길이를 입력해 주세요(최대 40): ");
	scanf_s("%d", &height);

	printf(" <Mine Sweeper> \n");
	printf(" 매설할 지뢰의 개수를 입력해 주세요 : ");
	scanf_s("%d", &num_mine);
	playminesweeper(num_mine, width, height);

	return 0;
}