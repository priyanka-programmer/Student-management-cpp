#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {

    Student s[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Find Topper\n";
        cout << "5. Class Average\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1) {

            cout << "\nEnter Roll Number: ";
            cin >> s[n].roll;

            cout << "Enter Name: ";
            cin >> s[n].name;

            cout << "Enter Marks: ";
            cin >> s[n].marks;

            n++;

            cout << "Student Added Successfully\n";
        }

        else if(choice == 2) {

            cout << "\n--- Student Records ---\n";

            for(int i=0;i<n;i++) {
                cout << "\nRoll: " << s[i].roll;
                cout << "\nName: " << s[i].name;
                cout << "\nMarks: " << s[i].marks << endl;
            }
        }

        else if(choice == 3) {

            int roll;
            cout << "Enter Roll Number to search: ";
            cin >> roll;

            bool found = false;

            for(int i=0;i<n;i++) {
                if(s[i].roll == roll) {
                    cout << "\nStudent Found\n";
                    cout << "Name: " << s[i].name << endl;
                    cout << "Marks: " << s[i].marks << endl;
                    found = true;
                }
            }

            if(!found)
            cout << "Student not found\n";
        }

        else if(choice == 4) {

            float max = -1;
            int index;

            for(int i=0;i<n;i++) {
                if(s[i].marks > max) {
                    max = s[i].marks;
                    index = i;
                }
            }

            cout << "\nTopper of Class\n";
            cout << "Name: " << s[index].name << endl;
            cout << "Marks: " << s[index].marks << endl;
        }

        else if(choice == 5) {

            float sum = 0;

            for(int i=0;i<n;i++)
            sum += s[i].marks;

            cout << "Class Average: " << sum/n << endl;
        }

    } while(choice != 6);

    return 0;
}