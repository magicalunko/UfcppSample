/*
off-by-one

�z��̒�����1�ԈႦ��B
�P�Ȃ�o�O�Ȃ�܂��������ǂ��A
�Z�L�����e�B�z�[���ɂȂ�������B
 */

#include<stdio.h>

#define N 16

int main()
{
	int a = -2;
	int x[N]; /* ���� N �̔z���錾���āE�E�E */
	int b = -1;
	int i;

	x[N] = 0;
	/* ��
	 * ������Ⴞ�߁B���� N �̔z���
	 * x[0] �` x[N-1] �܂ŁB
	 */

	 printf("%d, %d\n", a, b);
	 /* ��
	  * �ŋ߂̃R���p�C���͔z��̑O��Ɂg�]���h�����̂ŁA
	  * x[N] = 0 �ɂ���� a �� b ��������������Ȃ����Ƃ����邯�ǁB
	  * �R���p�C���ɂ���Ă� a �� b �̒l���������Ƃ�����B
	  */

	for (i = 0; i <= N; ++i)
	{
		x[i] = 0;
	}
	 /* ��
	  * for �̒��̏������� i <= N �ɂȂ��Ă���ƁA
	  * x[N] �̒l�������������Ă��܂��B
	  * �������� i < N �B
	  * 1�����Ⴂ�̃~�X�Ȃ̂ŁA�������Ă��Ă����܂ɂ�����Ⴄ�B
	  */

	return 0;
}