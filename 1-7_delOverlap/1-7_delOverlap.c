#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1��][����] ����7) �ߺ����� �����ϱ�

char* solution(char* ch) {
    char* answer = (char*)malloc(sizeof(char) * 103);
    int len = 0;
    for (int i = 0; i < strlen(ch); i++) {
        if (ch[i] != ch[i + 1])
            answer[len++] = ch[i];
    }
    answer[len] = '\0';
    return answer;
}
int main() {
    char* characters = "senteeeencccccceeee";
    char* ret = solution(characters);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret);
}