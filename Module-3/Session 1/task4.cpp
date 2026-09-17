#include <iostream>
using namespace std;

class Task
{
public:
    char title[50];
    bool isDone;

    void setTask(const char t[])
    {
        int i;
        for(i = 0; i < 50; i++)
        {
            title[i] = t[i];
        }
        isDone = false;
    }
    void markDone()
    {
        isDone = true;
    }
    void display()
    {
        cout << title << " - ";
        if (isDone)
            cout << "DONE";
        else
            cout << "NOT DONE";

        cout << endl;
    }
};

class TaskList
{
public:
    Task tasks[10];
    int count;

    TaskList()
    {
        count = 0;
    }

    void addTask(const char title[])
    {
        tasks[count].setTask(title);
        count++;
    }

    void markTaskDone(int index)
    {
        tasks[index].markDone();
    }
    void showTasks()
    {
        for (int i = 0; i < count; i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};
main()
{
    TaskList list;

    list.addTask("Study");
    list.addTask("Assignment");
    list.addTask("Coding");

    list.markTaskDone(1);

    list.showTasks();
}
