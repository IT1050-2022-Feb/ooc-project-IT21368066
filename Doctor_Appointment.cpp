#pragma once
#include <iostream>
#include <cstring>
#include "Doctor_Appointment.h"
#include "Doctor.h"
#include "Appointment.h"
#include <iomanip>
using namespace std;

Doctor_Appointment::Doctor_Appointment()
{
	strcpy(doctorAppointmentID, "");
  doctor = new Doctor("", "", "", "", "", "");
}

Doctor_Appointment::Doctor_Appointment(const char pEmail[], const char pName[], const char pNIC[], const char pDoctorAppointmentID[], const char pDoctorID[], const char pSpecialization[], const char pQualification[], int pDay, int pMonth, int pYear, int pHour, int pMinute, const char pPaymentID[], double pAmount) : Appointment (pDay, pMonth, pYear, pHour, pMinute, pPaymentID, pAmount)
{
	strcpy(doctorAppointmentID, pDoctorAppointmentID);
  
  doctor = new Doctor(pEmail, pName, pNIC, pDoctorID, pSpecialization, pQualification);
	
}

void Doctor_Appointment::displayDetails()
{ 
	cout << "Doctor Appointment ID : " << doctorAppointmentID << endl
       << "Date : " << setfill('0') << setw(2) << day << "/" 
                    << setfill('0') << setw(2) << month << "/"
                    << setfill('0') << setw(4) << year << endl
		   << "Time : " << setfill('0') << setw(2) << hour << ":"
                    << setfill('0') << setw(2) << minute << endl
       << "Doctor Details" << endl;
  doctor->displayDetails();
  cout << endl << endl;
}
