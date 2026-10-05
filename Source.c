#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int Z1() {
    setlocale(LC_ALL, "Russian");

    char c = '!'; //1 задача
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("--- Задание 2: Вывод исходных значений ---\n");
    printf("char c = %c\n", c);
    printf("int i = %d\n", i);
    printf("float f = %f\n", f);
    printf("double d = %g\n", d);
    printf("\n");

    printf("--- Задание 3: Ввод значений ---\n");
    printf("Введите значение для char c: ");
    scanf(" %c", &c);
    printf("Введите значение для int i: ");
    scanf("%d", &i);
    printf("Введите значение для float f: ");
    scanf("%f", &f);
    printf("Введите значение для double d: ");
    scanf("%lf", &d);
    printf("\nВы ввели:\n");
    printf("c: %c, i: %d, f: %f, d: %g\n\n", c, i, f, d); 

    printf("--- Задача 1а ---\n");
    int intPart = (int)f;
    float fracPart = f - intPart;
    printf("Число: %f\n", f);
    printf("Целая часть: %d\n", intPart);
    printf("Дробная часть: %f\n", fracPart);
    printf("\n");

    printf("--- Задача 1б ---\n");
    printf("Символ: %c\n", c);
    printf("Десятичный код: %d\n", c);
    printf("Шестнадцатеричный код: %x\n", c);
    printf("\n");

    printf("--- Задача 1в ---\n");
    double result = 1.0 / i;
    printf("1 / %d = %f\n", i, result);

    return 0;
}

int Z2() {
    setlocale(LC_ALL, "Russian");

    printf("--- Задание 2: Неявное преобразование типов ---\n\n");

    // Инициализируем целые переменные
    int a = 11;
    int b = 3;

    // Объявляем переменные разных типов
    int x;
    float y;
    double z;

    // Присваиваем им значения, равные a/b
    // Сначала выполняется деление целых чисел (11 / 3 = 3), 
    // только потом результат преобразуется в тип переменной.
    x = a / b;
    y = a / b;
    z = a / b;

    // Выводим полученные значения
    printf("--- Результаты неявного преобразования ---\n");
    printf("x (int)    = %d\n", x);
    printf("y (float)  = %f\n", y);
    printf("z (double) = %lf\n\n", z);
    printf("--- Пояснение ---\n");
    printf("Так как 'a' и 'b' имеют тип int, операция 'a / b' выполняет целочисленное деление.\n");
    printf("Дробная часть отбрасывается (11 / 3 = 3, а не 3.666...).\n");
    printf("Поэтому во все переменные (x, y, z) записывается просто число 3.\n\n");

    // Явное преобразование типов (без переменных x, y, z)
    printf("--- Результаты явного преобразования (type)a/b ---\n");

    // Приводим 'a' к типу float. Теперь деление будет вещественным.
    printf("(float)a / b  = %f\n", (float)a / b);

    // Приводим 'a' к типу double.
    printf("(double)a / b = %lf\n", (double)a / b);
    printf("\n");

    printf("--- Эксперимент со скобками ---\n");
    // Если написать (float)(a / b), то сначала выполнится целочисленное деление (11/3=3), а потом число 3 просто преобразуется в 3.000000
    printf("(float)(a / b) = %f  <-- Скобки меняют порядок действий!\n", (float)(a / b));
    printf("(float)a / b   = %f  <-- Правильный способ получить дробь\n", (float)a / b);

    return 0;
}

int Z3() {
    setlocale(LC_ALL, "Russian");

    int n;
    printf("Введите целое трехзначное число N: ");
    scanf("%d", &n);
    printf("Последняя цифра: %d, первая: %d, сумма цифр: %d\n",
        n % 10,
        n / 100,
        (n / 100) + ((n % 100) / 10) + (n % 10) 
    );
    printf("Число наоборот: %d\n",
        (n % 10) * 100 + ((n % 100) / 10) * 10 + (n / 100)
    );

    return 0;
}

int DZ_LB_4() {
    setlocale(LC_ALL, "Russian");
    printf("Номер варианта:%d\n\n", 22 % 20 + 1);
}

int main() {
    DZ_LB_4();

    int A = 6;
    int B = 7;

    printf("    Дележка пиццы    \n\n");
    printf("Уровень голода Вани (A) = %d\n", A);
    printf("Уровень голода Пети (B) = %d\n\n", B);

    printf("      Результат    \n\n");
    printf("Ответ (1 - делить пиццу на 4 части, 0 - делить пиццу на 6 частей): %d\n",
        (A % 2 == 0) + (B % 2 == 0) == 1);

    return 0;
}
