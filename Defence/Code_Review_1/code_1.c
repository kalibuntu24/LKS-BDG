#include <stdio.h>

void function() {
    char text[32];
    printf("Masukkan teks: ");
    gets(text);
    printf("Teks yang dimasukkan: %s\n", text);
}

int main() {
    function();
    return 0;
}
