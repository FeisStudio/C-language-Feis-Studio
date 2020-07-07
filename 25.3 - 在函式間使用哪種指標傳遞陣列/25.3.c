#include<stdio.h>
//指標之間的區別————————————————————————————————————————————————————————————
	//int main() {
		//int v[3] = { 1,2,3 };	//v{ v[0](int)1,v[1](int)2,v[3](int)3 };

		//int* n = v;		//n{ (int*)&v[0],(int(*)[3]) & v) };儲存了一個整數元素的指標

		//int* p[3] = { &v[2],&v[1],&v[0] };	//p[0](int *)&v[2],p[1](int *)&v[1],p[2](int *)p[0] ;

		//int(*q)[3] = &v;	//q{ int(*)[3] & v };儲存了三個指標元素的陣列的指標
		return 0;
	//}
//sizeof記憶體空間大小————————————————————————————————————————————————————————————
	int v[3] = { 1,2,3 };
	printf("%zu\n", sizeof(v));		//sizeof(int[3])
	printf("%zu\n", sizeof(v[0]));	//sizeof(int)
	printf("%zu\n", sizeof(&v[0])); //sizeof(int *)
	printf("%zu\n", sizeof(&v));	//sizeof(int(*)[3])
//————————————————————————————————————————————————————————————
	//儘可以處理一個指標陣列
	void print(int(*q)[3]) {
	int i;
	for (i = 0; i < sizeof(*q) / sizeof((*q)[0]); i++) {
		//sizeof(int[3])/sizeof(int)
		printf("%d ", (*q)[i]);//無法同一個函式
	}
	printf("\n");
}
	int main() {
	int v[] = { 1,2,3 };
	print(&v);
	return 0;
	}

//————————————————————————————————————————————————————————————
	//可處理多個指標陣列
	void print(int* n, int size) {
		int i;
		for (i = 0; i < size; i++) {
			printf("%d", n[i]);//共用同一個函式
		}
		printf("\n");
	}

	int main() {
		int v[] = { 1,2,3 };
		print（v,3):
		return 0;
	}
}

