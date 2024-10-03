#include <iostream>
using namespace std;

// Entity 1: Patient
class Patient {
public:
    string name;
    int patientID;
    string ailment;

    void inputPatient() {
        cout << "Enter patient name: ";
        cin >> name;
        cout << "Enter patient ID: ";
        cin >> patientID;
        cout << "Enter ailment: ";
        cin >> ailment;
    }

    void viewMedicalHistory() {
        cout << name << "'s medical history is being viewed." << endl;
    }

    void receiveTreatment() {
        cout << name << " is receiving treatment for " << ailment << "." << endl;
    }
};

// Entity 2: Doctor
class Doctor {
public:
    string name;
    string specialization;
    int doctorID;

    void inputDoctor() {
        cout << "Enter doctor name: ";
        cin >> name;
        cout << "Enter specialization: ";
        cin >> specialization;
        cout << "Enter doctor ID: ";
        cin >> doctorID;
    }

    void diagnosePatient(Patient& patient) {
        cout << name << " is diagnosing " << patient.name << "'s ailment." << endl;
    }

    void prescribeMedication(Patient& patient) {
        cout << name << " has prescribed medication for " << patient.name << "." << endl;
    }
};

// Entity 3: Appointment
class Appointment {
public:
    string date;
    string time;
    string doctorName;

    void scheduleAppointment(Patient& patient, Doctor& doctor) {
        cout << "Scheduling appointment for " << patient.name << " with Dr. " << doctor.name << " on " << date << " at " << time << "." << endl;
        doctorName = doctor.name;
    }

    void inputAppointmentDetails() {
        cout << "Enter appointment date: ";
        cin >> date;
        cout << "Enter appointment time: ";
        cin >> time;
    }
};

// Main system functionality demonstration
int main() {
    // Creating entities
    Patient patient1;
    Doctor doctor1;
    Appointment appointment1;

    // Input values
    cout << "Enter patient details:\n";
    patient1.inputPatient();

    cout << "\nEnter doctor details:\n";
    doctor1.inputDoctor();

    cout << "\nEnter appointment details:\n";
    appointment1.inputAppointmentDetails();

    // Demonstrating behaviors
    cout << "\n\n--------------------------------------------" << endl;
    cout << "Patient Info : " << endl;
    patient1.viewMedicalHistory();
    patient1.receiveTreatment();

    cout << "--------------------------------------------" << endl;
    cout << "Doctor Info : " << endl;
    doctor1.diagnosePatient(patient1);
    doctor1.prescribeMedication(patient1);

    cout << "--------------------------------------------" << endl;
    cout << "Appointment Info : " << endl;
    appointment1.scheduleAppointment(patient1, doctor1);

    return 0;
}

