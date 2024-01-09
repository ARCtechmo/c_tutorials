// practice code snippets
// a simple counter from 1 - 10
#include <stdio.h>
int countSwitch(){
    for(int i=1; i<=10; i++){
        switch(i){
            case 1: 
                printf("Start\n");
                break;
            default:
                printf("Default\n");
        };
        printf("%d\n", i);
        switch(i){
            case 10:
            printf("Done!\n");
            break;
        }
    };
    return 0;
}

int chFunc(){
    char c = 'a';
    printf("%c\n", c);
    return 0;
}

int exFunc(){
    const int a = 11;
    int ans = a + 2;
    printf("%d\n", ans);
    return 0;
}

int main(){
    countSwitch();
    chFunc();
    exFunc();
    return 0;
}
