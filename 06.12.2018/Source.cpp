#include<stdio.h>
#include<iostream>
#include<locale.h>



void igrushka()
{
	int igr;
	printf("Какая у вас любимая игрушка?\n1.LEGO\n2.Пластилин\n3.Старенький, но любимый мишка\n");
	scanf_s("%d", &igr);
	switch (igr)
	{
	case 1:printf("Переход на PYTHON\n"); break;
	case 2:printf("Переход на RUBY\n"); break;
	case 3:printf("Переход на PHP\n"); break;
	}
}
void micro()
{
	int micr;
	printf("Что скажете о Microsoft?1.Люблю его 2.Неплохо 3.Фуу");
	scanf_s("%d", &micr);
	switch (micr)
	{
	case 1:printf("Переход на С#"); break;
	case 2:
	case 3:printf("Переход на JAVA"); break;

	}
}
void hotite()
{
	int ht;
	printf("Хотите попробовать что-то новое, но не очень трудоёмкое?\n1.Да\n2.Нет\n3.Не знаю");
	scanf_s("%d", &ht);
	switch (ht)
	{
	case 1:printf("Переход на JAVASCRIPT\n"); break;
	case 3:
	case 2:igrushka(); break;
	}
}
void web()
{
	int webdanet;
	printf("Ваш сервис будет работать в реальном времени, как twitter?\n1.Da\n2.Net\n");
	scanf_s("%d", &webdanet);
	switch (webdanet)
	{
	case 1:printf("Переход на JAVASCRIPT\n"); break;
	case 2:hotite(); break;
	}
}
void rabotana()
{
	int rabotana;
	printf("1.Корпорация или 2. Стартап?");
	scanf_s("%d", &rabotana);
	switch (rabotana) {
	case 1:micro(); break;
	case 2:hotite(); break;
	}
}
void web2()
{
	int web2;
	printf("1.Фронтенд или 2.Бэкенд?");
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
	printf("Какая OS?1.IOS 2.Android");
	scanf_s("%d", &OS);
	if (OS == 1)
		printf("Переход на OBJECTIVE-C");
	else
		printf("Переход на JAVA");
}
void igri()
{
	printf("Переход на С++");
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
	printf("Какая платформа/сфера?\n1.Веб.\n2.Корп софт\n3.Мобильная\n4.3D/игры\n");
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
	printf("Какая коробка передач?1.Автомат 2.Ручная");
	scanf_s("%d", &korob);
	if (korob == 1)
		printf("JAVA");
	else printf("C");
}
void ideanet()
{
	int sposob;
	printf("Вам нравится учиться каким способом? 1.Простой 2.Лучший 3.Трудный 4.Очень сложный(но птом легко)");
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
	printf("Уже есть идея на миллион?1.Да 2.Нет");
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
	printf("Какая платформа/сфера?\n1.Веб.\n2.Корп софт\n3.Мобильная\n4.3D/игры\n5.IT company");
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
	printf("1.Найти работу 2.Есть идея для стартапа");
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
	printf("Зачем вы хотите изучить программирование?\n1.Для детей\n2.Я не знаю выберите за меня\n3.Заработать\n4.Интересно\n5.Поразвлечься\n6.Саморазвитие\n");
	scanf_s("%d", &zachem);
	switch (zachem)
	{
	case 1: printf("Начните со Scratch, затем...\n"); printf("Переход в Python\n"); break;
	case 2: printf("Переход в Python\n"); break;
	case 6:
	case 4:
	case 5:
		idea(); break;
	case 3:zarab(); break;
	}
	int flag;
	printf("Хотите вернуться к началу?1.Да 2.Нет");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}