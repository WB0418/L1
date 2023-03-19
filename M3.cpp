#include<stdio.h>
void decroissant(int T[5]){
	int i,j,temp;
	for(i=1;i<5;i++){
		temp=T[i];
		j=i-1;
		while(j>=0&&T[j]<temp){
			T[j+1]=T[j];
			j--;
		}
		T[j+1]=temp;
	}
	printf("les element du tableau par ordre decroissant sont : ");
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

