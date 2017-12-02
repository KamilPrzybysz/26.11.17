#include <stdio.h>
#include <string.h>

glue_strings()
{
 	char t1[]="Ala ma kota";
        char t2[]="Kota ma prezes";
        strcat(t1, t2);
        printf("%s\n", t1);
}


int main()
{
	glue_strings();
    	return 0;
}
