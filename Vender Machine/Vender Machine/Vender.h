
struct item
{
	char name[100];
	int noOfItems;
	float unitPrice;
};
const int capacity = 100;
struct vendingMachine
{
	item data[capacity];
	int noOfItems;
	int rupees;
};
void inputItem(item & );
void printItem(item);
void addNewItemInVendingMachine(vendingMachine &,item );
void removeItemFromVendingMachine(vendingMachine & vending, char * itemName);
void updateItemUnitPrice(vendingMachine & vending, char* , int );
void addCurrencyInVendingMachine(vendingMachine & vending, int rupees);
void orderItem(vendingMachine & vending, int no);