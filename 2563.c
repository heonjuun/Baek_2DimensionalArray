#include<stdio.h>
#include<stdlib.h>

int main()
{
	//���� ���� 100�� ��ȭ��
	//���μ���10�� �����̸� ���Ƿ� �Է��ϰ� ��ġ�ºκ� ���� �ѹ��� �ִ°��� ī��Ʈ
	int canvas[101][101] = { 0 };
	int num;
	int x, y;
	int count=0;	
	//���� ���� ������ ����
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