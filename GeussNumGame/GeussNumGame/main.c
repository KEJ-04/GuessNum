#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void playGame() 
{
    int secretNumber, guess, attempts = 0;

    srand(time(NULL));
    secretNumber = rand() % 100 + 1;

    printf("게임 규칙 : 1부터 100까지의 숫자 중 하나를 랜덤으로 선택합니다.\n");
    printf("당신은 그 숫자를 맞추는 게임을 진행하게 됩니다.\n");

    // 게임 루프
    while (1) 
    {
        printf("숫자를 입력하세요 : ");
        if (scanf("%d", &guess) != 1) 
        {
            printf("잘못된 입력입니다. 숫자만 입력해 주세요.\n");
            while (getchar() != '\n');  // 입력 버퍼 비우기
            continue;  // 잘못된 입력 시 다시 시도
        }
        attempts++;

        if (guess > secretNumber) {
            printf("입력한 숫자가 너무 큽니다.\n");
        }
        else if (guess < secretNumber) {
            printf("입력한 숫자가 너무 작습니다.\n");
        }
        else 
        {
            printf("축하합니다! 숫자를 맞추셨습니다.\n 게임이 종료됩니다.\n");
            break;
        }
    }

    printf("게임을 종료했습니다. 총 시도 횟수 : %d번\n", attempts);
}

int main() {
    char choice;
    
    while(1)
    {
        playGame();

        printf("게임을 다시 하시겠습니까 ? (Y/N) : ");
        scanf_s(" %c", &choice);

        if (choice == 'Y' || choice == 'y') 
        {
            printf("게임을 재시작합니다.\n");
            continue;
        }
        else if (choice == 'N' || choice == 'n') 
        {
            printf("게임을 종료합니다.\n");
            break;
        }
        else 
        {
            printf("잘못된 입력입니다. Y 또는 N을 입력해 주세요.\n");
        }
    }

    return 0;
}
