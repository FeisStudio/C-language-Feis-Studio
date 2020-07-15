#include<stdio.h>

//合法的隱性轉型1————————————————————————————————————————————————————————————————————————————
int main() {

	int intVar = 3;
	char charVar = '3';
	float floatVar = 3.5f;
	double doubleVar = 3.5;

	//同類型別內互轉（整數與整數間，浮點數與浮點數間）
	floatVar = doubleVar;	//(float)=(double)	(O)
	intVar = charVar;		//(int)=(char)		(O)

	//整數與浮點數間互轉
	intVar = doubleVar;		//(int）=（double）	（O：無條件捨去）
	doubleVar = intVar;		//(double）=（int）	（O)

	return 0;
}

//合法的隱性轉型2————————————————————————————————————————————————————————————————————————————
int main() {

	int v[3];
	int* n;
	const int* p;

	//陣列可以隱性轉型成指向第一個元素的指標
	n = v;	//（int *）=（int ［4］）		（O）

	v = n;	//（int ［3］）=（int *）		（X）

	//Type * 可以隱性轉型成const Type *
	p = n;	//（const int *）=（int *）	（O）

	n = p;	//（int *）=（const int *）	（?）

	return 0;
}

//合法的隱性轉型3————————————————————————————————————————————————————————————————————————————
int main() {

	int intVar = 3;

	double* doublePtr = &intVar;	//	(?)

	return 0;
}
	
//合法的隱性轉型4————————————————————————————————————————————————————————————————————————————
int main() {

	int intVar = 3;		
										  //Type *——————void *	泛用型別
	void* voidPtr = &intVar;		//void *與其他型別的指標「可能」可以互轉 
									  //其他的大部分都是『未定義行爲』
	int* intPtr = voidPtr;

	printf("%d\n", *intPtr);

	return 0;
}

//合法的隱性轉型5————————————————————————————————————————————————————————————————————————————
int main() {

	int intvar = 3;						//type *——————void *	泛用型別
									//void *與其他型別的指標「可能」可以互轉 
	void* voidptr = &intvar;	  	    
								
	printf("%d\n", *voidptr);		//(x:編譯失敗)

	return 0;
}

//合法的隱性轉型6————————————————————————————————————————————————————————————————————————————
int main() {

	int intVar = 3;						//Type *——————void *	泛用型別
									//void *與其他型別的指標「可能」可以互轉 
	void* voidPtr = &intVar;

	double* doublePtr = voidPtr;

	printf("%f\n", *doublePtr);		//着結果會是什麼？

	return 0;
}
