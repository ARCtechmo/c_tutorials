// practice code snippets
#include <stdio.h>
void newFunc(){
    int i = 4;
    switch(i){
        case 1:
            printf("Case 1\n"); break;
        case 2:
            printf("Case 2\n"); break;
        case 3:
            printf("Case3\n"); break;
        case 4:
            printf("Case 4\n"); break;
        default:
            printf("Deffault\n"); break;
    }
}

int intFunc(){
    int i = 4;
    switch(i){
        case 1:
            printf("Case 1\n"); break;
        case 2:
            printf("Case 2\n"); break;
        case 3:
            printf("Case3\n"); break;
        case 4:
            printf("Case 4\n"); break;
        default:
            printf("Default\n"); break;
    }
    return 0;
}

int counter(){
    for(int i = 1; i<=10; i++){
        if (i==2){
            continue;
        }
        if(i==6){
            break;
        }
        printf("%d\n", i);
    }

}
int main(){
    intFunc();
    counter();
    return 0;
}