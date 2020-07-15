
	//Type* ————————void*
	//轉過去再轉回來會一樣

	//Type* ————————整數
	//不一定可以，需要強制轉型，如果整數存得下則結果是實作定義
	  //否則是未實作定義	

	//整數————————Type *
	//不一定可以，需要強制轉型，結果是實作定義

	//TypeA *——————————TypeB *
	//TypeA * > Type *
	//不一定可以，需要強制轉型，如果TypeB的對齊教TypeA不嚴格則轉回來會一樣

	//一次存取多個位元組的效率？
	//每個型別對齊大小多爲實作定義		假設int對齊爲1，每個int佔據4個位元組

	//一次存取多個位元組的效率？
	//假設int對齊爲2

	//char對齊爲1	每個char佔據一個位元組
	//假設int對齊爲4

	//可以存char的位址一定可以存int嗎？  不行，無法與int對齊
	//可以存int的位址一定可以存char嗎？  可行，int位址大於char位址