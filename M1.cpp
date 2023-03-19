#include<stdio.h>
#include<stdlib.h>
int decroissant(int T[5]){
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(T[j]<T[j+1]){
			temp=T[j];
			T[j]=T[j+1];
			T[j+1]=temp;
		}
	}
	}
	printf("les elements du tableau par ordre decoissant sont :\n");
	for(i=0;i<5;i++){
		printf("%d",T[i]);
	}
}
int main(){
	int i,T[5];
	printf("veuillez entrer les element du tableau : ");
	for(i=0;i<5;i++){
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	decroissant(T);
	return 0;
}
