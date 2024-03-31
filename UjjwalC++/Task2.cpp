#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string name;
    bool completed;
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& taskName) {
        tasks.push_back({taskName, false});
        cout << "Task added successfully." << endl;
    }

    void markCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "Task marked as completed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void displayTasks() {
        if (tasks.empty()) {
            cout << "No tasks." << endl;
        } else {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << (tasks[i].completed ? "[X] " : "[ ] ") << tasks[i].name << endl;
            }
        }
    }
};

int main() {
    TodoList todoList;
    int choice;

    while (true) {
        cout << "\n==== Todo List Menu ====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Mark Task as Completed" << endl;
        cout << "3. View Tasks" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    string taskName;
                    cout << "Enter task: ";
                    cin.ignore(); // To clear the newline character from the input buffer
                    getline(cin, taskName);
                    todoList.addTask(taskName);
                    break;
                }
            case 2:
                {
                    int index;
                    cout << "Enter task index to mark as completed: ";
                    cin >> index;
                    todoList.markCompleted(index - 1); // Adjust index for 0-based indexing
                    break;
                }
            case 3:
                todoList.displayTasks();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
