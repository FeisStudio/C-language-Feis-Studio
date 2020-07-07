#include<stdio.h>

int main() {

	char strA[] = "test";
	const char* strB = "test";	//字串字面常數可隱性轉型成字元指標
							//只能讀不能寫

	strA[0] = 'T';	// (O)
	//strB[0] = 'T';	// (X) 編譯失敗

	//strA = "Test";	// (X) 編譯失敗		
	strB = "Test";	// (O) 

	int printf(const char* "Hello world!\n");


	//printf("Hello world!\n");等於int printf( const char *format, ... );

	return 0;
}