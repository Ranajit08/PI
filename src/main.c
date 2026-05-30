#include <stdio.h>
#include <string.h>

int read();
int write();
int update();
int delete();

int main(void){
    printf("Welcome to PI Database REPL.\n");
    printf("...\n");

    // file to open 
    FILE* f;

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
int read(){
    return 0;
};
int write(){
    return 0;
};
int update(){
    return 0;
};
int delete(){
    return 0;
};