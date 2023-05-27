
#include "main.h"

void collect_data(voters_data *data)
{
	data->name = malloc(sizeof(char) * 100);
	data->lname = malloc(sizeof(char) * 100);

	data->location = malloc(sizeof(char) * 100);

       	printf("Enter your First Name: \n");
	fgets(data->name, 100, stdin);
	data->name[strcspn(data->name, "\n")] = '\0';

	printf("Enter your Second Name: \n");
       	fgets(data->lname, 100, stdin);
	data->lname[strcspn(data->lname, "\n")] = '\0';

	printf("Enter Your Age: \n");
	scanf("%d", &(data->Age));
	getchar();

	printf("Enter Your Location: \n");
	fgets(data->location, 100, stdin);
	data->location[strcspn(data->location, "\n")] = '\0';
	printf("Enter your id Number");
	scanf("%d", &(data->id));

}
