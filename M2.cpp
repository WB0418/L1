#include<stdio.h>
void decroissant(int T[5]) {
  int i,j,l,temp;
  for (i = 0;i<5;i++) {
    l=i;
    for (j=i+1;j<=5;j++) {
      if (T[j]>T[l]) {
        l=j;
      }
    }
    if (l!=i) {
      temp=T[i];
      T[i]=T[l];
      T[l]=temp;
    }
  }
  printf("les elements du tableau par ordre decroissant sont : ");
  for(i=0;i<5;i++){
  	printf("%d",T[i]);
  }
}
int main(){
	int i,T[5];
	printf("veuillez entrer les elements du tableau : ");
	for(i=0;i<5;i++){
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	decroissant(T);
	return 0;
}
