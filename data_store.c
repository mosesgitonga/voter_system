#include "main.h"
/**
*This function will store data in a file when it is collected
only when it has finished collecting the data

Else:
the data will not be collected.
*/
void store_data_in_file(FILE *file_name, voters_data *data)
{
	file_name = fopen("voter data storage.txt", "w+");
	
	if (file_name == NULL)
	{
		printf("error in opening file");
	}

	collect_data(data);

	fprintf(file_name, "Name: %s %s\n", data->name, data->lname);
	fprintf(file_name, "Age: %d\t\n", data->Age);
	fprintf(file_name, "Location: %s\t\n", data->location);
	fprintf(file_name, "ID Number: %d\t\n", data->id);

	fclose(file_name);
}
