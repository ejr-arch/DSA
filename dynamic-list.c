int data1;

char data2; 

float data3; 


typedef struct{
	void* itemData;
	ItemDataType itemType;
} ListItem;

ListItem* createItem(void data){
	ListItem* newItem;
	*newItem->itemData = data;
	*newItem.itemType = void;

	return newItem;
}

typedef struct{
	ListItem* itemList;
	int itemCount;
	void* lastItem;
} DynamicList;

DynamicList* createDynamicList(){
	DynamicList* newList;
	*newList->itemCount = 0;

	return newList;
}

void insertItemToDynamicList(ListItem* item){
	//
}

