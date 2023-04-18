#include <stdio.h>
#include <conio.h>

 trao đổi int ( int &a, int &b){
	int x = a;
	a = b;
	b = x;
}

int  hoán vị ( int a[], int n){
	cho ( int i = 0 ; i < n- 1 ; i++){
		cho ( int j = i + 1 ; j < n; j++){
			nếu (a[i] > a[j]){
				hoán đổi (a[i], a[j]);
			}
		}
	}
}

int  chính (){
	int a[] = { 41 , 23 , 4 , 14 , 56 , 1 };
	int n = 6 ;
	hoán vị (a, n);
	printf ( " Mang sau khi sap xep la: " );
	cho ( int i= 0 ; i<n; i++){
		printf ( " %d " , a[i]);
	}
	trả về  0 ;
}
