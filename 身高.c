#include <stdio.h>

int main()
{
	printf ("��ֱ�������ߵ�Ӣ�ߺͳߴ�"
	"������\"5 7\"����ʾ���5��7�硣") ;
	
	double foot;
	double inch;
	
	scanf("%lf %lf",&foot,&inch);
	
	
	printf("��������%f��\n",
	((foot+inch/12)*0.3048));
	
	return 0;
}
