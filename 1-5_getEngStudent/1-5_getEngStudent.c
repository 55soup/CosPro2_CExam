#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1��][����] ����5) ���� ���� ����� �� ���ϱ�

int main() {
    int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
    int scores_len = 10;
    int ret = solution(scores, scores_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}