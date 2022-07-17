/*
* 문제 : 키보드로부터 문자열을 입력받아 이를 학생의 점수가
  다음 배열에 초기화, 점수를 읽어 다음의 결과를 출력하는 프로그램을 작성
* 이때, 배열에 저장된 점수의 개수는 알 수 없으므로 평균을 구하기 위해
  인원수를 증가시켜야 함
  마지막 데이터는 배열 원소에 0이 저장된 것을 기준으로 함
* 이 모든 제어를 포인터를 이용하여 처리(점수 0점은 없는 것으로 간주)
* int score[21] = {57,87,64,86,97,78,61,81,73,37,54}, i, sum=0, cn=0;
* int *ptr;
* 실행결과
  학생들의 점수 : 57, 87, 64, 86, 97, 78, 61, 81, 73, 37, 54
  인원수 : 11
  합 : 775, 평균 : 70.45
* 참고 사이트 : https://man-25-1.tistory.com/47
*/
#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arrsize_increase(int* size, int** arr);

int main() {
    // score_max : 배열의 최대 크기.
    // 원소가 1개라도 마지막 원소는 0을 넣어 끝을 표시해야 하므로 최소 원소 크기 = 2
    // 그래서 학생 수는 마지막 0 자리를 뺀 (score_max - 1)이 된다.
    int score_max = 2;

    // 점수 합계와 평균
    int sum = 0;
    double avg = 0;

    // 점수 담는 배열
    int* score = (int*)malloc(sizeof(int) * score_max);

    printf("학생들의 점수 : ");
    for (int i = 0;; i++) {
        if ((i + 1) > score_max) {
            arrsize_increase(&score_max, &score);
        }

        scanf("%d", &score[i]);
        if (score[i] == 0)
            break;
    }

    printf("인원수 : %d\n", score_max-1);
    for (int i = 0; i < score_max; i++) {
        if (i == (score_max-1)) {
            break;
        }
        // printf("%d번째 학생 점수 : %d\n", i + 1, score[i]);
        sum += score[i];
    }
    avg = sum / (double)(score_max - 1);

    printf("합계 : %d, 평균 : %lf\n", sum, avg);





}

void arrsize_increase(int* size, int** arr) {
    // 여기서 main함수의 score_max 1 증가 (= 배열 크기 1 증가)
    int new_size = *size + 1;       

    int* temp;
    temp = (int*)malloc(sizeof(int) * new_size);

    for (int i = 0; i < *size; i++) {
        temp[i] = (*arr)[i];
    }
    free(*arr);
    *arr = temp;
    *size = new_size;

}