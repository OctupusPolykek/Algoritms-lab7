#include <iostream>
#include <stack>
#include <queue>
#include <ctime>

using namespace std;

void taskEase18()
{
    cout << "\nTask 18 (ease)\n" << endl;
    /*Создать стек из целых чисел. Вычислить среднее арифметическое чётных
    значений элементов стека. Организовать просмотр данных стека.*/

    stack <int> steck;

    for (int i = 0; i < 6; i++)
        steck.push(rand() % 10 + 1);

    int i, t, x, y;
    i = 0;

    t = 0;
    x = steck.size();
    y = 0;

    for (int i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            t += steck.top();
            y++;
        }

        cout << steck.top() << " ";
        steck.pop();
    }
    t = t / y;
    cout << endl;
    cout << "El: " << t;
}

void taskMedium18()
{
    cout << "\n\nTask 18 (medium)\n" << endl;
    /*Создать стек строковых значений, для реализации используя односвызные
    списки. Реализовать операции добавления (push) и удаления (pop)
    элемента из стека. Добавьте в стек строки "Students", "of", "the",
    "groud", "TE", "3" и распечатайте  содержимое стека. Удалите один
    элемент из стека, и распечатайте содержимое стека еще раз. * Напечатайте
    все сроки, которые состоят  из двух символов из стека.*/

    queue <string> steck;
    queue <string> steck2;

    steck.push("Student");
    steck.push("of");
    steck.push("the");
    steck.push("group");
    steck.push("TE");
    steck.push("3");

    cout << "Элементы стека:" << endl;
    while (!steck.empty()) {
        cout << steck.front() << " ";
        steck.pop();
    }

    steck.push("Student");
    steck.push("of");
    steck.push("the");
    steck.push("group");
    steck.push("TE");
    steck.push("3");
    steck.pop();
    steck2 = steck;

    cout << "\nЭлементы стека после удаление элемента:" << endl;
    while (!steck.empty()) {
        cout << steck.front() << " ";
        steck.pop();
    }

    cout << "\nСторки которые состоя из 2 элементов:" << endl;
    while (!steck2.empty()) {
        if (steck2.front().length() == 2)
            cout << steck2.front() << " ";
        steck2.pop();
    }
}

void taskHard8()
{
    cout << "\n\nTask 8 (hard)" << endl;
    /*Даны указатели P1 и P2 на начало и конец непустой очереди. Извлекать
    из очереди элементы, пока значение начального элемента очереди
    не станет четным, и выводить значения извлеченных элементов (если
    очередь не содержит элементов с четными значениями, то извлечь все
    ее элементы). Вывести также новые адреса начала и конца очереди
    (для пустой очереди дважды вывести nil). После извлечения элементов
    из очереди освобождать память, которую они занимали.*/

    queue <int> steck;

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        steck.push(rand() % 10 + 1);

    int* q1 = &steck.front();
    int* q2 = &steck.back();

    int y, x = 0;

    cout << "\nАдрес начала очереди памяти: " << q1 << endl;
    cout << "Адрес конец очереди памяти: " << q2 << endl;

    while (!steck.empty()) {
        y = steck.front();
        if (y % 2 == 0)
            break;

        else {
            cout << steck.front() << " ";
            x++;
        }
        steck.pop();
    }

    if (x == 0)
        cout << "Первый элемент четный." << endl;
    else
        cout << endl;

    q1 = &steck.front();
    q2 = &steck.back();

    cout << "\nНовый адрес начала очереди памяти: " << q1 << endl;
    cout << "Новый адрес конец очереди памяти: " << q2 << endl;

    while (!steck.empty()) {
        steck.pop();
    }
}

int main()
{
    setlocale(0, "ru");

    taskEase18();
    taskMedium18();
    taskHard8();
}