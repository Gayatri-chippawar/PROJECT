#include <iostream>
using namespace std;

void viewTask(string task[], int task_count)
{

    cout << "**********************************************\n\n" << endl;
    cout << "---------TASK TO DO ---------\n" << endl;
    for (int i = 0; i < task_count; i++)
    {
        cout << "Task " << i + 1 << " : " << task[i] << endl;
    }

    cout << "\n\n**********************************************" << endl;
}

int main()
{   system("color fc");
    string task[10] = {""};
    int task_count = 0;

    int option = -1;
    while (option != 0)
    {
        cout << "_________T O  D O  L I S T_________" << endl;
        cout << "1.Add a task" << endl;
        cout << "2.View a task" << endl;
        cout << "3.Delete a task" << endl;
        cout << "0.Terminate the program" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
        system("cls");
        {
            if (task_count > 9)
            {
                cout << "TASK LIST IS FULL!!";
            }
            else
            {
                cout << "Enter your task : ";
                cin.ignore();
                getline(cin, task[task_count]);
                task_count++;
            }
        }
        break;
        case 2:
        system("cls");
            viewTask(task, task_count);
            break;

        case 3:
            int del_task;
            cout<<"enter to delete the task : ";
            cin>>del_task;
            if (del_task < 0 || del_task > 9)
            {
                cout << "Invalid input" << endl;
                break;
            }
                
                    for (int i = del_task; i < task_count; i++)
                    {
                        task[i] = task[i + 1];
                    }
                  task_count--;
                  viewTask(task,task_count);
            
            

        default:
            break;
        }
    }

    return 0;
}