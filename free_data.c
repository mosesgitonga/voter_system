#include "main.h"

void freedata(voters_data *data)
{
	free(data->name);
	free(data->lname);
	free(data->location);
}
