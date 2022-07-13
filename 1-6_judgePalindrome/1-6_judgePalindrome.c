#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//[1��][����] ����6) �Ӹ���� �Ǵ��ϱ�

bool solution(char *str) {
    char* answer = (char*)malloc(sizeof(char) * 103);
    //. �� ���� ��s���� ���ڿ� ����
    int count = 0; // ���ڿ��� ���� ����
    int len = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '.') {
            answer[len++] = str[i];
            ++count;
        }
    }
    // ���ڿ� ��
    for (int i = 0; i < count; i++) {
        if (answer[i] != answer[count - i - 1])
            return false;
    }
    return true;
}

int main() {
    char sentence1[19] = "never odd or even.";
    bool ret1 = solution(sentence1);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret1 == true ? "true" : "false");

    char sentence2[19] = "palindrome";
    bool ret2 = solution(sentence2);

    printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret2 == true ? "true" : "false");
}