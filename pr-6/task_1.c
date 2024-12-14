#include <stdio.h>
#include <string.h>
main()

{
    int num =  22;
    char name [num];

    printf("enter your name:-");
    scanf("%[^\n]", &name);

    char copy[num];

    for (int i = 0; i < num; i++){
        copy[i] = name[i];
    }

    int length = strlen(copy);
    int l = length - 1;
    int temp, i = 0;
    while (i < l) {
        temp = copy[i];
        copy[i] = copy[l];
        copy[l] = temp;
        l--;
        i++;
    }
    int condition = 0;

    for (int i = 0; i < length; i++) {
        if (name[i] != copy[i]) {
            condition = 1;
            break;
        }
    }

    if (condition == 1) {
        printf("this name is not palindrom...");
    }
    else {
        printf("this name is palindrom...");
    }
}