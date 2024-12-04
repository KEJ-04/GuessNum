#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess;

    printf("숫자가 생성되었습니다. 1부터 100까지의 숫자를 맞춰보세요 !\n");
    printf("숫자를 입력하세요: ");
    scanf_s("%d", &guess);

    if (guess == target) 
    {
        printf("축하합니다! 숫자를 맞추셨습니다.\n");
    }
    else 
    {
        printf("틀렸습니다! 다시 시도하세요.\n");
    }

    return 0;
}
