#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// [1��][����] ����9) ��ü Ƽ���� �ֹ��ϱ�

int solution(char* shirt_size, int shirt_size_len) {

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