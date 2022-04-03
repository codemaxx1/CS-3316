// written by Nicholas Garrett


#include <String.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

int find(char* array[8], int min, int max, char* key)
{
	bool found = false;
	int pos = -1;
	int f = -1;	
	
	if(abs(max-min) > 1)
	{
		f = find(array, min, min+((max-min)/2 ), key);
		if(f != -1)
		{ 
			pos = f;
		}
		
		f = find(array, min+((max-min)/2 + 1), max, key);
		if(f != -1)
		{
			pos = f;
		}
	}
	
	if(!strcmp(array[min], key))
	{
		pos = min;		
	}
	
	return pos;
}



int main()
{
	char *array[7] = {"at","","","bat","cat","","deck"};
	int found = find(array, 0, 7, "cat");
	cout << "was it found? " << found;

}