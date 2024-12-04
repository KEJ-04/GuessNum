#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("숫자가 생성되었습니다. 1부터 100까지의 숫자를 맞춰보세요 !\n");
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &guess);
    attempts++;

    do 
    {
        printf("숫자를 입력하세요 : ");
        scanf_s("%d", &guess);
        attempts++;

        if (guess > target) 
        {
            printf("더 작은 숫자입니다.\n");
        }
        else if (guess < target) 
        {
            printf("더 큰 숫자입니다.\n");
        }
        else 
        {
            printf("축하합니다 ! %d번 만에 숫자를 맞추셨습니다.\n", attempts);
        }
    } while (guess != target);


    return 0;
}
