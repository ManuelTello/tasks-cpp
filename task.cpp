#include <iostream>
#include <string>
#include <vector>
//#include <chrono>

using namespace std;

struct DateStore 
{
    string created;
    string finish;
};

struct Task
{
    unsigned short id;
    string description;
    string name;
    short isalive;
    DateStore dates;
};

Task addNewTask(); 
void printMenu (), deleteTask(), updateDatabase();

vector <Task> database = {};
Task payload;
string user_input;

int main()
{   
    database.clear();

    while(true)
    {
        printMenu();

        if(user_input == "1")
        {

        }
        else if (user_input == "2")
        {

        }
        else if (user_input == "3")
        {

        }
        else if(user_input == "4")
        {
            cout << endl << "Exiting program ...";
            break;
        }

        database.push_back(payload);
    }

    return 0;
}


void printMenu()
{
    vector <string> opciones = 
    {
        "1- Add new task",
        "2- Remove task",
        "3- Update task",
        "4- Exit"
    };

    for(int i = 0; i < opciones.size(); i++)
    {
        cout << endl << opciones[i] << endl;
    }
    
    cout << endl << "-> ";
    cin >> user_input;  
}

Task addNewTask (short id_, string desc_, string name_, short isalive_, string created_, string finish_)
{
    Task new_task;
    new_task.id = id_;
    new_task.description = desc_;
    new_task.name = name_;
    new_task.isalive = isalive_;
    new_task.dates.created = created_;
    new_task.dates.finish = finish_;

    return new_task;
}

void deleteTask (short id_)
{
    for(short i = 0; i < database.size(); i++)
    {
        if(database[i].id == id_)
        {
            database.erase(i);
        }
    }
}

void updateDatabase ()
{

}