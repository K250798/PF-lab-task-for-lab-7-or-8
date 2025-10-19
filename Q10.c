#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int list[10];
	int i=0, num, found=0;
	int size=sizeof(list)/sizeof(list[0]);
	
	srand(time(0));
	for(i=0;i<size;i++){
		list[i]=rand()%100;
	}
	
	printf("Generated List: ");
	for(i=0;i<size;i++){
		printf("%d ", list[i]);
	}
	
	printf("\nEnter number to search: ");
	scanf("%d",&num);
	
	for(i=0;i<size;i++){
		if(list[i]==num){
			printf("Number found at index %d", i);
			found=1;
			break;
		}
		else{
			continue;
		}
	}
	
	if(found==0){
		printf("Number not found in the list");
	}
	
	return 0;
}

