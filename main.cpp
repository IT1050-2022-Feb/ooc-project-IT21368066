#include <iostream>
#include "System_User.h"
#include "Patient.h"
#include "Doctor.h"
#include "Receptionist.h"
#include "Appointment.h"
#include "Lab_Appointment.h"
#include "Doctor_Appointment.h"
#include "Lab.h"
#include "Feedback.h"
#include "Medical_Report.h"
#include "Payment.h"

int main()
{

  Patient p("peter@gmail.com","Peter","200525252","P0001", 178, 67);
  p.displayDetails();
  
  Doctor d("john@gmail.com","John","20016535552","D0001","Cardiovascular","MBBS");
  d.displayDetails();

  Receptionist r("sarah@gmail.com","Sarah","20024555552","R0001");
  r.displayDetails();

  Lab l("LAB001", "X-Ray");
  l.displayDetails();

  Feedback * f;
  f = new Feedback("F00001", "peter@gmail.com","Peter","200525252","P0001", 178, 67);
  f->displayDetails();

  Medical_Report * mr;
  mr = new Medical_Report("MR0001", "peter@gmail.com","Peter","200525252","P0001", 178, 67);
  mr->displayDetails();

  Payment p1("PAY0001", 10000.00);
  
  Lab_Appointment * la;
  la = new Lab_Appointment("LA0001", "LAB001", "X-Ray", 17, 05, 2022, 20, 00, "PAY0001", 10000.00);
  la -> displayDetails();

  Doctor_Appointment * da;
  da = new Doctor_Appointment("john@gmail.com", "John", "20016535552", "DA0001", "D0001", "Cardiovascular", "MBBS", 17, 05, 2022, 20, 00, "PAY0001", 10000.00);
  da -> displayDetails();

  delete f;
  delete mr;
  delete la;
  delete da;

}
