#include <stdio.h>
int main (){
	float list[]={2,3,4,5,6,7,8.5,9.8,10.25,12,34,122.2,243.2, 222,345, 40, 54, 78, 20,45,56,23,4,34,22.0,13,56,67};
    float arr[]={2,3,4,5,6,7,8.5,9.8,10.25,12,34,122.2,243.2, 222,345, 40, 54, 78, 20,45,56,23,4,34,22.0,13,56,67};
    float amnt;
    int j=0, i=0, found=0, size=sizeof(list)/sizeof(list[0]);
    
    printf("Enter sum amount of the 2 items to be bought: ");
    scanf("%f", &amnt);
    
    for(i=1; i<(size*size); i++){
    	if(((arr[j]+list[i])==amnt)&&(arr[i]!=list[j])){
    		
    		printf("Item 1 costs: %.2f\nItem 2 costs: %.2f\n\nTotal Cost: %.2f",arr[i], list[j],arr[i]+list[j] );
    		found=1;
    		break;
		}
		else if(j==size-1){
			break;
		}
		else if(i<size-1){
			continue;
		}
		else if(i==size){
			j+=1;
			i=0;
			continue;
		}
		
	}
	if (found==0){
		printf("Your Budget is not available in the items in stock today\n--------------Thank You-----------------");
	}
	return 0;
}
