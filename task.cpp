#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Task
{
    int id;
    string description;
    string name;
    bool isalive;
};

Task addNewTask(int id_, string desc_, string name_, bool isalive_); 
void printMenu (vector<string> menu); 
void deleteTask(short id_); 
void updateDatabase(int id_, string desc_, string name_, bool isalive_);
void addMenu(vector<string> messages, string mapto[]);

Task payload;
vector <Task> database = {};
vector <string> opciones_menu = { "1- Add new task", "2- Remove task", "3- Update task", "4- List my tasks", "5- Exit" };
vector <string> new_menu = { "Nuevo id: ","Description: ","Task title: ","Task state: " };
string task_in[4];
string user_input;
const bool ALIVE = true;

int main()
{   
    database.clear();

    while(ALIVE)
    {
        printMenu(opciones_menu);

        switch(stoi(user_input))
        {
            case 1:
                addMenu(new_menu, task_in);
                addNewTask(stoi(task_in[0]), task_in[1], task_in[2], stoi(task_in[3]));
                cout << endl << "New task added to the database ..." << endl;
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                for()
                break;
            case 5:
                cout << endl << "Exiting program ...";
                return 0;
            default:
                cout << "Input a valid option ...";
                continue;
        }
    }

    return 0;
}


void printMenu(vector<string> menu)
{
    for(int i = 0; i < menu.size(); i++)
    {
        cout << endl << menu[i] << endl;
    }
    cout << endl << "-> ";
    cin >> user_input;  
}

void addMenu (vector<string> messages, string mapto[])
{
    for(int i = 0; i < messages.size(); i++)
    {
        cout << messages[i];
        cin >> mapto[i];
        cout << endl;
    }
}

Task addNewTask (int id_, string desc_, string name_, bool isalive_)
{
    Task new_task;
    new_task.id = id_;
    new_task.description = desc_;
    new_task.name = name_;
    new_task.isalive = isalive_;

    return new_task;
}



void deleteTask (int id_)
{
    for(short i = 0; i < database.size(); i++)
    {
        if(database[i].id == id_)
        {
            database.erase(database.begin()+i-1);
        }
    }
}

void updateDatabase (short id_, string desc_, string name_, bool isalive_)
{

}