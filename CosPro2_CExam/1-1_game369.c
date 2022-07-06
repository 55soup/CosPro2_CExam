#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 369���� �ڼ��� ������ ���ض�

int solution(int number) {
    // �ڼ��� ������ ���ϴ� ����
    int count = 0;
    int current;
    // 3, 6, 9 ���ڰ� �ϳ��� ���� �ڼ����� 1����
    for (int i = 1; i <= number; i++) {
        current = i;
        while (current != 0) {
            if (current % 10 == 3 || current % 10 == 6 || current % 10 == 9) //���� �ϳ��� 3,6,9�� �ϳ��� ���Եȴٸ�
                ++count;
            current /= 10; // 1�� �ڸ��� ���ϱ�.
        }
        
    }
    return count;
    // �ڼ��� ���� ����
}

int main() {
    int number = 40;
    int ret = solution(number); //22

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
