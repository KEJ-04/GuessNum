#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    printf("숫자가 생성되었습니다. 맞춰보세요!\n");
    return 0;
}
