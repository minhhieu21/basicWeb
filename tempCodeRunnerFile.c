#include<stdio.h>
int main(){
	int i,n; float a[200] ; 
	printf("\nnhap vao so phan tu cua mang :");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++){
		printf("\nnhap vao a[%d] = ",i);
		scanf("%f",&a[i]);
	}
	for(i=0 ; i<n ; i++){
		printf("\nban da nhap vao a[%d] = %f",i,a[i]);
	}
	int max = a[0] ; 
	for(i = 0 ; i < n ; i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("\nso lon nhat trong mang tim duoc = %d",max);
	return 0;
}
