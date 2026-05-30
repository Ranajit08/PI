#include <stdio.h>
#include <string.h>
#include "../include/version.h"

int read();
int write();
int update();
int delete();

int main(int argc, char* arg[]){
    if (argc == 2){
        if (strcmp(arg[1], "-v") == 0 || strcmp(arg[1], "--version") == 0){
            printf("PI Version: %s", PI_VERSION);
            return 1;
        }
        if (strcmp(arg[1], "init") == 0){
            printf("Welcome to PI Database REPL.\n");
            printf("PI version %s\n", PI_VERSION);

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
        }
    }
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