#include<stdio.h>
int main(){
	int seat[]={0,0,0,0,0,0,0,0,0,0};
	int num, i=0, booked=0, found=0;
	int size=sizeof(seat)/sizeof(seat[0]);
	
	while(1){
		printf("Enter seat number (0-9): ");
		scanf("%d",&num);
		
		if(num>=0 && num<=9){
			if(seat[num]==0){
				seat[num]=1;
				printf("Seat %d booked successfully.\n", num);
				booked+=1;
			}
			else{
				printf("Seat already booked.\n");
				continue;
			}
		}
		else{
			printf("Invalid seat number. Try again.\n");
			continue;
		}
		
		if(booked==5){
			break;
		}
	}
	
	printf("\nFinal Seat Status:\n");
	for(i=0;i<size;i++){
		printf("%d ", seat[i]);
	}
	
	return 0;
}

