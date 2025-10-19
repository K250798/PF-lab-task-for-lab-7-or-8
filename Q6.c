#include<stdio.h>
int main(){
	int i, item;
	int list[]={1,120,1,6,7,9,3,5,6,7,8,3,1,2,0,7,4,2,3,4,5,6,7,8,9,10};
	int size=sizeof(list)/sizeof(list[0]);
	int count=size;
	
	printf("For No Defective items, Enter -1\nAny Defective Items: ");
	scanf("%d",&item);
	
	if(item!=-1){
		for(i=0;i<size;i++){
			if(list[i]==item){
				list[i]=-1;
				count-=1;
				continue;
			}
	    }
    }
    else{
		printf("\nProgram Ended: No defective Item inserted...");
		return 0;
	    }
    
	int NewList[count];
	printf("Updated Item List: ");
	for(i=0;i<count;i++){
		if(list[i]!=-1){
			NewList[i]=list[i];
			printf("%d", NewList[i]);
		}
	}
	return 0;
}
