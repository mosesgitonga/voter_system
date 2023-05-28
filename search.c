#include "main.h"

void search_voter(voters_data *data)
{
	char line[256];
	char search_name[100];

	printf("Enter name to search for: \n");
	fflush(stdout);
	fgets(search_name, 100, stdin);
	search_name[strcspn(search_name, "\n")] = '\0';

	FILE *file = fopen("voter data storage.txt", "r");
	
	if (file == NULL)
	{
		fprintf(stderr, "unable to open file\n\tfile might be empty");
	}
	while  (fgets(line, sizeof(line), file))
	{
		char name[100];
		char lname[100];
		int Age;
		char location[100];
		int id;

		if (sscanf(line, "Name: %99s %99s", name, lname) == 2)
		{
			if (strcmp(name, search_name) == 0)
			{
				printf("Name: %s %s", name, lname);
				
				fgets(line, sizeof(line), file);
				sscanf(line, "Age %d", &Age);
				printf("Age: %d\n", Age);

				fgets(line,sizeof(line), file);
				sscanf(line, "Location: %99[^\n]", location);
				printf("Location: %s\n", location);
				
				fgets(line, sizeof(line), file);
				sscanf(line, "ID Number %d", &id);
				printf("ID Number: %d\n", id);				

				break;
			}
		}
	}
	fclose(file);
}
