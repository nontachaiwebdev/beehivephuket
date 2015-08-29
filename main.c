#include <stdio.h>

int main() {
	char x[100];
	//scanf("%s",x);
	int i=0,big=0,small=0;
	scanf("%s", x);
	while(x[i]!='\0')
	{
		if((x[i]>=65)&&(x[i]<=90))
		{
			//printf("Big value!!!\n");
			big++;
		}
		else	small++;
		//count++;
		i++;
	}
	printf("Big is %d\nSmall is %d\n",big,small);
}