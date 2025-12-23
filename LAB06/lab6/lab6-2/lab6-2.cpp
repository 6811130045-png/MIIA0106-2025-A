#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name, string id, double total, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << total << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double total, char& grade)
{
    if (total >= 90) grade = 'A';
    else if (total >= 80) grade = 'B';
    else if (total >= 70) grade = 'C';
    else if (total >= 60) grade = 'D';
    else grade = 'F';
}

int main() {
    int N; // students
    cout << "Enter number of students: ";
    cin >> N;
    cin.ignore();

    int M;
    cout << "Enter number of subject: ";
    cin >> M;
    cin.ignore();

    string* name = new string[N];
    string* id = new string[N];
    double* score = new double[N];
    double* total = new double[N];
    char* grade = new char[N];
    double* subject = new double[M];

    for (int i = 0; i < N; i++) {
        cout << "Enter Student " << i + 1 << " name: ";
        getline(cin >> ws, name[i]);

        cout << "Enter Student " << i + 1 << " id: ";
        cin >> id[i];
        
        total[i] = 0;
        double sum = 0;
        for (int J = 0; J < M; J++)
        {
                cout << "Enter Student score " << J + 1 << ": ";
                cin >> subject[M];
                sum += subject[M];
        }
        total[i] = sum / M;
        calculateGrade(total[i], grade[i]);
    }

    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << "Student " << i + 1 << "\n";
        displayStudentInfo(name[i], id[i], total[i], grade[i]);
        cout << endl;
    }
    return 0;
}