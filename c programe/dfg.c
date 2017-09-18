#include <stdio.h>

int main() {
	int i,x;
	int ara[10];
	printf("Enter aquired numbers rollwise:");
	for(i=0;i<10;i++) {
		scanf("%d",&ara[i]);
	}
	for(i=0;i<10;i++) {
		if(ara[i]>=80) {
			printf("Roll %d's grade is: 5\n",i+1);
		}
		else if(ara[i]>=70 && ara[i]<80) {
			printf("Roll %d's grade is: 4\n",i+1);
		}
		else if(ara[i]>=60 && ara[i]<70) {
			printf("Roll %d's grade is: 3.5\n",i+1);
		}
		else if(ara[i]>=50 && ara[i]<60) {
			printf("Roll %d's grade is: 3\n",i+1);
		}
		else if(ara[i]>=40 && ara[i]<50) {
			printf("Roll %d's grade is: 2.5\n",i+1);
		}
		else {
			printf("Roll %d has failed\n",i+1);
		}
	}
	return 0;
}
