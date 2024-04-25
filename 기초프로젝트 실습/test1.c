#include <stdio.h>
#include <stdlib.h>

struct CarReservation
{
    char model_name[100];
    int model_number;
    int reservation_state;
};

int main()
{
    struct CarReservation car[10] = {
        {"no.1", 1, 0}, // 자동차 구조체 배열 초기화
        {"no.2", 2, 0},
        {"no.3", 3, 0},
        {"no.4", 4, 0},
        {"no.5", 5, 0},
        {"no.6", 6, 0},
        {"no.7", 7, 0},
        {"no.8", 8, 0},
        {"no.9", 9, 0},
        {"no.10", 10, 0},
    };

    char user_choice;
    int has_reserved_car = 0;

    while (1)
    {
        printf("자동차 모델을 선택하겠습니까? (Y/N) : ");
        scanf(" %c", &user_choice); // 사용자로부터 대문자 또는 소문자 Y 또는 N 입력 받음

        if (user_choice == 'y' || user_choice == 'Y') // 사용자가 Y를 입력했을 경우
        {
            printf("자동차 모델 번호: ");
            for (int i = 0; i < 10; i++) // 사용 가능한 자동차 모델 번호 출력
            {
                printf("%d ", car[i].model_number);
            }
            printf("\n자동차 예약 현황: ");
            for (int i = 0; i < 10; i++) // 각 자동차 모델의 예약 상태 출력
            {
                printf("%d ", car[i].reservation_state);
            }

            int selected_model;
            while (1)
            {
                printf("\n\n자동차 모델 선택(1~10) : ");
                scanf("%d", &selected_model); // 사용자로부터 선택한 자동차 모델 번호 입력 받음

                if (selected_model >= 1 && selected_model <= 10 && car[selected_model - 1].reservation_state == 0) // 선택한 번호가 유효하고 해당 모델이 예약되지 않았을 경우
                {
                    printf("예약완료!\n");
                    car[selected_model - 1].reservation_state = 1; // 선택한 모델을 예약 상태로 변경
                    break;
                }
                else if (car[selected_model - 1].reservation_state == 1) // 이미 예약된 모델을 선택한 경우
                {
                    printf("예약 불가 상품입니다. 모델 번호를 다시 입력하세요.\n");
                }
                else // 잘못된 입력인 경우
                {
                    printf("잘못 입력했습니다! 모델 번호를 다시 입력하세요.\n");
                }
            }
        }
        else if (user_choice == 'n' || user_choice == 'N') // 사용자가 N을 입력했을 경우
        {
            for (int i = 0; i < 10; i++)
            {
                if (car[i].reservation_state == 1) // 예약된 모델이 있는지 확인
                {
                    has_reserved_car = 1;
                    printf("예약된 자동차 모델[%s] ", car[i].model_name); // 예약된 모델 이름 출력
                }
            }
            if (has_reserved_car == 1) // 예약된 모델이 있을 경우
            {
                printf("예약 완료 후 프로그램 종료\n");
            }
            else // 예약된 모델이 없을 경우
            {
                printf("프로그램을 종료합니다\n");
            }
            break; // 프로그램 종료
        }
        else // 유효하지 않은 알파벳을 입력했을 경우
        {
            printf("알파벳 입력 오류! 알파벳은 대소 문자 구별 없이 Y 또는 N만 허용합니다.\n알파벳을 다시 입력하세요.\n");
        }
    }

    return 0;
}
