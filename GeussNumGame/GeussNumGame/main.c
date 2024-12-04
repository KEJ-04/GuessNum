#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target, guess, attempts;
    char playAgain;

    do 
    {
        target = rand() % 100 + 1;
        attempts = 0;

        printf("숫자가 생성되었습니다. 1부터 100까지의 숫자를 맞춰보세요 !\n");

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

        printf("게임을 다시 하시겠습니까 ? (Y/N) : ");
        scanf_s(" %c", &playAgain);  // 공백을 넣어 엔터 문자 제거
    } while (playAgain == 'Y' || playAgain == 'y');

    printf("게임을 종료합니다.\n");
    printf("감사합니다 !\n");

    return 0;
}
