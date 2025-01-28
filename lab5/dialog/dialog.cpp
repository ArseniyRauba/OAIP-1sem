#include <iostream>
int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "RUS");
	int k;
	puts("Вы любите смотреть фильмы (1-да,2-нет)");
	cin >> k;
	switch (k)
	{
	case 1:
	{
		puts("Ваш любимый жанр (1-Боевик,2-Комедия,3-Ужасы)");
		cin >> k;
		switch (k)
		{
		case 1:puts("Стельба стрельбой, а обед по расписанию"); break;
		case 2:puts("Смех продлевает жизнь, комедии любят все"); break;
		case 3:puts("Такое на ночь лучше не смотреть"); break;
		}
		break;
	}
	case 2:
		puts("Вы многое теряете"); break;
	default:puts("Некорректный выриант"); break;
	}
}