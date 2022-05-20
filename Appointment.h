#pragma once
#include <iostream>
#include "Payment.h"
#include "Patient.h"
using namespace std;

class Appointment
{
protected:
    int day;
    int month;
    int year;
    int hour;
    int minute;

    Payment * pay;

public:
    Appointment();
    Appointment(int pDay, int pMonth, int pYear, int pHour, int pMinute, const char pPaymentID[], double pAmount);
    void setDate(int pDay, int pMonth, int pYear);
    void setTime(int pHour, int pMinute);
    int getDate();
    int getTime();
    void displayDetails();
};


