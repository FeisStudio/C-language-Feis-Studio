#include<stdio.h>


//1.在函式間傳送陣列型態時，與一般資料型態行爲不一樣
//		一般資料型態會將引數複製一份後傳入函式，但是陣列型
//	態卻不會複製一份陣列。
 //《複製的是陣列第一個元素的記憶體位址》
//2.當函式回傳值是陣列型態時，這是不合法的。
//		爲了作出等效於函式回傳的效果，我們可以將陣列作爲引
//	數傳入。當陣列作爲引數傳入時，陣列內容的修改會套用到這
//	個入的陣列本身。
//3.爲了與一般資料型態的行爲相符，C語言導入了指標來處理各種
//陣列複製與存取的行爲。
 //《指標用來存記憶體位址》



int main() {
	int v[3] = { 1,2,3 };
	return 0;
}