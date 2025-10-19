#include <stdio.h>
int main(){
	int classA[]={1,2,3,4,5,6,7,8,9,29,20}, classB[]={10,11,12,13,14,15,16,17,18,19};
	int sizeA=sizeof(classA)/sizeof(classA[0]), sizeB=sizeof(classB)/sizeof(classB[0]);
	int Combinesize=sizeA+sizeB;
	int combine[Combinesize],i, j=0, k=0;
	
	for (i=0;i<Combinesize;i++){
		if(j!=sizeA){
		    combine[i]=classA[i];
		    j+=1;
        }
        else if(k!=sizeB){
        	combine[i]=classB[k];
        	k+=1;
		}
	}
	printf("Combined Roll Numbers: ");
	for (i=0;i<Combinesize-1;i++){
		printf("%d, ",combine[i]);
	}
	printf("%d",combine[Combinesize-1]);
}
