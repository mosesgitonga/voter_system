#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
typedef struct node{
	char *name;
	char *lname;
	char *location;
	int Age;
	int id;
}voters_data;
void collect_data(voters_data *data);
void freedata(voters_data *data);

void store_data_in_file(FILE *file_name, voters_data *data);




#endif

