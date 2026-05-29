#include <stdio.h>
#include <string.h>

int main(void){
    printf("");

    // main loop
    for (;;){
        char sget[500];

        printf("PI>> ");

        // get keyboard information in sget
        fgets(sget, sizeof(sget), stdin);

        // remove enter input from sget
        sget[strcspn(sget, "\n")] = 0;

        // keys -- (exit, enter)
        if (strcmp(sget, ".exit") == 0){
            break; 
        } 
        if (strlen(sget) == 0){
            continue;
        }
    }
    return 0;
}