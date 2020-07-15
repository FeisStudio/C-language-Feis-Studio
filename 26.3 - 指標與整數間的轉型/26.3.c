#include<stdio.h>

//電腦怎麼儲存指標？
	//指標是個儲存記憶體位址的資料型別
	//記憶體位址張怎樣？
		//把記憶體相稱一段連續的空間，我們以位元組爲單位，替每個位元組给
		  //一個獨一無二的編號或表示法
		//編號要怎麼編？
			//從0或1開始逐個加1？
			//佛曰不可說！

//————————————————————————————————————————————————————————————————————————————————
	//Type* ————————void*
	//轉過去再轉回來會一樣

	//Type* ————————整數
	//不一定可以，需要強制轉型，如果整數存得下則結果是實作定義
	  //否則是未實作定義	

int main() {
	
	int var = 3;
	int* pointer = &var;
	int pointerInt = (int)pointer;
	int* anotherPointer = (int*)pointerInt;
	//anotherPointer == pointer;

	return 0;
}

//————————————————————————————————————————————————————————————————————————————————
	//整數————————Type *
	//不一定可以，需要強制轉型，結果是實作定義
int main() {
	
	int* pointer = (int*)123;
	*pointer = 456;
	
	return 0;
}

//————————————————————————————————————————————————————————————————————————————————
	//TypeA *——————————TypeB *
	//不一定可以，需要強制轉型，如果TypeB的對齊教TypeA不嚴格則轉回來會一樣