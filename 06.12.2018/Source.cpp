#include<stdio.h>
#include<iostream>
#include<locale.h>



void igrushka()
{
	int igr;
	printf("����� � ��� ������� �������?\n1.LEGO\n2.���������\n3.����������, �� ������� �����\n");
	scanf_s("%d", &igr);
	switch (igr)
	{
	case 1:printf("������� �� PYTHON\n"); break;
	case 2:printf("������� �� RUBY\n"); break;
	case 3:printf("������� �� PHP\n"); break;
	}
}
void micro()
{
	int micr;
	printf("��� ������� � Microsoft?1.����� ��� 2.������� 3.���");
	scanf_s("%d", &micr);
	switch (micr)
	{
	case 1:printf("������� �� �#"); break;
	case 2:
	case 3:printf("������� �� JAVA"); break;

	}
}
void hotite()
{
	int ht;
	printf("������ ����������� ���-�� �����, �� �� ����� ���������?\n1.��\n2.���\n3.�� ����");
	scanf_s("%d", &ht);
	switch (ht)
	{
	case 1:printf("������� �� JAVASCRIPT\n"); break;
	case 3:
	case 2:igrushka(); break;
	}
}
void web()
{
	int webdanet;
	printf("��� ������ ����� �������� � �������� �������, ��� twitter?\n1.Da\n2.Net\n");
	scanf_s("%d", &webdanet);
	switch (webdanet)
	{
	case 1:printf("������� �� JAVASCRIPT\n"); break;
	case 2:hotite(); break;
	}
}
void rabotana()
{
	int rabotana;
	printf("1.���������� ��� 2. �������?");
	scanf_s("%d", &rabotana);
	switch (rabotana) {
	case 1:micro(); break;
	case 2:hotite(); break;
	}
}
void web2()
{
	int web2;
	printf("1.�������� ��� 2.������?");
	scanf_s("%d", &web2);
	switch (web2)
	{
	case 1: printf("JAVASCRIPT");
	case 2:rabotana(); break;
	}
}
void mobil()
{
	int OS;
	printf("����� OS?1.IOS 2.Android");
	scanf_s("%d", &OS);
	if (OS == 1)
		printf("������� �� OBJECTIVE-C");
	else
		printf("������� �� JAVA");
}
void igri()
{
	printf("������� �� �++");
}
void IT()
{
	int it;
	printf("1.Facebook 2.Google 3.Microsoft 4.Apple");
	scanf_s("%d", &it);
	switch (it)
	{
	case 1:
	case 2:printf("PYTHON");
	case 3:	printf("C#");
	case 4:printf("OBJECTIVE-C");
	}
}
void ideadda()
{
	int platforma;
	printf("����� ���������/�����?\n1.���.\n2.���� ����\n3.���������\n4.3D/����\n");
	scanf_s("%d", &platforma);
	switch (platforma) {
	case 1:web(); break;
		case 2:micro(); break;
		case 3:mobil(); break;
		case 4:igri(); break;
	}
}
void korobka()
{
	int korob;
	printf("����� ������� �������?1.������� 2.������");
	scanf_s("%d", &korob);
	if (korob == 1)
		printf("JAVA");
	else printf("C");
}
void ideanet()
{
	int sposob;
	printf("��� �������� ������� ����� ��������? 1.������� 2.������ 3.������� 4.����� �������(�� ���� �����)");
	scanf_s("%d", &sposob);
	switch (sposob) {
	case 1:
	case 2:printf("PYTHON"); break;
	case 3:korobka(); break;
	case 4:printf("C++");
	}
}
void idea()
{
	int idea;
	printf("��� ���� ���� �� �������?1.�� 2.���");
	scanf_s("%d", &idea);
	switch (idea)
	{
	case 1:ideadda(); break;
	case 2:ideanet(); break;

	default:
		break;
	}
}
void rabota()
{
	int platforma2;
	printf("����� ���������/�����?\n1.���.\n2.���� ����\n3.���������\n4.3D/����\n5.IT company");
	scanf_s("%d", &platforma2);
	switch (platforma2) {
	case 1:web2(); break;
	case 2:micro(); break;
	case 3:mobil(); break;
	case 4:igri(); break;
	case 5:IT(); break;
	}
}
void zarab()
{
	int zar;
	printf("1.����� ������ 2.���� ���� ��� ��������");
	scanf_s("%d", &zar);
	switch (zar)
	{
	case 1:rabota(); break;
	case 2:ideadda(); break;
	}
}
void main()
{
	setlocale(LC_ALL, "");
	start:
	int zachem;
	printf("����� �� ������ ������� ����������������?\n1.��� �����\n2.� �� ���� �������� �� ����\n3.����������\n4.���������\n5.������������\n6.������������\n");
	scanf_s("%d", &zachem);
	switch (zachem)
	{
	case 1: printf("������� �� Scratch, �����...\n"); printf("������� � Python\n"); break;
	case 2: printf("������� � Python\n"); break;
	case 6:
	case 4:
	case 5:
		idea(); break;
	case 3:zarab(); break;
	}
	int flag;
	printf("������ ��������� � ������?1.�� 2.���");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}