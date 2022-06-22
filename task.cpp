#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Task
{
    int id;
    string description;
    string name;
    int isalive = 0;
};

void addNewTask(int id_, string desc_, string name_); 
void printMenu (vector<string> menu); 
void deleteTask(int id_); 
void updateDatabase(int id_, string desc_, string name_);
void addMenu(vector<string> messages, string mapto[]);

vector <Task> database = {};
vector <string> opciones_menu = { "1- Add new task", "2- Remove task", "3- Update task", "4- List my tasks", "5- Exit" };
vector <string> new_menu = { "Nuevo id: ","Description: ","Task title: "};
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
                addNewTask(stoi(task_in[0]), task_in[1], task_in[2]);
                break;
            case 2:
                deleteTask(stoi(user_input));
                break;
            case 3:
                break;
            case 4:
                for(int i = 0; i < database.size(); i++)
                {
                    cout << endl << "-> Tasks:" << endl << " - " << database[i].id << endl << database[i].name << endl <<  database[i].description << endl << database[i].isalive << endl;
                }
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

void addNewTask (int id_, string desc_, string name_)
{
    Task new_task;
    new_task.id = id_;
    new_task.description = desc_;
    new_task.name = name_;

    database.push_back(new_task);
    cout << endl << "New task added to the database ..." << endl;
}



void deleteTask (int id_)
{
    cout << "Chose the task to delete: ";
    cin >> user_input;

    for(int i = 0; i < database.size(); i++)
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