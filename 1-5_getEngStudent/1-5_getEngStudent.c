#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1��][����] ����5) ���� ���� ����� �� ���ϱ�
/*�ʱ� ���� ���Ǵ� ���ͽ��迡�� 650�� �̻� 800�� �̸��� ������ ����� �л�����
����������� �ϰ� �ֽ��ϴ�.*/
int solution(int scores[], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        if (scores[i] >= 650 && scores[i] < 800) {
            ++answer;
        }
    }
    return answer;
}

int main() {
    int scores[10] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
    int scores_len = 10;
    int ret = solution(scores, scores_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}