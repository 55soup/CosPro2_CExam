#include <stdio.h>
//[1��][��ĭ] ����2) �迭�� ���� ������
//�迭�� ������ �������

int* solution(int arr[], int arr_len) {
    int left = 0;
    int right = arr_len-1;
    int temp;
    while (left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        ++left;
        --right;
    }
    return arr;

}

int main() {
    int arr[4] = { 1, 4, 2, 3 };
    int arr_len = 4;
    int* ret = solution(arr, arr_len);

    printf("solution �Լ��� ��ȯ ���� {");
    for (int i = 0; i < 4; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("} �Դϴ�.\n");
}