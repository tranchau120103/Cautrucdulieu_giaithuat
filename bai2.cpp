#include <stdio.h>
#include <conio.h>

int  tìm kiếm tuyến tính ( int a[], int n, int x){
	cho ( int i= 0 ; i<n; i++){
		nếu (a[i] == x){
			trả lại tôi;
		}
	} trả về - 1 ;
}

int  chính (){
	int a[] = { 2 , 3 , 4 , 10 , 40 };
	int n = 5 ;
	int x = 10 ;
	int ketqua = linearsearch (a,n,x);
	nếu (kết quả == - 1 ){
		printf ( " Không thời gian thay phần tử " );
	} khác
		printf ( " Phan tu %do vi tri a[%d] " , x, ketqua);
	trả về  0 ;
}
