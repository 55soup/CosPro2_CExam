#include <stdio.h>
// [1��][��ĭ] ����3) ���� ��¥�� �� ��¥�� ���� ��¥���ϱ�

int func_a(int month, int day) {
	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int total = 0;
	for (int i = 0; i < month - 1; i++) {
		total += months[i];
	}
	total += day;
	return total;
}

int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_days = func_a(start_month, start_day);
	int end_days = func_a(end_month, end_day);
	return end_days - start_days;
}

int main() {
	int start_month = 1;
	int start_day = 2;
	int end_month = 2;
	int end_day = 2;
	int ret = solution(start_month, start_day, end_month, end_day);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}