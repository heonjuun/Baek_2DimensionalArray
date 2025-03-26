#include<stdio.h>
#include<stdlib.h>

int main()
{
	//가로 세로 100인 도화지
	//가로세로10인 색종이를 임의로 입력하고 겹치는부분 제외 한번씩 있는곳만 카운트
	int canvas[101][101] = { 0 };
	int num;
	int x, y;
	int count=0;	
	//가로 세로 순으로 ㄱㄱ
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &x, &y);
		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				canvas[j][k] = 1;
			}
		}
	}
		for (int j = 0; j < 100; j++)
		{
			for (int k = 0; k < 100; k++)
			{
				if (canvas[j][k] == 1)
					count++;				
			}
		}
		printf("%d\n", count);		
	

	return 0;
}