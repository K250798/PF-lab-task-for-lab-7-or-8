#include <stdio.h>
int main(){
	int id[]={1,2,3,4,5};
	int day, shift, temp, i, j=0;
	int size=sizeof(id)/sizeof(id[0]);
	int NEW[size], COUNT=0;
	printf("Select Day of the week(1-7):\n\t1. Saturday\n\t2. Sunday\n\t3. Monday\n\t4. Tuesday\n\t5. Wednesday\n\t6. Thursday\n\t7. Friday\n DAY Number: ");
	scanf("%d", &day);
	
	
	if(day==3){
		printf("Positions to be rotated by: ");
		scanf("%d", &shift);
		
		for(i=size-shift;COUNT!=shift;i++){
			NEW[j]=id[i];
			j+=1;
			COUNT+=1;
			continue;
		}
		for(i=0;i<=(size-1)-shift;i++){
			NEW[j]=id[i];
			j+=1;
			continue;
		}
		printf("\nNew Shift Order: ");
		for(i=0;i<=size-2;i++){
			printf("%d,", NEW[i]);
		}
		printf("%d",NEW[size-1]);
	}
	else{
		printf("\nShifting is available only on Monday(3)!\n Please try again on Monday");
	}
	
}
