
#include "main.h"

void collect_data(voters_data *data)
{
	data->name = malloc(sizeof(char) * 100);
	data->lname = malloc(sizeof(char) * 100);

	data->location = malloc(sizeof(char) * 100);


       	printf("Enter your First Name: \n");
	fgets(data->name, 100, stdin);
	data->name[strcspn(data->name, "\n")] = '\0';
	for (int i = 0; data->name[i] != '\0'; i++)
	{
		if (isdigit(data->name[i]))
		{
			fprintf(stderr, "No digits should be in First Name\n");
			exit(EXIT_FAILURE);
		}
	}



	printf("Enter your Second Name: \n");
       	fgets(data->lname, 100, stdin);
	data->lname[strcspn(data->lname, "\n")] = '\0';
	for (int i = 0; data->lname[i] != '\0'; i++)
	{
		if (isdigit(data->lname[i]))
		{
			fprintf(stderr, "No digits should be in the second name\n");
			exit(EXIT_FAILURE);
		}
	}


	printf("Enter Your Age: \n");
	scanf("%d", &(data->Age));
	if (data->Age < 18)
	{
		fprintf(stderr, "Unable  to register,\n\tThis person is considerd an infant\n");
		exit(EXIT_FAILURE);
	}
	getchar();

	printf("Enter Your Location: \n");
	fgets(data->location, 100, stdin);
	data->location[strcspn(data->location, "\n")] = '\0';
	
	printf("Enter your id Number: \n");
	scanf("%d", &(data->id));
	getchar();

}
