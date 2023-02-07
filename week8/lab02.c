#include <stdio.h>
#include <string.h>

typedef struct {
    char id[13];
    int score;
} studentRecord;

void init(studentRecord list[], int size) {
    int id = 55100000,i = 0;
    for(;i < size;i++) {
        id += 1;
        char add_id[13];
        sprintf(add_id, "%d", id);
        strcpy(list[i].id, add_id);
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size){
    char id[13];
    int score, len, i = 0;
    for(;i < size; i++) {
        scanf("%s %d", id, &score);
        len = strlen(id);
        int i = id[len-1] - '1'; list[i].score = score;
    }
    // if(len <= 5) {
    //     int i = id[len-1] - '1'; list[i].score = score;
    // }
    // else{
    //     if(id[0] == '5' && id[1] == '5' && id[2] == '1') {
    //         int i = id[len-1] - '1'; list[i].score = score;
    //     }
    // }
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