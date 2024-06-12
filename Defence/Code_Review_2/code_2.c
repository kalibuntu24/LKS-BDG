#include <stdio.h>
#include <string.h>

int main(void)
{
    char password[32];
    int authorised = 0;

    printf("Masukan Password: \n");
    gets(password);

    if(strcmp(password, "iniadalahpassworduntukadmin") == 0)
    {
        printf("Correct Password!\n");
        authorised = 1;
    }
    else
    {
        printf("Incorrect Password!\n");
    }

    if(authorised)
    {
        printf("Selamat datang Admin (authorised=%d) :)\n", authorised);
    }else{
		printf("Gagal login sebagai Admin (authorised=%d) :(\n", authorised);
	}

    return 0;
}