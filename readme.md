# Урок 7, Препроцессор и макросы
## Задание 1, Препроцессорные директивы
*HW-1-Preprocessor directives*

В этом задании вы используете некоторые препроцессорные директивы, которые вы изучили ранее.

В вашей программе выполните действия:

1. Объявите символьную константу MODE с целочисленным значением.
2. Проверьте, что константа определена, иначе программа не должна скомпилироваться и должна выдать сообщение о необходимости определить MODE.
3. В случае, если MODE имеет значение 0, выведите на консоль «Работаю в режиме тренировки».
4. Если MODE имеет значение 1, определите функцию add, которая должна складывать два числа. Выведите на консоль «Работаю в боевом режиме», попросите пользователя ввести два числа и выведите результат сложения с помощью функции add на консоль.
5. Если MODE имеет любое другое значение, выведите на консоль «Неизвестный режим. Завершение работы».

Обратите внимание: функция add должна быть определена только, если MODE имеет значение 1.

## Задание 2, Макрос SUB
*HW-2-Sub macross*

В этом задании вы создадите простой макрос.

Ваша задача — определить макрос SUB, который должен вычитать числа друг из друга и использоваться следующим образом:

```int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
```

Программа должна выводить результат, указанный ниже:

Пример работы программы

```
Консоль

1
2
-2
```

CPP-07
10.02.2023
[@J1n4ed](https://github.com/J1n4ed)