#include <stdio.h>

// �Լ� : �ڵ带 �����ϴ� ���(C���� �־����� �������δ� �� �� ���� ����� �����ڰ� ���� ���� ����Ѵ�)
// ��� ������ ����, �Ұ�ȣ�� �پ�����

// Sum�̶�� �̸��� �Լ�
void Sum1(int var1,int var2, int var3) {
	printf("%d\n", var1 + var2 + var3);
}

// Sub : �� ���� ����. ��ſ������� ������ �������� �ٲ㼭 ����
void Sub1(int var4, int var5) {
	if (var4 > 0) {
		var4 = var4 * 1;
	}
	else {
		var4 = var4 * -1;
	}
	if (var5 > 0) {
		var5 = var5 * 1;
	}
	else {
		var5 = var5 * -1;
	}
    printf("%d\n", var4 - var5);
}
// Div : ������ ����� ����� 0���� �������ϸ� 0�� ����ϰ� �����
void Div1(float var6, float var7) {
	if (var7 == 0) {
		printf("0���� ������ �����ϴ�");
	}
	else {
		printf("%f\n", (float)var6 / var7);
	}
}


// main�̶�� �̸��� �Լ�
void main23() {
	Sum1(1, 2, 3);
	Sum1(10, 20, 30);
	Sum1(100, 200, 300);

	Sub1(-10, -5);

	Div1(8564, 0);
}         