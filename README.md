# Контрольная работа 1

[![Build Status](https://travis-ci.org/llxff/qsort.svg?branch=master)](https://travis-ci.org/llxff/qsort)

Разработать программу, реализующую улучшенный метод сортировки массивов - метод быстрой сортировки.

### Описание задачи

Разработать программу, реализующую улучшенный метод сортировки массивов - метод быстрой сортировки.

Порядок выполнения:

1. сгенерировать исходный массив случайных целых чисел с заданным числом элементов (не более 10 000)
2. вывод исходного массива на экран
3. исходный массив должен обрабатываться с подсчетом и выводом фактического числа выполненных сравнений и пересылок.

Все действия оформляются как подпрограммы.

Программная реализация выполняется в среде Windows в виде консольного или оконного приложения. Язык программирования Delphi или C/C++.

### Реализация

Я выполнил задачу с использованием языка C и компилятора gcc.

### Список методов

`void quick_sort(int array[], int length)` - сортировка массива целых чисел.

### Запуск

Мной так же реализовано 3 задачи:

`make` - сборка исполняемого файла в `bin/main`.

`make run` - сборка и запуск исполняемого файла.

`make tests` - запуск юнит тестов.

### Демонстрация работы программы

[![asciicast](https://asciinema.org/a/bre7v3qkzkzuj0u6f8toioxdo.png)](http://asciinema.org/a/bre7v3qkzkzuj0u6f8toioxdo)

### Демонстрация запуска тестов

[![asciicast](https://asciinema.org/a/a2b89lb2utzffpch05a9qct9y.png)]https://asciinema.org/a/a2b89lb2utzffpch05a9qct9y)
