#pragma once
#include <iostream>
#include "Appointment.h"
#include "Doctor.h"
using namespace std;

class Doctor_Appointment : public Appointment
{
protected:
    char doctorAppointmentID[8];
    Doctor * doctor;

public:
    Doctor_Appointment();
    Doctor_Appointment(const char pEmail[], const char pName[], const char pNIC[], const char pDoctorAppointmentID[],const char pDoctorID[], const char pSpecialization[], const char pQualification[], int pDay, int pMonth, int pYear, int pHour, int pMinute, const char pPaymentID[], double pAmount);
    void setDoctorAppointmentID(char pDoctorAppointmentID);
    char getDoctorAppointmentID();
    void displayDetails();

};


