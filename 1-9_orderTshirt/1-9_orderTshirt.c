#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// [1��][����] ����9) ��ü Ƽ���� �ֹ��ϱ�

int solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int) * 101);
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "XS") == 0) ++answer[0];
		else if (strcmp(shirt_size[i], "S") == 0) ++answer[1];
		else if (strcmp(shirt_size[i], "M") == 0) ++answer[2];
		else if (strcmp(shirt_size[i], "L") == 0) ++answer[3];
		else if (strcmp(shirt_size[i], "XL") == 0) ++answer[4];
		else ++answer[5];
	}
	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution �Լ��� ��ȯ ���� {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} �Դϴ�.\n");
}