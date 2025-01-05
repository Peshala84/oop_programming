#include <iostream>
#include <string>
using namespace std;

class Doctor
{
public:
    int doctor_specialist;
    static int doctor_id;
    string Name;
    int Age;

    void getdata()
    {
        cin.ignore();
        cout << "Enter Doctor's name = ";
        getline(cin, Name);
        cout << "Enter Doctor's age = ";
        cin >> Age;
        cout << "Enter Doctor's doctor_specialist = ";
        cin >> doctor_specialist;
        doctor_id++;
    }
    void putdata()
    {
        cout << "Doctor's Name is " << Name << " .He/She is " << Age << " years old.His/Her doctor_specialist Number " << doctor_specialist << ".Doctor's doctor id " << doctor_id << "." << endl;
    }
};

int Doctor::doctor_id = 0;

class Patient
{
public:
    int admission_date;
    static int patient_id;
    string Name;
    int Age;

    void getdata()
    {
        cin.ignore();
        cout << "Enter patient's name = ";
        getline(cin, Name);
        cout << "Enter patient's age = ";
        cin >> Age;
        cout << "Enter patient's admission date = ";
        cin >> admission_date;
        patient_id++;
    }
    void putdata()
    {
        cout << "patient's Name is " << Name << " .He/She is " << Age << " years old.His/Her admission date " << admission_date << ".patient's patient id " << patient_id++ << "." << endl;
    }
};

int Patient::patient_id = 0;

int main()
{
    Doctor doctor1;
    doctor1.getdata();
    doctor1.putdata();

    Patient patient1;
    patient1.getdata();
    patient1.putdata();

    return 0;
}
