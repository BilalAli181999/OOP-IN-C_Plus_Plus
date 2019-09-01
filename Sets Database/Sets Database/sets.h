struct setDatabase
{
	set *set;
	int noOfSets;
	int capacity; 
};
struct set
{
	int *data;
	int noOfElements;
	int capacity;
	char name[10];
};
void createSetDatabase(setDatabase &setDB, int size);
set calIntersection(setDatabase & setDb, set set1, set set2);
void addSet(setDatabase & setDb, int size);
void removeSet(setDatabase & setDb, char *name);
void displayAllSets(setDatabase &setDb);
void displaySet(setDatabase & setDb, char *name);
void addAnElement(setDatabase & setDb);
