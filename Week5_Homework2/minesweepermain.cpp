#include "minesweeper.h"

int main()
{
	int width;						//����
	int height;						//����
	int num_mine;

	printf("���� ���� ������ ���̸� �Է��� �ּ���(�ִ� 80): ");
	scanf_s("%d", &width);
	printf("���� ���� ������ ���̸� �Է��� �ּ���(�ִ� 40): ");
	scanf_s("%d", &height);

	printf(" <Mine Sweeper> \n");
	printf(" �ż��� ������ ������ �Է��� �ּ��� : ");
	scanf_s("%d", &num_mine);
	playminesweeper(num_mine, width, height);

	return 0;
}