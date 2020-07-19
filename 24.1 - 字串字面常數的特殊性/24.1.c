#include<stdio.h>

int main() {
	
	char strA[] = "test";
	char *strB = "test";	//字串字面常數可隱性轉型成字元指標
							//只能讀不能寫
							//一個整體,編譯器自動一個唯讀空間 

	strA[0] = 'T';	// (O)
	strB[0] = 'T';	// (X) 未定義行爲	只能讀取,不能寫

	strA = "Test";	// (X) 編譯失敗		陣列之間是不可以直接賦值的
	strB = "Test";	// (O)  


	return 0;
}	 