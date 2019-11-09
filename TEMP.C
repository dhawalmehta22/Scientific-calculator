#include <stdio.h>
#include <string.h>
// declaring structure
struct struct_example
{
int integer;
float decimal;
char name[20];
};
// declaraing union
union union_example
{
int integer;
float decimal;
char name[20];
};
int main()
{
// creating variable for structure and initializing values difference
struct struct_example s={18,38,"abcdefghijklm"};
// creating variable for union and initializing values
union union_example u={18};
printf("structure data:\n integer: %d\n"
"decimal: %.2f\n name: %s\n",
s.integer, s.decimal, s.name);
printf("\nunion data:\n integeer: %d\n"
"decimal: %.2f\n name: %s\n",
u.integer, u.decimal, u.name);
return 0;
}
