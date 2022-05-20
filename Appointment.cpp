#include <iostream>
#include "Appointment.h"
#include "Payment.h"
#include <cstring>
#include <iomanip>
using namespace std;

Appointment::Appointment()
{
  day = 0;
  month = 0;
  year = 0;
  hour = 0;
  minute = 0;

  pay = new Payment("", 0);
}

Appointment::Appointment(int pDay, int pMonth, int pYear, int pHour, int pMinute, const char pPaymentID[], double pAmount)
{
	day = pDay;
  month = pMonth;
  year = pYear;
  hour = pHour;
  minute = pMinute;

  pay = new Payment(pPaymentID, pAmount);
}

void Appointment::displayDetails()
{
	cout << "Date : " << setfill('0') << setw(2) << day << "/" 
                    << setfill('0') << setw(2) << month << "/"
                    << setfill('0') << setw(4) << year << endl
		   << "Time : " << setfill('0') << setw(2) << hour << ":"
                    << setfill('0') << setw(2) << minute << endl << endl
       << "Payment Details" << endl;
       pay->displayDetails();
  cout << endl << endl;
}
