#include <stdio.h>

int main ()
{
	int x;
	int one,two,five;
	//int exit=0;
	
	scanf("%d",&x);
	
	for(one=1;one<=x*10;one++){
		for(two=1;two<=x*10/2;two++){
			for(five=1;five<=x*10/5;five++){
				if(one*1+two*2+five*5==x*10){
					printf("��Ҫ%d��һ��%d������%d����ǲ������%dԪ\n",one,two,five,x);
			//		exit=1;
				//	break;
				goto out;
				}
				
			}
			//if(exit==1){
			//break;
		//	}
		}
		///if(exit==1){
			//break;
	//	}
	}
	out:
	
	return 0;
}
