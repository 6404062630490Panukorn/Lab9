#include <stdio.h>


//function prototype
void swapArray(int a[], int b[], int size); 
//or void swapArray(int *a, int *b, int size); 

int main() {
	int size = 3;
	int a[] = {1,2,3};
	int b[] = {4,5,6};
//calling swapArray()
	swapArray(a,b,size);
	for(int i = 0; i < size; i++){
		printf("%d %d\n",&a[i],&b[i]);
	}

}

void swapArray(int a[], int b[], int size){
	int *pa;
	for(int i = 0; i < size; i++){
		pa[i] = a[i];
		a[i] = b[i];
		b[i] = pa[i];
//		*(pb+i) = &b[i];
//		a[i] = *(pb+i);
//		b[i] = *(pa+i);
	}
}
