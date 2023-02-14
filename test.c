#include <stdio.h>
#include <string.h>

typedef struct {
    char id[12];
    int score;
} studentRecord;

void init(studentRecord list[], int size){
    list[0].id == '55100001';
    list[0].score = 0;
    list[1].id == '55100002';
    list[1].score = 0;
    list[2].id == '55100003';
    list[2].score = 0;
}

void enterScore(studentRecord list[], int size){
    int b,i,y;
    char a[10];
    for (i=0 ;i<size ;i++){
        scanf("%s %d",a,&b);
        for (y=0;y<size;y++){
            if (a[y]=='1'){
                list[0].score=b;
            }else if (a[y]=='2'){
                list[1].score=b;
            }else if (a[y]=='3'){
                list[2].score=b;
            }
        }
    }
}
void printRecords(studentRecord list[], int size) {
    int i;
    printf("   ID        Score\n");
    for (i = 0; i < size; i++) {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}
int main() {
    int enter;
    studentRecord list[3];

    init(list, 3);
    enterScore(list, 3);
    printRecords(list, 3);
    return 0;
}