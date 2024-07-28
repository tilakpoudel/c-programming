#include <stdio.h>

int main() {

    // \a => audible alert or beep sound, \t => horizontal tab \n => move cursor to next\new line
    printf("\a Hello \t World \n");
    // \" => double quote, \' => single quote \\ => backslash
    printf("He said \"Hello\" \'world\' \n");
    // \v => vertical tab, \t => horizontal tab
    printf("vertical tab: Hello \v world \n");
    printf("horizontal tab Hello \t world \n");
    // \\=>back slash
    printf("my folder is at home\\c-program \n");
    printf("I am null \0 character \n");

    return 0;
}
