#include "main.h"

int main()
{
	voters_data data;
	
	FILE *file_name;
	store_data_in_file(file_name, &data); 
	return 0;
}
