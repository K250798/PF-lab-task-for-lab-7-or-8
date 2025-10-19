#include <stdio.h>
int main(){
	int i, id[]={60,1,2,3,4,2,15,6,4,7,6,8,8,10,23,34,3,23,34,55,56,56,77,87,98};
	int size=sizeof(id)/sizeof(id[0]), arr[size];
	for(i=0;i<=size;i++){
		arr[i]=id[i];
	}
	int j=1,k=0, highCount=0, count=0, high=0;
	
	for(i=0;i<size*size;i++){
		if(j>size-1){
			if (k==0){
				highCount=count;
				high=id[0];
				count=0;
			}
			else if(highCount<count){
				highCount=count;
				high=id[k];
				count=0;
			}
			k+=1;
			j=k+1;
			continue;
		}
		if (id[k]==arr[j]){
			count+=1;
			j+=1;
			continue;
		}
		if (id[k]!=arr[j]){
			j+=1;
			continue;
		}
		if(k==size-1){
			break;
		}	
	}
	printf("Most Product(ID) Sold: %d", high);
	return 0;
}
