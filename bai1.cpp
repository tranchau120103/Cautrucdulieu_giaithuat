#include <stdio.h>
#include <conio.h>

int  tìm kiếm nhị phân ( int a[], int n, int x){
	int l = 0 , r = n- 1 ;
	trong khi (l < r){
		int mid = (l+r)/ 2 ;
		nếu (a[giữa] == x){
			trở về giữa;
		}
		khác  nếu (a[giữa] < x){
			l = giữa + 1 ;
		}
		khác 
			r = giữa;
	}
	trả về - 1 ;
}

int  chính (){
	int a[] = { 2 , 3 , 4 , 10 , 40 };
	int n = 5 ;
	int x = 10 ;
	int ketqua = binarysearch (a,n,x);
	nếu (kết quả == - 1 ){
		printf ( " khong tim thay phan tu " );
	} khác
		printf ( " Phan tu %do vi tri a[%d] " , x, ketqua);
}
