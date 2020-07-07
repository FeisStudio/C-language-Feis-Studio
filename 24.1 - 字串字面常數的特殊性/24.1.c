#include<stdio.h>

int main() {
	
	char strA[] = "test";
	char *strB = "test";	//字串字面常數可隱性轉型成字元指標
							//只能讀不能寫

	strA[0] = 'T';	// (O)
	strB[0] = 'T';	// (X) 未定義行爲

	strA = "Test";	// (X) 編譯失敗		
	strB = "Test";	// (O) 


	return 0;
}