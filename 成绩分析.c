#include <stdio.h>

int main()
{
	printf("����ɼ�");
	int grade;
	scanf("%d",&grade);
	grade/=10;
	switch(grade){
		case 10:
		case 9:
			printf("A\n");
		break;
		case 8:
		printf("B\n");
		break;
		case 7:
		case 6:
		printf("C\n");
		break;
		default:
		printf("D\n");
		break;	
	}
	
	return 0;
}
