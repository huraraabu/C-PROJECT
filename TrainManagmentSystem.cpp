#include <iostream>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
using namespace std;
bool spacecheck(string na, bool flagpass);
// card portal all detail saved in this array
string passwordoftest[10];
string station[] = {"alitown", "thokarnaizbaag", "awantown", "sabazar", "akeemmor", "GPO", "anaklai", "laxmi", "sultanpura", "UET", "railway", "bhagbanpura", "shalmargarden", "chaubrji", "hanjarwal", "salahudin", "salamatpura", "gulshanyravi"};
string reservedstation[30];
string seatdate[30];
string passengercinc[30];
string onlinename[30];
string name[30];
string dateofbirth[200];
string cinc[200];
string currentStation[200];
string arrivalStation[200];
string password[50];
string currentStation2, arrivalStation2;

// password and username of employees saved in this array
string passwordoftestdriver[10];
string passwordoftestmanager[10];
string passwordoftestsecurity[10];
string passwordoftesttrain[10];
string passwordoftestsalary[10];
string passwordoftestcomputer[10];
string passwordoftesthead[10];
string nameoftestdriver[10];
string nameoftestsalary[10];
string nameoftesttrain[10];
string nameoftestmanager[10];
string nameoftesthead[10];
string nameoftestsecurity[10];
string nameoftestcomputer[10];
// number of employees count
int driverid = 0, managerid = 0, headid = 0, computerid = 0, securityid = 0, salaryid = 0, trainid = 0;
int driveridx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, manageridx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, headidx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, computeridx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, securityidx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, salaryidx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, trainidx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int drivercount = 0, maincheck = 0;

// attenednce of employee count
int count = 0, totaldistance, sizeofbalance, price;
int driverattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int managerattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int salaryattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int securityattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int trainattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int computerattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int checkdriverattendence[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
string balance[200];
// detail of employee
string drivername[10];
string drivercinc[10];
string driversalary[10];
string driverdateofbirth[10];
string managername[10];
string managercinc[10];
string managersalary[10];
string managerdateofbirth[10];
string trainname[10];
string traincinc[10];
string trainsalary[10];
string traindateofbirth[10];
string computername[10];
string computercinc[10];
string computersalary[10];
string computerdateofbirth[10];
string headname[10];
string headcinc[10];
string headsalary[10];
string headdateofbirth[10];
string salaryname[10];
string salarycinc[10];
string salarysalary[10];
string salarydateofbirth[10];
string securityname[10];
string securitycinc[10];
string securitysalary[10];
string securitydateofbirth[10];

void inputStation();
void inputStation2();
void showstation();
void signin();
void driverattendenceportal(int x);
void attendenceview();
void managerattendenceportal(int x);
void computerattendenceportal(int x);
void securityattendenceportal(int x);
void trainattendenceportal(int x);
void salaryattendenceportal(int x);

int signincheck();
void print2(int price);
void driverdetail(int x);
void driverdetailview(int x);
// void attendencevlidate(int number)
void driver();
void driverview();
void driveradddetailview();
void driveradddetailviewportal();

void engineer();
void engineerview();
void trainEngineer();
void traindetail(int x);
void traindetailview(int x);
void computerview();
void computerEngineer();
void computerdetail(int x);
void computerdetailview(int);
void salaryview();
void salarymanager();
void salarydetail(int x);
void salarydetailview(int x);
// void driverview();
void trainview();
void managerview();
void manager();
void stationManager();
void managerdetail(int x);
void managerdetailview(int x);
void securityview();
void securityManager();
void securitydetail(int x);
void securitydetailview(int x);
int validatestation();
void cardportalview();
string cardoption();
void validatepassword(string password, int sizeofpassword);

void signinview();

void sigup();
int cardcount = 0;
void signupview();
void print(int distance);
void viewdetailofcustomer();

void onlineseatsignup();
void onlineseatsignin();

void view();
void jobview();
string option();
void jobs();

string passenger();
void passengerview();

void employee();
void employeeview();

void admin();
void adminview();
void admin2();
void adminview2();
void gotoxy(int x, int y);

int test();
void testview();
void resultview();
void sec();
void testvalidate();
void test2();
void testvalidate2();
void test3();
void testvalidate3();
void test4();
void testvalidate4();
void test5();
void testvalidate5();
void test6();
void testvalidate6();
void test7();
void testvalidate7();



void onlineseatsignup();
int seatcount = 0;
void onlineseatsignin();
void onlinebookingview();
void ticketDetailview();
void firstview();

void optionDetailView();
void optionDetailView2();
void optionDetailView3();
void optionDetailView4();
void optionDetailView5();
void optionDetailView6();
void full();

void loadcardData();
void savecardData();
void storecardCount();
void loadcardCount();
void loadonlineseatData();
void saveonlineseatData();
bool mcqcheck(string answer, bool condition);
bool checkname(string names, bool flagname);
bool checkpassword(string temprent, bool flagpass);
bool checkname2(string names, bool flagname);
int convertint(string data);
string dateofBirthcheck();
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
// bool checkbalance(string temprent, bool flagpass);

void building()
{
  SetConsoleTextAttribute(hConsole, 6);
  Sleep(200);
  cout << "          __                 __           __                 __ "
       << "\t   ____                ___         ____                ___          " << endl;
  Sleep(200);
  cout << "         |^^| ___    _   __ |^^|  __     |^^| ___    _   __ |^^|  __   "
       << "\t   |^^| ___    _   __ |^^|  __     |^^| ___   _   __ |^^|  __ " << endl;
  Sleep(200);
  cout << "         |^^| |^^|  |^| |^| |^^| |^|     |^^| |^^|  |^| |^| |^^| |^|"
       << "\t   |^^| |^^|  |^| |^| |^^| |^| \t   |^^| |^^| |^| |^| |^^| |^|       " << endl;
  Sleep(200);
  cout << "         |^^| |^^|  |^| |^| |^^| |^|     |^^| |^^|  |^| |^| |^^| |^|   "
       << "\t   |^^| |^^|  |^| |^| |^^| |^| \t   |^^| |^^| |^| |^| |^^| |^|    " << endl;
  Sleep(200);
  cout << "         |^^| |^^|  |^| |^| |^^| |^|     |^^| |^^|  |^| |^| |^^| |^|  "
       << "\t   |^^| |^^|  |^| |^| |^^| |^|\t   |^^| |^^| |^| |^| |^^| |^|      " << endl;

  Sleep(200);
  cout << "         \"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\" ";
  SetConsoleTextAttribute(hConsole, 7);
}

void train()
{
  SetConsoleTextAttribute(hConsole, 12);
  cout << " __________________________________________________________________________________________________________^__" << endl;
  Sleep(200);
  cout << "|     ___   ___ |||  ___   ___   ___    ___ ___  |     ___   ___ |||  ___   ___   ___    ___ ___  |   __  ,----\\" << endl;
  Sleep(200);
  cout << "|    |   | |   |||| |   | |   | |   |  |   |   | |    |   | |   |||| |   | |   | |   |  |   |   | |  |  | |_____\\" << endl;
  Sleep(200);
  cout << "|    |___| |___|||| |___| |___| |___|  | O | O | |    |___| |___|||| |___| |___| |___|  | O | O | |  |  |        \\" << endl;
  Sleep(200);
  cout << "|               |||                    |___|___| |               |||                    |___|___| |  |__|         >" << endl;
  Sleep(200);
  cout << "|______________ |||______________________________|______________ |||______________________________|______________/" << endl;
  Sleep(200);
  cout << "                |||                                              |||                                        /--------" << endl;
  Sleep(200);
  SetConsoleTextAttribute(hConsole, 8);
  cout << "----------------'''----------------------------------------------'''---------------------------------------'---------------------------------------------------------       " << endl;
  SetConsoleTextAttribute(hConsole, 7);
}

// attendence of employee store
void storeattendence()
{
  fstream attfile;
  attfile.open("atten.txt", ios::out);
  for (int x = 1; x <= drivercount; x++)
  {
  
    attfile << checkdriverattendence[x];
  }
  attfile.close();
}
// data of employee store in file
void store()
{
  fstream myfile;
  myfile.open("data.txt", ios::out);
  for (int z = 1; z <= driverid; z++)
  {
    
    myfile << nameoftestdriver[z] << " ";
    myfile << passwordoftestdriver[z] << " ";
    myfile << drivercinc[z] << " ";
    myfile << driverdateofbirth[z] << endl;
  }

  for (int z = 1; z <= managerid; z++)
  {

    myfile << nameoftestmanager[z] << " ";
    myfile << passwordoftestmanager[z] << " ";
    myfile << managercinc[z] << " ";
    myfile << managerdateofbirth[z] << "\n";
  }

  for (int z = 1; z <= salaryid; z++)
  {
    myfile << nameoftestsalary[z] << " ";
    myfile << passwordoftestsalary[z] << " ";
    myfile << salarycinc[z] << " ";
    myfile << salarydateofbirth[z] << endl;
  }

  for (int b = 1; b <= computerid; b++)
  {
    myfile << nameoftestcomputer[b] << " ";
    myfile << passwordoftestcomputer[b] << " ";
    myfile << computercinc[b] << " ";
    myfile << computerdateofbirth[b] << endl;
  }
  for (int z = 1; z <= securityid; z++)
  {
    myfile << nameoftestsecurity[z] << " ";
    myfile << passwordoftestsecurity[z] << " ";
    myfile << securitycinc[z] << " ";
    myfile << securitydateofbirth[z] << endl;
  }
  for (int z = 1; z <= trainid; z++)
  {
    myfile << nameoftesttrain[z] << " ";
    myfile << passwordoftesttrain[z] << " ";
    myfile << traincinc[z] << " ";
    myfile << traindateofbirth[z] << endl;
  }
  for (int z = 1; z <= headid; z++)
  {
    cout<<"head";
    myfile << nameoftesthead[z] << " ";
    myfile << passwordoftesthead[z] << " ";
    myfile << headcinc[z] << " ";
    myfile << headdateofbirth[z] << endl;
  }
  myfile.close();
}
// data of employee  ID store in file
void store2()
{
  fstream file2;
  file2.open("dataid.txt", ios::out);
  file2 << driverid << endl;
  file2 << managerid << endl;
  file2 << computerid << endl;
  file2 << salaryid << endl;
  file2 << headid << endl;
  file2 << securityid << endl;
  file2 << trainid << endl;
  file2.close();
}
// data of employee load in array
void load2()
{
  fstream myfile2;
  myfile2.open("dataid.txt", ios::in);
  myfile2 >> driverid;
  myfile2 >> managerid;
  myfile2 >> computerid;
  myfile2 >> salaryid;
  myfile2 >> headid;
  myfile2 >> securityid;
  myfile2 >> trainid;
  myfile2.close();
  int validatestation2();
}
// data of employee ID LOAD in array
void load()
{
  fstream file;
  file.open("data.txt", ios::in);
  for (int z = 1; z <= driverid; z++)
  {
    file >> nameoftestdriver[z];
    file >> passwordoftestdriver[z];
    //if(drivercinc[z]!="\0"){
    file >> drivercinc[z];
    file >> driverdateofbirth[z];
    //}
  }
  for (int z = 1; z <= managerid; z++)
  {
    file >> nameoftestmanager[z];
    file >> passwordoftestmanager[z];
    //if (managercinc[z] != "\0")
    //{
    file >> managercinc[z];
    file >> managerdateofbirth[z];
    //}
  }
  for (int z = 1; z <= salaryid; z++)
  {
    file >> nameoftestsalary[z];
    file >> passwordoftestsalary[z];
     //if (salarycinc[z] != "\0")
    //{
    file >> salarycinc[z];
    file >> salarydateofbirth[z];
    //}
  }
  for (int z = 1; z <= computerid; z++)
  {
    file >> nameoftestcomputer[z];
    file >> passwordoftestcomputer[z];
     //if (computercinc[z] != "\0")
    //{
    file >> computercinc[z];
    file >> computerdateofbirth[z];
    //}
  }
  for (int z = 1; z <= securityid; z++)
  {
    file >> nameoftestsecurity[z];
    file >> passwordoftestsecurity[z];
     //if (securitycinc[z] != "\0")
    //{
    file >> securitycinc[z];
    file >> securitydateofbirth[z];
    //}
  }
  for (int z = 1; z <= trainid; z++)
  {
    file >> nameoftesttrain[z];
    file >> passwordoftesttrain[z];
     //if (traincinc[z] != "\0")
    //{
    file >> traincinc[z];
    file >> traindateofbirth[z];
    //}
  }
  for (int z = 1; z <= headid; z++)
  {
    file >> nameoftesthead[z];
    file >> passwordoftesthead[z];
    //if (drivercinc[z] != "\0")
    //{
    file >> headcinc[z];
    file >> headdateofbirth[z];
    //}
  }
  file.close();
}
// main of function
main()
{
  int count, sizeofpassword;
  string currentStation, number, number2, optionofticket;

  if (maincheck == 0)
  {
    load2();
    load();
    loadcardCount();
    loadcardData();
    loadonlineseatData();
    system("cls");
    cout << endl;
    cout << endl;
    //train();
    for (int a = 0; a < 5; a++)
    {
      cout << endl;
    }
   //firstview();
    for (int a = 0; a < 8; a++)
    {
      cout << endl;
    }
  // building();
    system("pause");
    maincheck++;
  }
startagain:
  view();
  number = option();
  if (number == "4")
  {
    jobview();
  }
  else if (number == "1")
  {
    passengerview();
    number2 = passenger();
    if (number2 == "1")
    {
      inputStation();
      totaldistance = validatestation();
      print(totaldistance);
    }
    else if (number2 == "2")
    {
      cardportalview();
      optionofticket = cardoption();
      if (optionofticket == "2")
      {
        signupview();
        sigup();
      }
      else if (optionofticket == "1")
      {
        signinview();
        signin();
      }
      else if (optionofticket == "3")
      {
        cout << optionofticket;
        viewdetailofcustomer();
      }
      else if (optionofticket == "4")
      {
        passenger();
      }
      else
      {
        cout << "WRONG INPUT" << endl;
        system("pause");
        goto startagain;
      }
    }
  }
  else if (number == "2")
  {
    employeeview();
  }
  else if (number == "3")
  {
    adminview();
    admin();
  }
  else if (number == "5")
  {
    store();
    store2();
    savecardData();
    storecardCount();
    saveonlineseatData();
    storeattendence();
    exit(0);
  }
  else
  {

    cout << "WRONG INPUT";
    cout << endl;
    system("pause");
    maincheck++;
    main();
  }
}
// first view of project
void view()
{
  system("cls");
  SetConsoleTextAttribute(hConsole, 6);
  cout << endl;
  cout << endl;
  cout << "\t\t\t\t\t#############################################\t\t\t" << endl;
  // Sleep(100);
  cout << "\t\t\t\t\t#                                           #" << endl;
  // Sleep(100);
  cout << "\t\t\t\t\t#      WELCOME TO ORANGE LINE TRAIN STATION #\t\t\t" << endl;
  // Sleep(100);
  cout << "\t\t\t\t\t#                                           #" << endl;
  // Sleep(100);
  cout << "\t\t\t\t\t#############################################\t\t\t" << endl;
  // Sleep(100);
  SetConsoleTextAttribute(hConsole, 7);
  cout << endl;
}
// option of main
string option()
{
  string number;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 6);
  // Sleep(100);
  cout << "\t\t\t################################################################################" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t#\t1.PASSENGERS                                       2.EMPLOYEE          #" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t#\t3.HEAD OF ALL STATION                              4.APPLY FOR JOB     #" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t#\t5.EXIT                                                                 #" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t#                                                                              #" << endl;
  // Sleep(100);
  cout << "\t\t\t################################################################################" << endl;
  cout << endl;
  cout << "\t\t\t\t\t\tENTER HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, number);
  return number;
}
// job test appeared here
void jobs()
{
  string testnumber;
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 6);
  cout << "\t###############################################################################" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t1.TEST FOR DRIVER                                                      #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t2.TEST FOR  TRAIN ENGINEER                                             #   " << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t3.TEST FOR  STATION MANAGER                                            #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t4.TEST FOR COMPUTER ENGINEER                                           #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t5.TEST FOR SECURITY ENGINEER                                           #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t6.TEST FOR SALARY MANGER                                               #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t7.TEST FOR HEAD OF ALL STATION                                         #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t#\t8.EXIT                                                                 #" << endl;
  cout << "\t#                                                                              #" << endl;
  cout << "\t################################################################################" << endl;
  cout << "\t\tNOTE:BEFORE  APPLY HEAD OF ALL STATITON MUST CLEAR MANAGER TEST";
  // cout <<"\t#                                                                              "<< endl;
  cout << endl;
  cout << "\t################################################################################" << endl;
  cout << "ENTER TEST NUMBER:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, testnumber);

  if (testnumber == "1")
  {
    testvalidate();
  }
  else if (testnumber == "2")
  {
    testvalidate2();
  }
  else if (testnumber == "3")
  {
    testvalidate3();
  }
  else if (testnumber == "4")
  {
    testvalidate4();
  }
  else if (testnumber == "5")
  {
    testvalidate5();
  }
  else if (testnumber == "6")
  {
    testvalidate6();
  }
  else if (testnumber == "7")
  {
    testvalidate7();
  }
  else if (testnumber == "8")
  {
    maincheck++;
    main();
    // view();
    // option();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    jobview();
  }
}

void jobview()
{
  system("cls");
  cout << endl;
  cout << endl;
  cout << "\t\t\t\t\t#############################################\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t\t\t   WELCOME TO JOB TESTING PORTAL\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t\t\t#############################################\t\t\t" << endl;
  cout << endl;
  jobs();
}
// passenger option are here
string passenger()
{
  int ans;
pass:
  passengerview();
  string condition, bookingcondition;
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 6);
  cout << "\t\t\t\t##########################################################\t\t\t" << endl;
  cout << "\t\t \t\t#                                                        #" << endl;
  cout << "\t\t\t\t#\t1.COIN                           2.CARD\t\t # " << endl;
  cout << "\t\t \t\t#                                                        #" << endl;
  cout << "\t\t \t\t#                                                        #" << endl;
  cout << "\t\t\t\t#\t3.ONLINE BOOKING                 4.EXIT\t\t #" << endl;
  cout << "\t\t \t\t#                                                        #" << endl;
  cout << "\t\t \t\t#                                                        #" << endl;
  cout << "\t\t\t\t##########################################################\t\t\t" << endl;
  cout << "ENTER YOUR CONDITION:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, condition);
  if (condition == "1")
  {
    return condition;
  }
  else if (condition == "4")
  {
    maincheck++;
    main();
  }
  else if (condition == "3")
  {
    if (cardcount != 0)
    {
      ans = signincheck();
      if (ans == 1)
      {
      check:
        onlinebookingview();
        cout << endl;
        cout << "\t\t  1.VIEW DETAILS                   2.BOOK SEAT" << endl;
        cout << endl;
        cout << "\t\t  3.EXIT" << endl;
        cout << endl;
        cout << "\t\t  ENTER HERE:";
        getline(cin, bookingcondition);
        // cin.ignore();
        if (bookingcondition == "3")
        {
          passenger();
        }
        else if (bookingcondition == "2")
        {
          onlinebookingview();
          onlineseatsignup();
        }
        else if (bookingcondition == "1")
        {
          ticketDetailview();

          onlineseatsignin();
        }
        else
        {
          cout << "WRONG INPUT" << endl;
          system("pause");
          goto check;
        }
      }
    }
    else
    {
      // system("cls");
      cout << "ONLY CARD MEMBERS BOOK ONLINE SEAT" << endl;
      system("pause");
      maincheck++;
      main();
    }
  }
  else if (condition == "2")
  {
    return condition;
  }

  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto pass;
  }
}
void passengerview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << endl;
  cout << endl;
  cout << "\t\t\t\t############################################\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t\t\t      WELCOME TO PASSENGER PORTAL\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t\t############################################\t\t\t" << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void onlineseatsignup()
/*for sign up of online ticket booking*/
{
  SetConsoleTextAttribute(hConsole, 6);
  int seats = 30, price, seatnumber, sizeofcinc;
  string checkcondition;
  bool flagname = false, flagpass = true;
  bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
  for (int x = seatcount + 1; x < 30; x++)
  {
    int count = 0;
    if (seatcount < 30)
    {
      cout << endl;
    name:
      cout << "\t\tENTER NAME:";
      getline(cin, onlinename[x]);
      // cin.ignore();
      if (checkname(onlinename[x], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);

        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        goto name;

        SetConsoleTextAttribute(hConsole, 7);
      }
      else if (spacecheck(onlinename[x], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag2 = true;
      }
      cout << endl;
      cout << "\t\tENTER DATE:" << endl;
      seatdate[x] = dateofBirthcheck();
      cout << endl;
    cincc:
      cout << "\t\tENTER YOUR CINC:";
      getline(cin, passengercinc[x]);
      cin.ignore();
      sizeofcinc = passengercinc[x].length();
      if (sizeofcinc != 13)
      {
        cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
        system("pause");
        goto cincc;
      }
      else if (checkpassword(passengercinc[x], flagpass) == false)
      {
        cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
        system("pause");
        goto cincc;
      }
      else if (spacecheck(passengercinc[x], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto cincc;
        testflag3 = true;
      }
      showstation();
    station:
      cout << endl;
      cout << "\t\tENTER STATION:";
      getline(cin, reservedstation[x]);
      cout << endl;

      for (int y = 0; y < 18; y++)
      {
        if (reservedstation[x] == station[y])
        {
          SetConsoleTextAttribute(hConsole, 2);
          cout << "\t##############################################################" << endl;

          cout << endl;
          cout << "\t\tYour STATION IS " << y << " STATION AHEAD FROM ALI TOWN" << endl;
          price = 5 * y;
          cout << endl;
          cout << "\t\tYOUR COIN PRICE IS:" << price << endl;
          seatnumber = x + 1;
          cout << endl;
          cout << "\t\t YOUR SEAT NUMBER IS:" << seatnumber << endl;
          cout << endl;
          cout << "\t##############################################################" << endl;
          count++;
          SetConsoleTextAttribute(hConsole, 7);
          break;
        }
      }

      if (count == 0)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "STATION NOT FOUND" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto station;
      }
      print2(price);
      cout << endl;
      seatcount++;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 2);
      cout << "\t*********************************************************************" << endl;
      cout << "\t\tHURRY UP! ONLY " << 30 - seatcount << " SEATS ARE LEFT         " << endl;
      cout << "\t*********************************************************************" << endl;
      SetConsoleTextAttribute(hConsole, 7);
    input:
      cout << "\t\tEnter 1 for more booking and 0 for stop:";
      getline(cin, checkcondition);
      if (checkcondition == "0")
      {
        maincheck++;
        main();
      }
      else if (checkcondition == "1")
      {
        system("cls");
        onlinebookingview();
      }
      else
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT";
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto input;
      }
    }
    else
    {
      cout << endl;
      cout << "SOORY!ALL SEATS ARE BOOKED" << endl;
      system("pause");
      break;
    }
  }
  maincheck++;
  main;
  SetConsoleTextAttribute(hConsole, 7);
}
// online seat save in  file
void saveonlineseatData()
{
  fstream file5;
  file5.open("seat.txt", ios::out);
  for (int x = 1; x <= seatcount; x++)
  {
    file5 << onlinename[x] << " ";
    file5 << reservedstation[x] << " ";
    file5 << seatdate[x] << " ";
    file5 << passengercinc[x] << endl;
  }
  file5.close();
}
// online seat data load in file
void loadonlineseatData()
{
  fstream file6;
  file6.open("seat.txt", ios::in);
  for (int x = 1; x <= seatcount; x++)
  {

    file6 >> onlinename[x];
    file6 >> reservedstation[x];
    file6 >> seatdate[x];
    file6 >> passengercinc[x];
  }
  file6.close();
}

/*FOR VIEW DETAIL OF BOOKED SEATS*/
void onlineseatsignin()
{
  SetConsoleTextAttribute(hConsole, 6);
  int seatnumber, x, stopCondition;
  cout << endl;
  if (seatcount != 0)
  {
    cout << "\t\tENTER YOUR SEAT NUMBER:";
    cin >> seatnumber;
    x = seatnumber;
    cout << endl;
    cout << "\t\tYOUR STATION:" << reservedstation[x] << endl;
    cout << endl;
    cout << "\t\tYOUR NAME:" << onlinename[x] << endl;
    cout << endl;
    cout << "\t\tYOUR CINC NUMBER:" << passengercinc[x] << endl;
    cout << endl;
    cout << "\t\tYOUR SEAT DATE:" << seatdate[x] << endl;
    cout << endl;
    cout << "ENTER 1 FOR MORE VIEW AND 0 FOR STOP :";
    cin >> stopCondition;
    if (stopCondition == 1)
    {
      ticketDetailview();
      onlineseatsignin();
    }
    else
    {
      passenger();
    }
  }
  else
  {
    cout << "ALL SEAT ARE FREE" << endl;
    system("pause");
    maincheck++;
    main();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void onlinebookingview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << "\t\t########################################" << endl;
  cout << endl;
  cout << "\t\t   WELCOME TO SEAT BOOKING PORTAL  " << endl;
  cout << endl;
  cout << "\t\t########################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void ticketDetailview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << "\t\t########################################" << endl;
  cout << endl;
  cout << "\t\t   WELCOME TO booking view portal  " << endl;
  cout << endl;
  cout << "\t\t########################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
// employee detail view
void employee()
{
  string passwordCheck;
  string category;
  SetConsoleTextAttribute(hConsole, 11);
  cout << "\t\t METIONED YOUR CATEGORY:-\t\t" << endl;
  cout << endl;
  cout << "\t\t\t###########################################################" << endl;
  cout << "\t\t\t#                                                         #" << endl;
  cout << "\t\t\t#\t\t           1.WORKER                       #" << endl;
  cout << "\t\t\t#                                                         #   " << endl;
  cout << "\t\t\t#\t\t           2.ENGINEER                     #" << endl;
  cout << "\t\t\t#                                                         #  " << endl;
  cout << "\t\t\t#\t\t           3.MANAGER                      # " << endl;
  cout << "\t\t\t#                                                         #" << endl;
  cout << "\t\t\t#\t\t           4.EXIT                         # " << endl;
  cout << "\t\t\t#                                                         #   " << endl;
  cout << "\t\t\t##########################################################" << endl;
  cout << endl;
  cout << "ENTER YOUR CATEGORY :";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, category);
  if (category == "1")
  {
    driver();
  }
  else if (category == "2")
  {
    engineerview();
    engineer();
  }
  else if (category == "3")
  {
    managerview();
    manager();
  }
  else if (category == "4")
  {
    maincheck++;
    main();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
}
void employeeview()
{
  system("cls");
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 11);
  cout << "\t\t\t***********************************\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t   WELCOME TO PASSENGER PORTAL\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t***********************************\t\t\t" << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
  employee();
}
void admin()
{
  string id;
  bool flagpass = true;
  int condition, x;
  string codecheck, username;
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  if (checkpassword(id, flagpass) == false)
  {
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER )" << endl;
    system("pause");
    goto checkit;
  }
  x = convertint(id);
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR NAME:";
  cin >> username;
  cout << endl;
  cout << "\t\tENTER YOUR PASSWORD:";
  cin >> codecheck;
  if ((codecheck == passwordoftesthead[x]) && (username == nameoftesthead[x]))
  {
    adminview2();
    admin2();
  }
  else
  {
    system("cls");
    cout << endl;
    cout << endl;
    cout << "\t\tPLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    maincheck++;
    main();
  }
}
void adminview()
{
  SetConsoleTextAttribute(hConsole, 2);
  system("cls");
  cout << endl;
  cout << endl;
  cout << "\t\t\t######################################\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t   WELCOME TO ADMIN PORTAL\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t######################################\t\t\t" << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void admin2()
{
  SetConsoleTextAttribute(hConsole, 2);
  string condition;
  cout << "\t###########################################################################" << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t1.VIEW DETAIL                                             #  " << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t2.REMOVE EMPLOYEE DETAIL                                  #" << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t3.CHANGE EMPLOYEE DETAIL                                  #" << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t4.NOTIFICATIONS                                           #" << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t5.FIRED PEOPLE                                            #" << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t6.ADD SALARY                                              #" << endl;
  cout << "\t#                                                                         #" << endl;
  cout << "\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t###########################################################################" << endl;
  cout << "ENTER HERE:";
  getline(cin, condition);
  // cin.ignore();
  if (condition == "1")
  {

    optionDetailView();
  }
  else if (condition == "2")
  {
    optionDetailView2();
  }
  else if (condition == "7")
  {
    maincheck++;
    main();
  }
  else if (condition == "3")
  {
    driveradddetailviewportal();
    optionDetailView3();
  }
  else if (condition == "4")
  {
    driveradddetailviewportal();
    optionDetailView4();
  }
  else if (condition == "5")
  {
    driveradddetailviewportal();
    optionDetailView5();
  }
  else if (condition == "6")
  {
    driveradddetailviewportal();
    optionDetailView6();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    adminview2();
    admin2();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void optionDetailView2()
{
back:
  driveradddetailviewportal();
  int x;
  string condition;
  SetConsoleTextAttribute(hConsole, 10);
  cout << "\t\t\t###########################################################################" << endl;
  cout << "\t\t\t#\t\t1.VIEW DRIVER                                             #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t2.VIEW  COMPUITER ENGINEER                                #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t3.VIEW TRAIN ENGINEER                                     #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t4.VIEW STATION MANAGER                                    #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t5.VIEW SALARY MANAGER                                     # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t6.VIEW SECURITY MANAGER                                   # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "ENTER HERE:";
  SetConsoleTextAttribute(hConsole, 10);
  getline(cin, condition);
  if (condition == "1")
  {
    cout << "\t\t\tENTER EMPLOYEE ID:";
    cin >> x;
    cout << endl;
    cout << "\t\t\tDETAIL OF DRIVER  " << x << "   REMOVED";
    drivername[x] = " ";
    drivercinc[x] = " ";
    driverdateofbirth[x] = " ";
    driversalary[x] = " ";
    cout << endl;
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "3")
  {
    cout << "\t\t\tENTER EMPLOYEE ID:";
    cin >> x;
    cout << endl;
    cout << "\t\t\tDETAIL OF TRAIN ENGINEER  " << x << "   REMOVED";
    trainname[x] = " ";
    traincinc[x] = " ";
    traindateofbirth[x] = " ";
    trainsalary[x] = " ";
    cout << endl;
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "2")
  {
    cout << "\t\t\tENTER EMPLOYEE ID:";
    cin >> x;
    cout << endl;
    cout << "\t\t\tDETAIL OF COMPUTER ENGINEER  " << x << "   REMOVED";
    computername[x] = " ";
    computercinc[x] = " ";
    computerdateofbirth[x] = " ";
    computersalary[x] = " ";
    cout << endl;
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "4")
  {
    cout << "\t\t\tENTER EMPLOYEE ID:";
    cin >> x;
    cout << endl;
    cout << "\t\t\tDETAIL OF STATION MANAGER  " << x << "   REMOVED";
    managername[x] = " ";
    managercinc[x] = " ";
    managerdateofbirth[x] = " ";
    managersalary[x] = " ";
    cout << endl;
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "5")
  {
    cout << "\t\t\tENTER EMPLOYEE ID:";
    cin >> x;
    cout << endl;
    cout << "\t\t\tDETAIL OF SALARY MANAGER  " << x << "   REMOVED";
    salaryname[x] = " ";
    salarycinc[x] = " ";
    salarydateofbirth[x] = " ";
    salarysalary[x] = " ";
    cout << endl;
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "6")
  {
    cout << "\t\t\tENTER EMPLOYEE ID:";
    cin >> x;
    cout << endl;
    cout << "\t\t\tDETAIL OF SECURITY MANAGER  " << x << "   REMOVED";
    securityname[x] = " ";
    securitycinc[x] = " ";
    securitydateofbirth[x] = " ";
    securitysalary[x] = " ";
    cout << endl;
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "7")
  {
    adminview2();
    admin2();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}
void optionDetailView6()
{
back:
  driveradddetailviewportal();
  int x;
  SetConsoleTextAttribute(hConsole, 10);
  string condition;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "\t\t\t#\t\t1.VIEW DRIVER                                             #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t2.VIEW  COMPUITER ENGINEER                                #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t3.VIEW TRAIN ENGINEER                                     #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t4.VIEW STATION MANAGER                                    #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t5.VIEW SALARY MANAGER                                     # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t6.VIEW SECURITY MANAGER                                   # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "ENTER HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, condition);
  if (condition == "1")
  {
    bool testflag = true;
    int x;
  id1:
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
    driver:
      cout << "\t\tENTER  SALARY:";
      getline(cin, driversalary[x]);
      //cin.ignore();
      if (checkpassword(driversalary[x], testflag) == false)
      {
        cout << "WRONG INPUT(INTEGER ONLY)" << endl;
        system("pause");
        goto driver;
      }
      system("pause");
      adminview2();
      admin2();
    }
    else if (x > 10)
    {
      full();
    }
    else
    {
      goto id1;
    }
  }
  else if (condition == "2")
  {
    bool testflag1 = true;
    int x;
  id2:
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
    com:
      cout << "\t\tENTER  SALARY:";
      getline(cin, computersalary[x]);
      cin.ignore();
      if (checkpassword(computersalary[x], testflag1) == false)
      {
        cout << "WRONG INPUT(INTEGER ONLY)" << endl;
        system("pause");
        goto com;
      }
      system("pause");
      adminview2();
      admin2();
    }
    else if (x > 10)
    {
      full();
    }
    else
    {
      goto id2;
    }
  }
  else if (condition == "3")
  {
    bool testflag2 = true;
    int x;
  id10:
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
    tra:
      cout << "\t\tENTER  SALARY:";
      getline(cin, trainsalary[x]);
      cin.ignore();
      if (checkpassword(trainsalary[x], testflag2) == false)
      {
        cout << "WRONG INPUT(INTEGER ONLY)" << endl;
        system("pause");
        goto tra;
      }
      system("pause");
      adminview2();
      admin2();
    }
    else if (x > 10)
    {
      full();
    }
    else
    {
      goto id10;
    }
  }
  else if (condition == "4")
  {
    bool testflag3 = true;
    int x;
  id4:
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
    man:
      cout << "\t\tENTER  SALARY:";
      getline(cin, managersalary[x]);
      cin.ignore();
      if (checkpassword(managersalary[x], testflag3) == false)
      {
        cout << "WRONG INPUT(INTEGER ONLY)" << endl;
        system("pause");
        goto man;
      }
      system("pause");
      adminview2();
      admin2();
    }
    else if (x > 10)
    {
      full();
    }
    else
    {
      goto id4;
    }
  }
  else if (condition == "5")
  {
    bool testflag4 = true;
    int x;
  id5:
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
    sal:
      cout << "\t\tENTER  SALARY:";
      getline(cin, salarysalary[x]);
      cin.ignore();
      if (checkpassword(salarysalary[x], testflag4) == false)
      {
        cout << "WRONG INPUT(INTEGER ONLY)" << endl;
        system("pause");
        goto sal;
      }
      system("pause");
      adminview2();
      admin2();
    }
    else if (x > 10)
    {
      full();
    }
    else
    {
      goto id5;
    }
  }
  else if (condition == "6")
  {
  id7:
    bool testflag6 = true;
    int x;
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
    sec:
      cout << "\t\tENTER  SALARY:";
      getline(cin, securitysalary[x]);
      cin.ignore();
      if (checkpassword(securitysalary[x], testflag6) == false)
      {
        cout << "WRONG INPUT(INTEGER ONLY)" << endl;
        system("pause");
        goto sec;
      }
      system("pause");
      adminview2();
      admin2();
    }
    else if (x > 10)
    {
      full();
    }
    else
    {
      goto id7;
    }
  }
  else if (condition == "7")
  {
    adminview2();
    admin2();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}

void full()
{
  cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
  system("pause");
  adminview2();
  admin2();
}
// edit detail of employee
void optionDetailView3()
{
back:
  driveradddetailviewportal();
  SetConsoleTextAttribute(hConsole, 10);
  int x;
  string condition;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "\t\t\t#\t\t1.VIEW DRIVER                                             #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t2.VIEW  COMPUITER ENGINEER                                #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t3.VIEW TRAIN ENGINEER                                     #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t4.VIEW STATION MANAGER                                    #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t5.VIEW SALARY MANAGER                                     # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t6.VIEW SECURITY MANAGER                                   # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "ENTER HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, condition);
  if (condition == "1")
  {

    int x;
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
      cout << endl;
      cout << "\t\tENTER  NAME:";
      cin >> drivername[x];
      cout << endl;
      cout << "\t\tENTER  DATE OF BIRTH:";
      cin >> driverdateofbirth[x];
      cout << endl;
      cout << "\t\tENTER  CINC:";
      cin >> drivercinc[x];
      cout << endl;
      system("pause");
      adminview2();
      admin2();
    }
    else
    {
      cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
      system("pause");
      adminview2();
      admin2();
    }
  }
  else if (condition == "2")
  {
    int x;
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
      cout << endl;
      cout << "\t\tENTER  NAME:";
      cin >> computername[x];
      cout << endl;
      cout << "\t\tENTER  DATE OF BIRTH:";
      cin >> computerdateofbirth[x];
      cout << endl;
      cout << "\t\tENTER  CINC:";
      cin >> computercinc[x];
      cout << endl;
      system("pause");
      adminview2();
      admin2();
    }
    else
    {
      cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
      system("pause");
      adminview2();
      admin2();
    }
  }
  else if (condition == "3")
  {
    int x;
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
      cout << endl;
      cout << "\t\tENTER  NAME:";
      cin >> trainname[x];
      cout << endl;
      cout << "\t\tENTER  DATE OF BIRTH:";
      cin >> traindateofbirth[x];
      cout << endl;
      cout << "\t\tENTER  CINC:";
      cin >> traincinc[x];
      cout << endl;
      system("pause");
      adminview2();
      admin2();
    }
    else
    {
      cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
      system("pause");
      adminview2();
      admin2();
    }
  }
  else if (condition == "4")
  {
    int x;
    cout << "\t\tENTER YOUR EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
      cout << endl;
      cout << "\t\tENTER  NAME:";
      cin >> managername[x];
      cout << endl;
      cout << "\t\tENTER  DATE OF BIRTH:";
      cin >> managerdateofbirth[x];
      cout << endl;
      cout << "\t\tENTER  CINC:";
      cin >> managercinc[x];
      cout << endl;
      system("pause");
      adminview2();
      admin2();
    }
    else
    {
      cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
      system("pause");
      adminview2();
      admin2();
    }
  }
  else if (condition == "5")
  {
    int x;
    cout << "\t\tENTER  EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
      cout << endl;
      cout << "\t\tENTER NAME:";
      cin >> salaryname[x];
      cout << endl;
      cout << "\t\tENTER  DATE OF BIRTH:";
      cin >> salarydateofbirth[x];
      cout << endl;
      cout << "\t\tENTER  CINC:";
      cin >> salarycinc[x];
      cout << endl;
      system("pause");
      adminview2();
      admin2();
    }
    else
    {
      cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
      system("pause");
      adminview2();
      admin2();
    }
  }
  else if (condition == "6")
  {
    int x;
    cout << "\t\tENTER EMPLOYEE ID:";
    cin >> x;
    if (x <= 10)
    {
      cout << endl;
      cout << "\t\tENTER NAME:";
      cin >> securityname[x];
      cout << endl;
      cout << "\t\tENTER  DATE OF BIRTH:";
      cin >> securitydateofbirth[x];
      cout << endl;
      cout << "\t\tENTER  CINC:";
      cin >> securitycinc[x];
      cout << endl;
      system("pause");
      adminview2();
      admin2();
    }
    else
    {
      cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
      system("pause");
      adminview2();
      admin2();
    }
  }
  else if (condition == "7")
  {
    adminview2();
    admin2();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}
// here admin check notifications
void optionDetailView4()
{
  int y, id, z = 0;
back:
  driveradddetailviewportal();
  SetConsoleTextAttribute(hConsole, 10);
  string checkcode;
  int x = 0;
  string condition, condition2;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "\t\t\t#\t\t1.VIEW DRIVER                                             #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t2.VIEW  COMPUITER ENGINEER                                #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t3.VIEW TRAIN ENGINEER                                     #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t4.VIEW STATION MANAGER                                    #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t5.VIEW SALARY MANAGER                                     # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t6.VIEW SECURITY MANAGER                                   # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t\t\t###########################################################################" << endl;

  cout << "ENTER HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, condition);
  if (condition == "1")
  {
  backii:
    cout << endl;
    cout << "\t\t\t1.HEAD OF ALL STATION                 2.EMPLOYEE";
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin, condition2);
    if (condition2 == "2")
    {
      cout << endl;
      cout << "ENTER YOUR ENPLOYEE ID:";
      cin >> driverid;
      x = driverid;
      driveridx[x] = driverid;
      cout << endl;
      system("pause");
      employeeview();
    }
    else if (condition2 == "1")
    {
      cout << "\t\t\tENTER YOUR ID:";
      cin >> y;
      cout << "\t\t\tENTER PASSWORD:";
      cin >> checkcode;
      if (checkcode == passwordoftesthead[y])
      {
        system("cls");
        for (int x = 0; x < 10; x++)

        {
          if (driveridx[x] != 0)
          {
            cout << endl;
            cout << endl;
            cout << "\t\t\tDRIVER OF EMPLOYEE ID " << driveridx[x] << "  IS LATE";
            cout << endl;
          }
        }
      }
      else
      {
        cout << endl;
        cout << "\t\t\tPASSWORD INCORRECT";
        cout << endl;
        system("cls");
        maincheck++;
        main();
      }
      cout << count;
      system("pause");
      adminview2();
      admin2();
    }

    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto backii;
    }
  }

  else if (condition == "3")
  {
  backii2:
    cout << endl;
    cout << "\t\t\t1.HEAD OF ALL STATION                 2.EMPLOYEE";
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin, condition2);
    if (condition2 == "2")
    {
      cout << endl;
      cout << "ENTER YOUR ENPLOYEE ID:";
      cin >> trainid;
      x = trainid;
      trainidx[x] = trainid;
      // cout<<driverid;
      cout << endl;
      system("pause");
      employeeview();
    }
    else if (condition2 == "1")
    {
      cout << "\t\t\tENTER YOUR ID:";
      cin >> y;
      cout << "\t\t\tENTER PASSWORD:";
      cin >> checkcode;
      if (checkcode == passwordoftesthead[y])
      {
        system("cls");
        for (int x = 0; x < 10; x++)

        {
          if (trainidx[x] != 0)
          {
            cout << endl;
            cout << endl;
            cout << "\t\t\tTRAIN ENGINEER OF EMPLOYEE ID " << trainidx[x] << "  IS LATE";
            cout << endl;
          }
        }
        system("pause");
        adminview2();
        admin2();
      }
      else
      {
        cout << endl;
        cout << "\t\t\tPASSWORD INCORRECT";
        cout << endl;
        system("cls");
        maincheck++;
        main();
      }
    }
    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto backii2;
    }
  }
  else if (condition == "4")
  {
  backii3:
    cout << endl;
    cout << "\t\t\t1.HEAD OF ALL STATION                 2.EMPLOYEE";
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin, condition2);
    if (condition2 == "2")
    {
      cout << endl;
      cout << "ENTER YOUR ENPLOYEE ID:";
      cin >> managerid;
      x = managerid;
      manageridx[x] = managerid;
      // cout<<driverid;
      cout << endl;
      system("pause");
      employeeview();
    }
    else if (condition2 == "1")
    {
      cout << "\t\t\tENTER YOUR ID:";
      cin >> y;
      cout << "\t\t\tENTER PASSWORD:";
      cin >> checkcode;
      if (checkcode == passwordoftesthead[y])
      {
        system("cls");
        // cout<<driverid;
        for (int x = 0; x < 10; x++)

        {
          if (manageridx[x] != 0)
          {
            cout << endl;
            cout << endl;
            cout << "\t\t\tSTATION MANAGER OF EMPLOYEE ID " << manageridx[x] << "  IS LATE";
            cout << endl;
          }
        }

        system("pause");
        adminview2();
        admin2();
      }
      else
      {
        cout << endl;
        cout << "\t\t\tPASSWORD INCORRECT";
        cout << endl;
        system("cls");
        maincheck++;
        main();
      }
    }
    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto backii3;
    }
  }
  else if (condition == "5")
  {
  backii4:
    cout << endl;
    cout << "\t\t\t1.HEAD OF ALL STATION                 2.EMPLOYEE";
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin, condition2);
    if (condition2 == "2")
    {
      cout << endl;
      cout << "ENTER YOUR ENPLOYEE ID:";
      cin >> salaryid;
      x = salaryid;
      salaryidx[x] = salaryid;
      // cout<<driverid;
      cout << endl;
      system("pause");
      employeeview();
    }
    else if (condition2 == "1")
    {
      cout << "\t\t\tENTER YOUR ID:";
      cin >> y;
      cout << "\t\t\tENTER PASSWORD:";
      cin >> checkcode;
      if (checkcode == passwordoftesthead[y])
      {
        system("cls");
        // cout<<driverid;
        for (int x = 0; x < 10; x++)
        {
          if (salaryidx[x] != 0)
          {
            cout << endl;
            cout << endl;
            cout << "\t\t\tSALARY MANAGER OF EMPLOYEE ID " << salaryidx[x] << "  IS LATE";
            cout << endl;
          }
        }

        system("pause");
        adminview2();
        admin2();
      }
      else
      {
        cout << endl;
        cout << "\t\t\tPASSWORD INCORRECT";
        cout << endl;
        system("cls");
        maincheck++;
        main();
      }
    }
    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto backii4;
    }
  }
  else if (condition == "6")
  {
  backii5:
    cout << endl;
    cout << "\t\t\t1.HEAD OF ALL STATION                 2.EMPLOYEE";
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin, condition2);
    if (condition2 == "2")
    {
      cout << endl;
      cout << "ENTER YOUR ENPLOYEE ID:";
      cin >> securityid;
      x = securityid;
      securityidx[x] = securityid;
      // cout<<driverid;
      cout << endl;
      system("pause");
      employeeview();
    }
    else if (condition2 == "1")
    {
      cout << "\t\t\tENTER YOUR ID:";
      cin >> y;
      cout << "\t\t\tENTER PASSWORD:";
      cin >> checkcode;
      if (checkcode == passwordoftesthead[y])
      {
        system("cls");
        // cout<<driverid;
        for (int x = 0; x < 10; x++)

        {
          if (securityidx[x] != 0)
          {
            cout << endl;
            cout << endl;
            cout << "\t\t\tSECURITY MANAGER OF EMPLOYEE ID " << securityidx[x] << "  IS LATE";
            cout << endl;
          }
        }

        system("pause");
        adminview2();
        admin2();
      }
      else
      {
        cout << endl;
        cout << "\t\t\tPASSWORD INCORRECT";
        cout << endl;
        system("cls");
        maincheck++;
        main();
      }
    }
    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto backii5;
    }
  }
  else if (condition == "7")
  {
    adminview2();
    admin2();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}
// DELETE employee detail
void optionDetailView5()
{
back:
  driveradddetailviewportal();
  SetConsoleTextAttribute(hConsole, 10);
  int x;
  string condition;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "\t\t\t#\t\t1.VIEW DRIVER                                             #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t2.VIEW  COMPUITER ENGINEER                                #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t3.VIEW TRAIN ENGINEER                                     #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t4.VIEW STATION MANAGER                                    #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t5.VIEW SALARY MANAGER                                     # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t6.VIEW SECURITY MANAGER                                   # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t\t\t###########################################################################" << endl;
  cout << "ENTER HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, condition);
  if (condition == "1")
  {
    cout << endl;
    cout << "\t\t\t ENTER EMPLOYEE ID:";
    cin >> driverid;
    passwordoftestdriver[driverid] = " ";
    nameoftestdriver[driverid] = " ";
    cout << endl;
    cout << "PROCESS COMPLETED";
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "3")
  {
    cout << endl;
    cout << "\t\t\t ENTER EMPLOYEE ID:";
    cin >> trainid;
    passwordoftesttrain[trainid] = " ";
    nameoftesttrain[trainid] = " ";
    cout << endl;
    cout << "PROCESS COMPLETED";
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "2")
  {
    cout << endl;
    cout << "\t\t\t ENTER EMPLOYEE ID:";
    cin >> computerid;
    passwordoftestcomputer[computerid] = " ";
    nameoftestcomputer[computerid] = " ";
    cout << endl;
    cout << "PROCESS COMPLETED";
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "4")
  {
    cout << endl;
    cout << "\t\t\t ENTER EMPLOYEE ID:";
    cin >> managerid;
    passwordoftestmanager[managerid] = " ";
    nameoftestmanager[managerid] = " ";
    cout << endl;
    cout << "PROCESS COMPLETED";
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "5")
  {
    cout << endl;
    cout << "\t\t\t ENTER EMPLOYEE ID:";
    cin >> salaryid;
    passwordoftestsalary[salaryid] = " ";
    nameoftestsalary[salaryid] = " ";
    cout << endl;
    cout << "PROCESS COMPLETED";
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "6")
  {
    cout << endl;
    cout << "\t\t\t ENTER EMPLOYEE ID:";
    cin >> securityid;
    passwordoftestsecurity[securityid] = " ";
    nameoftestsecurity[securityid] = " ";
    cout << endl;
    cout << "PROCESS COMPLETED";
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "7")
  {
    maincheck++;
    main();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}

void adminview2()
{
  SetConsoleTextAttribute(hConsole, 2);
  system("cls");
  cout << endl;
  cout << endl;
  cout << "\t\t\t    ################################\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t           ADMIN PORTAL\t\t\t" << endl;
  cout << endl;
  cout << "\t\t\t    #################################\t\t\t" << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void optionDetailView()
{
back:
  driveradddetailviewportal();
  string condition;
  SetConsoleTextAttribute(hConsole, 10);
  cout << "\t\t\t###########################################################################" << endl;
  cout << "\t\t\t#\t\t1.VIEW DRIVER                                             #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t2.VIEW  COMPUITER ENGINEER                                #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t3.VIEW TRAIN ENGINEER                                     #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t4.VIEW STATION MANAGER                                    #" << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t5.VIEW SALARY MANAGER                                     # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t6.VIEW SECURITY MANAGER                                   # " << endl;
  cout << "\t\t\t#                                                                         #" << endl;
  cout << "\t\t\t#\t\t7.EXIT                                                    #" << endl;
  cout << "\t\t\t###########################################################################" << endl;
  cout << endl;
  cout << "ENTER HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, condition);
  if (condition == "1")
  {
    int x = 0;
    driveradddetailviewportal();
    for (int x = 1; drivercinc[x] != "\0"; x++)
    {
      cout << endl;
      cout << "\t\t                     || DRIVER " << x << "||";
      cout << endl;
      cout << endl;
      cout << "\t\t  NAME:" << drivername[x];
      cout << endl;
      cout << "\t\t  SALARY:" << driversalary[x];
      cout << endl;
      cout << "\t\t  DATE OF BIRTH:" << driverdateofbirth[x];
      cout << endl;
      cout << "\t\t  CINC:" << drivercinc[x];
      cout << endl;
      cout << "----------------------------------------------" << endl;
    }
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }

  else if (condition == "2")
  {
    int x = 0;
    driveradddetailviewportal();
    for (int x = 1; drivercinc[x] != "\0"; x++)
    {
      cout << endl;
      cout << "\t\t                     || COMPUTER ENGINEER " << x << "||";
      cout << endl;
      cout << endl;
      cout << "\t\t  NAME:" << computername[x];
      cout << endl;
      cout << "\t\t  SALARY:" << computersalary[x];
      cout << endl;
      cout << "\t\t  DATE OF BIRTH:" << computerdateofbirth[x];
      cout << endl;
      cout << "\t\t  CINC:" << computercinc[x];
      cout << endl;
      cout << "----------------------------------------------" << endl;
    }
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "3")
  {
    int x = 0;
    driveradddetailviewportal();
    for (int x = 1; drivercinc[x] != "\0"; x++)
    {
      cout << endl;
      cout << "\t\t                     || TRAIN ENGINEER " << x << "||";
      cout << endl;
      cout << endl;
      cout << "\t\t  NAME:" << trainname[x];
      cout << endl;
      cout << "\t\t  SALARY:" << trainsalary[x];
      cout << endl;
      cout << "\t\t  DATE OF BIRTH:" << traindateofbirth[x];
      cout << endl;
      cout << "\t\t  CINC:" << traincinc[x];
      cout << endl;
      cout << "----------------------------------------------" << endl;
    }
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "4")
  {
    int x = 0;
    driveradddetailviewportal();
    for (int x = 1; drivercinc[x] != "\0"; x++)
    {
      cout << endl;
      cout << "\t\t                     || STATION MANAGER " << x << "||";
      cout << endl;
      cout << endl;
      cout << "\t\t  NAME:" << managername[x];
      cout << endl;
      cout << "\t\t  SALARY:" << managersalary[x];
      cout << endl;
      cout << "\t\t  DATE OF BIRTH:" << managerdateofbirth[x];
      cout << endl;
      cout << "\t\t  CINC:" << managercinc[x];
      cout << endl;
      cout << "----------------------------------------------" << endl;
    }
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "5")
  {
    int x = 0;
    driveradddetailviewportal();
    for (int x = 1; drivercinc[x] != "\0"; x++)
    {
      cout << endl;
      cout << "\t\t                     || SALARY MANAGER  " << x << "||";
      cout << endl;
      cout << endl;
      cout << "\t\t  NAME:" << salaryname[x];
      cout << endl;
      cout << "\t\t  SALARY:" << salarysalary[x];
      cout << endl;
      cout << "\t\t  DATE OF BIRTH:" << salarydateofbirth[x];
      cout << endl;
      cout << "\t\t  CINC:" << salarycinc[x];
      cout << endl;
      cout << "----------------------------------------------" << endl;
    }
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }

  else if (condition == "6")
  {
    int x = 0;
    driveradddetailviewportal();
    for (int x = 1; drivercinc[x] != "\0"; x++)
    {
      cout << endl;
      cout << "\t\t                     || SECURITY MANAGER " << x << "||";
      cout << endl;
      cout << endl;
      cout << "\t\t  NAME:" << securityname[x];
      cout << endl;
      cout << "\t\t  SALARY:" << securitysalary[x];
      cout << endl;
      cout << "\t\t  DATE OF BIRTH:" << securitydateofbirth[x];
      cout << endl;
      cout << "\t\t  CINC:" << securitycinc[x];
      cout << endl;
      cout << "----------------------------------------------" << endl;
    }
    cout << endl;
    system("pause");
    adminview2();
    admin2();
  }
  else if (condition == "7")
  {
    maincheck++;
    main();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}
int test()
{
  bool condition = true, checkit = true;
  string start;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 6);
  cout << "                         ********************" << endl;
  cout << "                          TRAIN DRIVER TEST " << endl;
  cout << "                         ********************" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER 1 FOR TEST START:";
  getline (cin ,start);
  cout << endl;
  if (start == "1")
  {
    cout << "\t\tBE PREPARE TEST START AFTER:    sec" << endl;
  //  sec();
    cout << endl;
    cout << endl;
  mcq1check:
    cout << "\t\t1.When a person suddenly come in front of you" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Stop The Train                        b) Not stop" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[0]);
    // cin.ignore();
    if ((testans[0] != "a") && (testans[0] != "b"))
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto mcq1check;
    }
    cout << endl;
  mcq2check:
    cout << "\t\t2.What is the speed of orange line train" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 40km/hour                             b) 80km/hour" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[1]);
    cin.ignore();
    if ((testans[1] != "a") && (testans[1] != "b"))
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto mcq2check;
    }
    cout << endl;
  mcq3check:
    cout << "\t\t3.How many maximum Passengers seated in orange line train" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 500                             b) 800" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[2]);
    if ((testans[2] != "a") && (testans[2] != "b"))
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto mcq3check;
    }
    cout << endl;
  mcq4check:
    cout << "\t\t4.What is  the driver first priorty " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Reached the passenger timely                            b)Take all the passenger From the station" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[3]);
    if ((testans[3] != "a") && (testans[3] != "b"))
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto mcq4check;
    }
    cout << endl;
  mcq5check:
    cout << "\t\t5.What you rsalry expectations" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 50k                             b) 100k" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[4]);
    if ((testans[4] != "a") && (testans[4] != "b"))
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto mcq5check;
    }
    for (int x = 0; x < 5; x++)
    {
      int y = 1;
      if (y == 1)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 2)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 3)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
       else if (y == 4)
       {
         if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 5)
      {
        if (testans[x] == "a")
        {
          count[x] = 1;
          cout << count;
        }
        else
        {
          count[x] = 0;
        }
      }
      y++;
    }
    for (int y = 0; y < 5; y++)
    {
      total = total + count[y];
      // cout<<"Total:"<<total;
    }

    if (total >= 3)
    {
       bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
      system("cls");
      int exit;
      SetConsoleTextAttribute(hConsole, 2);
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
      cout << endl;
      cout << "                           YOUR MARKS ARE:" << total;
      cout << endl;
      cout << endl;

      driverid = driverid + 1;
      cout << "                           YOU EMPLOYEE ID IS:" << driverid;
      cout << endl;
      cout << endl;
    name:
      cout << "                            ENTER NAME:   ";
      getline(cin, nameoftestdriver[driverid]);
      //   cin.ignore();
      if (checkname(nameoftestdriver[driverid], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag = true;
      }
      else if (spacecheck(nameoftestdriver[driverid], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag3 = true;
      }
    passwoo:
      cout << endl;
      cout << "                            ENTER PASSWORD:   ";
      getline(cin, passwordoftestdriver[driverid]);
      if (checkpassword(passwordoftestdriver[driverid], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
      }
      else if (spacecheck(passwordoftesthead[headid], testflag4) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
        testflag4 = true;
      }
      cout << endl;

      cout << endl;
      cout << endl;
      cout << "                   NOTE:KEEP YOUR PASSWORD SECRET AND PUT THIS ON YOUR LOGIN  " << endl;
      cout << endl;
      cout << endl;
      system("pause");
      jobview();
    }
    else if (total < 3)
    {
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
      cout << endl;
      cout << "                   YOUR MARKS ARE:  " << total;
      cout << endl;
      system("pause");
      jobview();
    }
  }
  else
  {
    testvalidate();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
bool mcqcheck(string answer, bool condition)
{
  if ((answer != "a") && (answer != "b"))
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    condition = false;
    return condition;
  }
}
bool spacecheck(string na, bool flagpass)
{
  for (int x = 0; na[x] != '\0'; x++)
  {
    if (na[x] == ' ')
    {
      flagpass = false;
      break;
    }
  }
  return flagpass;
}

void testview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << endl;
  cout << endl;
  cout << "\t\t**********************************" << endl;
  cout << endl;
  cout << "\t\t         TESTING  PORTAL      " << endl;
  cout << endl;
  cout << "\t\t**********************************" << endl;
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void resultview()
{
  system("cls");
  cout << "                                         ******************** " << endl;
  cout << "                                             RESULT PORTAL   " << endl;
  cout << "                                         ******************** " << endl;
}
void sec()
{
  int x = 45, y = 16;
  for (int sec = 20; sec > 0; sec--)
  {

    gotoxy(x, y);
    cout << sec;
    Sleep(300);
    gotoxy(x, y);
    cout << " ";
  }
  // cout<<"time over";
}
void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void testvalidate()
{
  testview();
  test();
}
void test2()
{
  string start;
  bool condition = true;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 6);
  cout << "                         ********************" << endl;
  cout << "                          TRAIN ENGINEER TEST " << endl;
  cout << "                         ********************" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER 1 FOR TEST START:";
  getline(cin , start);
  cout << endl;
  if (start == "1")
  {
    cout << "\t\tBE PREPARE TEST START AFTER:    sec" << endl;
    sec();
    cout << endl;
    cout << endl;
  mcq1check:
    cout << "\t\t1.When a train does not perform his original speed" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Check the engine                           b) Change the oil " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin,testans[0]);
    cout << endl;
     if ((testans[0] != "a") && (testans[0]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq1check;
    }
  
  mcq2check:
    cout << "\t\t2.When train light does not perform good" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) change the light                             b) repair the light" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[1]);
     if ((testans[1] != "a") && (testans[1]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq2check;
   }
    
    cout << endl;
  mcq3check:
    cout << "\t\t3.What is the velocity formula" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) s*t                             b)s/t " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[2]);
    if ((testans[2] != "a") && (testans[2]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq3check;
   }
    
    cout << endl;
  mcq4check:
    cout << "\t\t4.What is  the Engineer first priotry " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) change the parts                            b)Repair the parts" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[3]);
    if ((testans[3] != "a") && (testans[3]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto mcq4check;
   }
    
    cout << endl;
  mcq5check:
    cout << "\t\t5.What you salary expectations" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 50k                             b) 100k" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[4]);
    if ((testans[4] != "a") && (testans[4]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq5check;
   }
    
    for (int x = 0; x < 5; x++)
    {
      int y = 1;
      if (y == 1)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 2)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 3)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 4)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 5)
      {
        if (testans[x] == "a")
        {
          count[x] = 1;
          cout << count;
        }
        else
        {
          count[x] = 0;
        }
      }
      y++;
    }
    for (int y = 0; y < 5; y++)
    {
      total = total + count[y];
    }
    if (total >= 3)
    {
       bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
      system("cls");
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
      cout << endl;
      cout << "                            YOUR MARKS ARE:" << total;
      cout << endl;
      cout << endl;
      trainid = trainid + 1;
      cout << "                           YOU EMPLOYEE ID IS:" << trainid;
      cout << endl;
    name:
      cout << "                            ENTER NAME:   ";
      getline(cin, nameoftesttrain[trainid]);
      if (checkname(nameoftesttrain[trainid], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag = true;
      }
      else if (spacecheck(nameoftesttrain[trainid], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag3 = true;
      }
      cout << endl;
      cout << endl;
    passwoo:
      cout << "                            ENTER PASSWORD:   ";
      cin >> passwordoftesttrain[trainid];
      if (checkpassword(passwordoftesttrain[trainid], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
      }
      else if (spacecheck(passwordoftesttrain[trainid], testflag4) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
        testflag4 = true;
      }
      cout << endl;
      cout << endl;
      cout << "                   NOTE:KEEP YOUR PASSWORD AND PUT THIS ON YOUR LOGIN PORTAL " << endl;
      cout << endl;
      system("pause");
       jobview();
    }
    else if (total < 3)
    {
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
      cout << endl;
      cout << "                   YOUR MARKS ARE:  " << total;
      cout << endl;
      system("pause");
      jobview();
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    testvalidate2();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void testvalidate2()
{
  testview();
  test2();
}

void test3()
{
  bool condition = true;
  string start;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 6);
  cout << "                         ********************" << endl;
  cout << "                          TRAIN MANAGER TEST " << endl;
  cout << "                         ********************" << endl;
  cout << endl;
  cout << endl;
  back:
  cout << "\t\tENTER 1 FOR TEST START:";
  getline(cin,start);

  if (start == "1")
  {
    cout << "\t\tBE PREPARE TEST START AFTER:    sec" << endl;
    sec();
    cout << endl;
    cout << endl;
  testmcq1check:
    cout << "\t\t1.Which is the best solution of problem" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Fired the people                           b) Give a chance " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[0]);
    if ((testans[0] != "a") && (testans[0]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto testmcq1check;
   }
    
    cout << endl;
  testmcq2check:
    cout << "\t\t2.What you do when anyone abuse you" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Fired the people                             b) Ask the reason" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[1]);
    if ((testans[1] != "a") && (testans[1]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto testmcq2check;
   }
    cout << endl;
  testmcq3check:
    cout << "\t\t3.Do you respect other people" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) No                             b)Yes " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[2]);
    if ((testans[2] != "a") && (testans[2]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto testmcq3check;
   }
    cout << endl;
  testmcq4check:
    cout << "\t\t4.What is your first priorty " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Respect the people                           b) Follow the rule" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[3]);
if ((testans[3] != "a") && (testans[3]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto testmcq4check;
   }
    cout << endl;
  mcq5check:
    cout << "\t\t5.What you salary expectations" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 100k                             b) 150k" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[4]);
     if ((testans[4] != "a") && (testans[4]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq5check;
   }
    for (int x = 0; x < 5; x++)
    {
      int y = 1;
      if (y == 1)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 2)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 3)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 4)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 5)
      {
        if (testans[x] == "a")
        {
          count[x] = 1;
          cout << count;
        }
        else
        {
          count[x] = 0;
        }
      }
      y++;
    }
    for (int y = 0; y < 5; y++)
    {
      total = total + count[y];
    }
    if (total >= 3)
    {
      bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
      system("cls");
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
      cout << endl;
      cout << "                            YOUR MARKS ARE:" << total;
      cout << endl;
      cout << endl;
      managerid = managerid + 1;
      cout << "                           YOU EMPLOYEE ID IS:" << managerid;
      cout << endl;
      cout << endl;
    name:
      cout << "                            ENTER NAME:   ";
      getline(cin, nameoftestmanager[managerid]);
      cout << endl;
      if (checkname(nameoftestmanager[managerid], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag = true;
      }
      else if (spacecheck(nameoftestmanager[managerid], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag3 = true;
      }
    passwoo:
      cout << "                            ENTER PASSWORD:   ";
      getline(cin, passwordoftestmanager[managerid]);
      if (checkpassword(passwordoftestmanager[managerid], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
      }
      else if (spacecheck(passwordoftestmanager[managerid], testflag4) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
        testflag4 = true;
      }
      cout << endl;
      cout << endl;
      cout << "                   NOTE:KEEP YOUR PASSWORD SECRET AND PUT THIS ON YOUR LOGIN PORTAL " << endl;
      cout << endl;
      system("pause");
      jobview();
    }
    else if (total < 3)
    {
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
      cout << endl;
      cout << "                   YOUR MARKS ARE:  " << total;
      cout << endl;
      system("pause");
      jobview();
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto back;
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void testvalidate3()
{
  testview();
  test3();
}
void testvalidate5()
{
  testview();
  test5();
}
void test5()
{
  bool condition = true;
  string start;
  int testcode = 5434;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 6);
  cout << "                         ********************" << endl;
  cout << "                          SECURITY MANGER TEST " << endl;
  cout << "                         ********************" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER 1 FOR TEST START:";
  getline (cin ,start);
  cout << endl;
  if (start == "1")
  {
    cout << "\t\tBE PREPARE TEST START AFTER:    sec" << endl;
     sec();
    cout << endl;
    cout << endl;
  mcq1check:
    cout << "\t\t1.What is Your Favourite gun" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) tesur bomba                           b) AK-47 " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[0]);
    if ((testans[0] != "a") && (testans[0]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq1check;
   }
    
    cout << endl;
  mcq2check:
    cout << "\t\t2.What you first thing do when terrorist attack on train" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Call the police                             b) Rang alert bell" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[1]);
    if ((testans[1] != "a") && (testans[1]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto mcq2check;
   }
    cout << endl;
  mcq3check:
    cout << "\t\t3.How you traet other peoples" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta)  Not respectful                            b) Respectful " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[2]);
    cout << endl;
    if ((testans[2] != "a") && (testans[2]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq3check;
   }
  mcq4check:
    cout << "\t\t4.What is  the Security Manager first  priotry " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) Kill the terrorist                         b)Safe other people" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[3]);
    if ((testans[3] != "a") && (testans[3]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq4check;
   }
    cout << endl;
  mcq5check:
    cout << "\t\t5.What you salary expectations" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 50k                             b) 100k" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[4]);
    if ((testans[4] != "a") && (testans[4]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq5check;
   }
    for (int x = 0; x < 5; x++)
    {
      int y = 1;
      if (y == 1)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 2)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 3)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 4)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 5)
      {
        if (testans[x] == "a")
        {
          count[x] = 1;
          cout << count;
        }
        else
        {
          count[x] = 0;
        }
      }
      y++;
    }
    for (int y = 0; y < 5; y++)
    {
      total = total + count[y];
    }
    if (total >= 3)
    {
      bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
      system("cls");
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
      cout << endl;
      cout << "                            YOUR MARKS ARE:" << total;
      cout << endl;
      cout << endl;
      securityid = securityid + 1;
      cout << "                           YOU EMPLOYEE ID IS:" << securityid;
      cout << endl;
      cout << endl;
    name:
      cout << "                            ENTER NAME:   ";
      getline(cin, nameoftestsecurity[securityid]);
      if (checkname(nameoftestsecurity[securityid], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag = true;
      }
      else if (spacecheck(nameoftestsecurity[securityid], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag3 = true;
      }

    passwoo:
      cout << "                            ENTER PASSWORD:   ";
      getline(cin, passwordoftestsecurity[securityid]);
      if (checkpassword(passwordoftestsecurity[securityid], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
      }
      else if (spacecheck(passwordoftestsecurity[securityid], testflag4) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
        testflag4 = true;
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "                   NOTE:KEEP YOUR PASSWORD SECRET AND PUT THIS ON YOUR LOGIN PORTAL " << endl;
      cout << endl;
      system("pause");
      jobview();
    }
    else if (total < 3)
    {
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
      cout << endl;
      cout << "                   YOUR MARKS ARE:  " << total;
      cout << endl;
      system("pause");
      jobview();
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    testvalidate5();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void testvalidate6()
{
  testview();
  test6();
}
void test6()
{

  bool condition = true;
  string start;
  int testcode6 = 6545;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 6);
  cout << "                         ********************" << endl;
  cout << "                          SALARY MANGER TEST " << endl;
  cout << "                         ********************" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER 1 FOR TEST START:";
  getline (cin ,start);
  cout << endl;
  if (start == "1")
  {
    cout << "\t\tBE PREPARE TEST START AFTER:    sec" << endl;
     sec();
    cout << endl;
    cout << endl;
  mcq1check:
    cout << "\t\t1.What is the averge formula" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) total/sum                           b) sum/total number " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[0]);
    if ((testans[0] != "a") && (testans[0]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto mcq1check;
   }
    
    cout << endl;
  mcq2check:
    cout << "\t\t2.What is result of (2/3)*5=" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 30                             b) 20" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[1]);
    if ((testans[1] != "a") && (testans[1]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto mcq2check;
   }
    cout << endl;
  mcq3check:
    cout << "\t\t3.Which operator has highest opertor" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) ||                             b) && " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[2]);
    if ((testans[2] != "a") && (testans[2]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq3check;
   }
    cout << endl;
  mcq4check:
    cout << "\t\t4.cube has  " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 5 sides                            b) 6 sides" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[3]);
    if ((testans[3] != "a") && (testans[3]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq4check;
   }
    cout << endl;
  mcq5check:
    cout << "\t\t5.What you salary expectations" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 50k                             b) 100k" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[4]);
     if ((testans[4] != "a") && (testans[4]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq5check;
   }
    for (int x = 0; x < 5; x++)
    {

      int y = 1;
      if (y == 1)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 2)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 3)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 4)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 5)
      {
        if (testans[x] == "a")
        {
          count[x] = 1;
          cout << count;
        }
        else
        {
          count[x] = 0;
        }
      }
      y++;
    }
    for (int y = 0; y < 5; y++)
    {
      total = total + count[y];
    
    }
    if (total >= 3)
    {
      bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
      system("cls");
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
      cout << endl;
      cout << "                            YOUR MARKS ARE:" << total;
      cout << endl;
      cout << endl;
      salaryid = salaryid + 1;
      cout << "                           YOU EMPLOYEE ID IS:" << salaryid;
      cout << endl;
      cout << endl;
    name:
      cout << "                            ENTER NAME:   ";
      cin >> nameoftestsalary[salaryid];
      if (checkname(nameoftestsalary[salaryid], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag = true;
      }
      else if (spacecheck(nameoftestsalary[salaryid], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag3 = true;
      }
    passwoo:
      cout << "                            ENTER PASSWORD:   ";
      cin >> passwordoftestsalary[salaryid];
      if (checkpassword(passwordoftestsalary[salaryid], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 7);
        cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
      }
      else if (spacecheck(passwordoftestsalary[salaryid], testflag4) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
        testflag3 = true;
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "                   NOTE:KEEP YOUR PASSWORD SECRET AND PUT THIS ON YOUR LOGIN PORTAL " << endl;
      cout << endl;
      system("pause");
      jobview();
    }
    else if (total < 3)
    {
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
      cout << endl;
      cout << "                   YOUR MARKS ARE:  " << total;
      cout << endl;
      system("pause");
      jobview();
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    testvalidate6();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void testvalidate7()
{
  testview();
  test7();
}
void test7()
{
  bool condition = true;
  int input;
  string start;
  string codecheck;
  int managercode;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 7);
  cout << "                         ********************" << endl;
  cout << "                              ADMIN TEST " << endl;
  cout << "                         ********************" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR MANAGER ID:";
  cin >> managerid;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR PASSWORD:";
  cin>>codecheck;

  if (codecheck == passwordoftestmanager[managerid])
  {
    cout << "\t\tENTER 1 FOR TEST START:";
    cin >>start;
    cout << endl;
    if (start == "1")
    {
       cout<<"\t\tBE PREPARE TEST START AFTER:    sec"<<endl;
       sec();
      cout << endl;
      cout << endl;
    mcq1check:
      cout << "\t\t1.What you do when manager of station don't work properly" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 7);
      cout << "\t\ta) fired                           b) Discuss the matter " << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 6);
      cout << "\t\tEnter Your answer:";
      getline(cin, testans[0]);
      if ((testans[0] != "a") && (testans[0]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq1check;
   }
      
      
      cout << endl;
    mcq2check:
      cout << "\t\t2.When government does not give budget" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 7);
      cout << "\t\ta) stop the train                             b) incearse the prices" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 6);
      cout << "\t\tEnter Your answer:";
      getline(cin, testans[1]);
      if ((testans[1] != "a") && (testans[1]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto mcq2check;
   }
      cout << endl;
    mcq3check:
      cout << "\t\t3.How you treat other peoples" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 7);
      cout << "\t\ta) not respectful                             b) respectful " << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 6);
      cout << "\t\tEnter Your answer:";
      getline(cin, testans[2]);
    if ((testans[2] != "a") && (testans[2]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq3check;
   }
      
      
      cout << endl;
    mcq4check:
      cout << "\t\t4.What is  the admin first priotry " << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 7);
      cout << "\t\ta) Maintain the discipline                            b) Treat people like a friend" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 6);
      cout << "\t\tEnter Your answer:";
      getline(cin, testans[3]);
      cout << endl;
      if ((testans[3] != "a") && (testans[3]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq4check;
   }
    mcq5check:
      cout << "\t\t5.What you salary expectations" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 7);
      cout << "\t\ta) 150k                             b) 200k" << endl;
      cout << endl;
      SetConsoleTextAttribute(hConsole, 6);
      cout << "\t\tEnter Your answer:";
      getline(cin, testans[4]);
       if ((testans[4] != "a") && (testans[4]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq5check;
   }
      for (int x = 0; x < 5; x++)
      {
        int y = 1;
        if (y == 1)
        {
          if (testans[x] == "b")
          {
            count[x] = 1;
          }
          else
          {
            count[x] = 0;
          }
        }
        else if (y == 2)
        {
          if (testans[x] == "b")
          {
            count[x] = 1;
          }
          else
          {
            count[x] = 0;
          }
        }
        else if (y == 3)
        {
          if (testans[x] == "b")
          {
            count[x] = 1;
          }
          else
          {
            count[x] = 0;
          }
        }
        else if (y == 4)
        {
          if (testans[x] == "b")
          {
            count[x] = 1;
          }
          else
          {
            count[x] = 0;
          }
        }
        else if (y == 5)
        {
          if (testans[x] == "a")
          {
            count[x] = 1;
            cout << count;
          }
          else
          {
            count[x] = 0;
          }
        }
        y++;
      }
      for (int y = 0; y < 5; y++)
      {
        total = total + count[y];
    
      }
      if (total >= 3)
      {
        bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
        system("cls");
        resultview();
        cout << endl;
        cout << endl;
        cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
        cout << endl;
        cout << "                            YOUR MARKS ARE:" << total;
        cout << endl;
        cout << endl;
        headid = headid + 1;
        cout << "                           YOU EMPLOYEE ID IS:" << headid;
        cout << endl;
      name:
        cout << "                            ENTER NAME:   ";
        getline(cin, nameoftesthead[headid]);
        if (checkname(nameoftesthead[headid], testflag) == false)
        {
          SetConsoleTextAttribute(hConsole, 4);
          cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
          system("pause");
          SetConsoleTextAttribute(hConsole, 7);
          goto name;
          testflag = true;
        }
        else if (spacecheck(nameoftesthead[headid], testflag3) == false)
        {
          SetConsoleTextAttribute(hConsole, 4);
          cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
          system("pause");
          SetConsoleTextAttribute(hConsole, 7);
          goto name;
          testflag3 = true;
        }
        cout << endl;
      passwoo:
        cout << "                            ENTER PASSWORD:   ";
        getline(cin, passwordoftesthead[headid]);
        if (checkpassword(passwordoftesthead[headid], testflag2) == false)
        {
          SetConsoleTextAttribute(hConsole, 4);
          cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
          system("pause");
          SetConsoleTextAttribute(hConsole, 7);
          goto passwoo;
        }
        else if (spacecheck(passwordoftesthead[headid], testflag4) == false)
        {
          SetConsoleTextAttribute(hConsole, 4);
          cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
          system("pause");
          SetConsoleTextAttribute(hConsole, 7);
          goto passwoo;
          testflag4 = true;
        }
        cout << endl;
        cout << endl;
        cout << "                   NOTE:KEEP YOUR  PASSWORD AND PUT THIS ON YOUR LOGIN PORTAL " << endl;
        cout << endl;
        system("pause");
        jobview();
      }
      else if (total < 3)
      {
        resultview();
        cout << endl;
        cout << endl;
        cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
        cout << endl;
        cout << "                   YOUR MARKS ARE:  " << total;
        system("pause");
        jobview();
      }
    }

    else
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      testvalidate7();
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    cout << endl;
    cout << "\t\t\tPLEASE CLEAR FIRST MANGER TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    jobview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void testvalidate4()
{

  testview();
  test4();
}
void test4()
{
  bool condition = true;
  string start;
  int total = 0;
  int count[5];
  string testans[5];
  SetConsoleTextAttribute(hConsole, 6);
  cout << "                          ************************" << endl;
  cout << "                           COMPUTER ENGINEER TEST " << endl;
  cout << "                          ***********************" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\tENTER 1 FOR TEST START:";
  getline (cin ,start);
  cout << endl;
  if (start == "1")
  {
    cout << "\t\tBE PREPARE TEST START AFTER:    sec" << endl;
     sec();
    cout << endl;
    cout << endl;
  mcq1check:
    cout << "\t\t1.How many bytes in 1Kb" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 1000                           b) 1024 " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[0]);
    if ((testans[0] != "a") && (testans[0]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq1check;
   }
    
    cout << endl;
  mcq2check:
    cout << "\t\t2.How many types of array" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) one                             b) Two" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[1]);
    if ((testans[1] != "a") && (testans[1]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
      goto mcq2check;
   }
    
    cout << endl;
  mcq3check:
    cout << "\t\t3.Which is conditional loop" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) for loop                             b)while loop " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[2]);
    if ((testans[2] != "a") && (testans[2]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq3check;
   }
    cout << endl;
  mcq4check:
    cout << "\t\t4. (=) is the" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) equal sign                            b)assignment opertor" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[3]);
    if ((testans[3] != "a") && (testans[3]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq4check;
   }
    cout << endl;
  mcq5check:
    cout << "\t\t5.What you salary expectations" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t\ta) 50k                             b) 100k" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "\t\tEnter Your answer:";
    getline(cin, testans[4]);
     if ((testans[4] != "a") && (testans[4]!= "b"))
    {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto mcq5check;
   }
    for (int x = 0; x < 5; x++)
    {
      int y = 1;
      if (y == 1)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 2)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 3)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 4)
      {
        if (testans[x] == "b")
        {
          count[x] = 1;
        }
        else
        {
          count[x] = 0;
        }
      }
      else if (y == 5)
      {
        if (testans[x] == "a")
        {
          count[x] = 1;
          cout << count;
        }
        else
        {
          count[x] = 0;
        }
      }
      y++;
    }
    for (int y = 0; y < 5; y++)
    {
      total = total + count[y];
    
    }
    if (total >= 3)
    {
      bool testflag = false, testflag2 = true, testflag3 = true, testflag4 = true;
      system("cls");
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                        \"CONGRATULATIONS\" " << endl;
      cout << endl;
      cout << "                            YOUR MARKS ARE:" << total;
      cout << endl;
      cout << endl;
      computerid = computerid + 1;
      cout << "                           YOU EMPLOYEE ID IS:" << computerid;
      cout << endl;
      cout << endl;
    name:
      cout << "                            ENTER NAME:   ";
      getline(cin, nameoftestcomputer[computerid]);
      if (checkname(nameoftestcomputer[computerid], testflag) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag = true;
      }
      else if (spacecheck(nameoftestcomputer[computerid], testflag3) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto name;
        testflag3 = true;
      }

    passwoo:
      cout << "                            ENTER PASSWORD:   ";
      getline(cin, passwordoftestcomputer[computerid]);
      if (checkpassword(passwordoftestcomputer[computerid], testflag2) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
      }
      else if (spacecheck(passwordoftestcomputer[computerid], testflag4) == false)
      {
        SetConsoleTextAttribute(hConsole, 4);
        cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
        system("pause");
        SetConsoleTextAttribute(hConsole, 7);
        goto passwoo;
        testflag4 = true;
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "                   NOTE:KEEP YOUR PASSWORD SECRET AND PUT THIS ON YOUR LOGIN PORTAL " << endl;
      cout << endl;
      system("pause");
      jobview();
    }
    else if (total < 3)
    {
      resultview();
      cout << endl;
      cout << endl;
      cout << "\t\t                                           \"CONGRATULATIONS YOU FAILED\" " << endl;
      cout << endl;
      cout << "                   YOUR MARKS ARE:  " << total;
      cout << endl;
      system("pause");
      jobview();
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    testvalidate4();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
/*HERE TAKE INPUT STAION*/
void inputStation()
{
  SetConsoleTextAttribute(hConsole, 4);
  cout << endl;
  cout << "\t\t\t*************" << endl;
  cout << "\t\t\tSTATION LIST" << endl;
  cout << "\t\t\t*************" << endl;
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
  showstation();
  SetConsoleTextAttribute(hConsole, 6);
  for (int x = 0; x < 1; x++)
  {
    cout << endl;
    cout << endl;
    cout << "\t\tENTER YOUR  CURRENT STATION:";
    getline(cin, currentStation[x]);
    cout << endl;
    cout << "\t\tENTER YOUR DESTINATION:";
    getline(cin, arrivalStation[x]);
    
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void inputStation2()
{
  cout << endl;
  cout << "\t\t\t*************" << endl;
  cout << "\t\t\tSTATION LIST" << endl;
  cout << "\t\t\t*************" << endl;
  cout << endl;
  cout << endl;
  showstation();

  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR  CURRENT STATION:";
  cin >> currentStation2;
  cout << endl;
  cout << "\t\tENTER YOUR DESTINATION:";
  cin >> arrivalStation2;
}
void showstation()
{
  SetConsoleTextAttribute(hConsole, 6);
  cout << "      *********************************************************************" << endl;
  cout << endl;
  for (int x = 0; x < 18; x++)
  {
    cout << "\t " << x + 1 << ". " << station[x];
    if (x % 4 == 0)
    {
      cout << endl;
      cout << endl;
    }
  }
  cout << endl;
  cout << endl;
  cout << "      ********************************************************************";
  SetConsoleTextAttribute(hConsole, 7);
}
/*HERE VALIDATE AND CALCULATE DISTANCE*/
int validatestation()
{
  int count = 0, currentditance, arrivaldistance, totaldistance;
  bool flag = true, flag2 = true;
  for (int y = 0; y < 1; y++)
  {
    for (int x = 0; x < 18; x++)
    {
      if (currentStation[y] == station[x])
      {
        currentditance = x + 1;
        flag = false;
      }
    }
  }
  if (flag == true)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "STATION NOT FOUND";
    SetConsoleTextAttribute(hConsole, 7);
  }
  for (int y = 0; y < 1; y++)
  {
    for (int x = 0; x < 18; x++)
    {
      if (arrivalStation[y] == station[x])
      {
        arrivaldistance = x + 1;
        flag2 = false;
      }
    }
  }
  if (flag2 == true)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "STATION NOT FOUND" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    maincheck++;
    main();
  }
  totaldistance = currentditance - arrivaldistance;
  if (totaldistance < 0)
  {
    return -totaldistance;
  }
  else if (totaldistance > 0)
  {
    return totaldistance;
  }
}
int validatestation2()
{
  int count = 0, currentditance, arrivaldistance, totaldistance;
  bool flag = true, flag2 = true;


  for (int x = 0; x < 18; x++)
  {

    if (currentStation2 == station[x])
    {

      currentditance = x + 1;
      flag = false;
    }
  }
  
  if (flag == true)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "STATION NOT FOUND";
    SetConsoleTextAttribute(hConsole, 7);
  }
  
  for (int x = 0; x < 18; x++)
  {
    if (arrivalStation2 == station[x])
    {
      arrivaldistance = x + 1;
      flag2 = false;
    }
    
  }
  if (flag2 == true)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "STATION NOT FOUND" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    maincheck++;
    main();
  }
  totaldistance = currentditance - arrivaldistance;
  if (totaldistance < 0)
  {
    return -totaldistance;
  }
  else if (totaldistance > 0)
  {
    return totaldistance;
  }
}
void cardportalview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << "\t\t\t*************************************" << endl;
  cout << endl;
  cout << "                  \t\tWELCOME TO CARD PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t*************************************" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
string cardoption()
{
  SetConsoleTextAttribute(hConsole, 6);
  string option;
  cout << "\t\t\t1.SIGN IN" << endl;
  cout << endl;
  cout << "\t\t\t2.SIGN UP" << endl;
  cout << endl;
  cout << "\t\t\t3.VIEW" << endl;
  cout << endl;
  cout << "\t\t\t4.EXIT" << endl;
  cout << endl;
  cout << "ENTER OPTION HERE:";
  SetConsoleTextAttribute(hConsole, 7);
  getline(cin, option);
  return option;
}
/*HERE IS THE SIGNUP CALL FOR MAKING CARD*/
void sigup()
{
  SetConsoleTextAttribute(hConsole, 6);
  int sizeofpassword;
  string date, month, year, pass;
  bool flagname = false, flagpass = true, flagpass2 = true, testflag3 = true, testflag4 = true, testflag5 = true, testflag6 = true;
  int checkdate, checkmonth, checkyear, sizeofcinc;
  string returnoption, conditionCheck;
  SetConsoleTextAttribute(hConsole, 6);
  int x = cardcount + 1;
namee:
  cout << endl;
  cout << "\t\tENTER YOUR NAME:";
  getline(cin, name[x]);

  if (checkname(name[x], flagname) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(PLZ DON'T ENTER INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto namee;
  }
  else if (spacecheck(name[x], testflag3) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto namee;
    testflag3 = true;
  }
  cout << endl;
passi:
  cout << "\t\tENTER YOUR PASSWORD:";
  getline(cin, password[x]);
  cout << endl;
  if (checkpassword(password[x], flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( INTEGER ONLY)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto passi;
  }
  else if (spacecheck(password[x], testflag4) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto passi;
    testflag3 = true;
  }
  cout << "\t\tENTER YOUR DATE OF BIRTH:" << endl;
  dateofbirth[x] = dateofBirthcheck();
balancee:
  cout << "\t\tENTER YOUR BALANCE:";
  getline(cin, balance[x]);
  cout << endl;
  if (checkpassword(balance[x], flagpass2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( INTEGER ONLY)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto balancee;
  }
  else if (convertint(balance[x]) < 100)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( LOAD MUST BE GREATER THAN 100 )" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto balancee;
  }
  else if (spacecheck(balance[x], testflag5) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto balancee;
    testflag3 = true;
  }
cincc:
  cout << "\t\tENTER YOUR CINC:";
  getline(cin, cinc[x]);
  cout << endl;
  sizeofcinc = cinc[x].length();
  if (sizeofcinc != 13)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto cincc;
  }
  else if (checkpassword(cinc[x], flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto cincc;
  }
  else if (spacecheck(cinc[x], testflag6) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(DON'T ENTER SPACE)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto passi;
    testflag3 = true;
  }
  SetConsoleTextAttribute(hConsole, 2);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "\t###############################################" << endl;
  cout << "\t\tWHEN YOU TRAVEL YOUR CARD NUMBER IS:" << x;
  cout << endl;
  cout << "\t##############################################" << endl;
  cardcount++;
  cout << endl;
  cout << endl;
  cout << "\t################################################################" << endl;
  cout << "\t\tCONGRATS NOW YOU ARE MEMBER OF OUR PASSENGER LIST" << endl;
  cout << "\t################################################################" << endl;
  system("pause");
  SetConsoleTextAttribute(hConsole, 7);
  maincheck++;
  main();
  SetConsoleTextAttribute(hConsole, 7);
}
bool checkname(string names, bool flagname)
{
  for (int a = 0; names[a] != '\0'; a++)
  {
    for (int z = 65; z <= 122; z++)
    {
      if (names[a] == z)
      {
        flagname = true;
      }
    }
  }

  return flagname;
}
bool checkname2(string names, bool flagname)
{
  for (int a = 0; names[a] != '\0'; a++)
  {

    if ((names[a] == '0') || (names[a] == '1') || (names[a] == '2') || (names[a] == '3') || (names[a] == '4') || (names[a] == '5') || (names[a] == '6') || (names[a] == '7') || (names[a] == '8') || (names[a] == '9'))
    {
      cout << "1";
      flagname = true;
      break;
    }
  }

  return flagname;
}
bool checkpassword(string temprent, bool flagpass)
{

  for (int i = 0; temprent[i] != '\0'; i++)
  {
    if (temprent[i] != '0' && temprent[i] != '1' && temprent[i] != '2' && temprent[i] != '3' && temprent[i] != '4' && temprent[i] != '5' && temprent[i] != '6' && temprent[i] != '7' && temprent[i] != '8' && temprent[i] != '9')
    {
      flagpass = false;
    }
  }
  return flagpass;
}

void savecardData()
{
  fstream myfile3;
  myfile3.open("card.txt", ios::out);
  for (int x = 1; x <= cardcount; x++)
  {
    // cout << name[x];
    myfile3 << name[x] << " ";
    myfile3 << password[x] << " ";
    myfile3 << dateofbirth[x] << " ";
    myfile3 << balance[x] << endl;
  }
  myfile3.close();
}
void loadcardData()
{
  fstream lfile3;
  lfile3.open("card.txt", ios::in);
  for (int x = 1; x <= cardcount; x++)
  {
    // cout << name[x];
    lfile3 >> name[x];
    lfile3 >> password[x];
    lfile3 >> dateofbirth[x];
    lfile3 >> balance[x];
  }
  lfile3.close();
}
void storecardCount()
{
  // cout<<"a";
  fstream myfile4;
  myfile4.open("cardid.txt", ios::out);
  myfile4 << cardcount << endl;
  myfile4 << seatcount;
  myfile4.close();
}
void loadcardCount()
{
  fstream file4;
  file4.open("cardid.txt", ios::in);
  file4 >> cardcount;
  file4 >> seatcount;
  file4.close();
}

void signin()
{
  system("cls");
  signinview();
  bool flag = false;
  SetConsoleTextAttribute(hConsole, 6);
  string passwordcheck, namecheck;
  cout << "ENTER YOUR NAME:";
  cin >> namecheck;
  cout << "ENTER YOUR PASSWORD:";
  cin >> passwordcheck;
  cout << endl;
  for (int x = 0; x < 30; x++)
  {
    if ((passwordcheck == password[x]) && (namecheck == name[x]))
    {
      flag == true;
      inputStation2();
      totaldistance = validatestation2();
      print(totaldistance);
      break;
    }
  }
  if (flag == false)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << "PLEASE SIGN UP FIRST" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    maincheck++;
    main();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
int signincheck()
{
  system("cls");
  signinview();
  int answer = 0;
  SetConsoleTextAttribute(hConsole, 6);
  string passwordcheck, namecheck;
  cout << "ENTER YOUR CARD NAME:";
  cin >> namecheck;
  cout << "ENTER YOUR CARD PASSWORD:";
  cin >> passwordcheck;
  cout << endl;

  for (int x = 0; x < 30; x++)
  {

    if ((passwordcheck == password[x]) && (namecheck == name[x]))
    {

      answer = 1;
      break;
    }
  }
  if (answer == 0)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "ONLY CARD MEMBERS BOOK ONLINE SEAT" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    maincheck++;
    main();
  }
  return answer;
  SetConsoleTextAttribute(hConsole, 7);
}

void print(int distance)
{
  SetConsoleTextAttribute(hConsole, 10);
  int seatnumber, newbalance, locationofbalance;
  string conditioncheck, wasyhi;
  cout << endl;
  cout << "\t##############################################################################################" << endl;
  cout << "\t\tTOTAL DISTANCE THAT YOU TRAVELLED FOR YOUR STATION:" << distance << "Km" << endl;
  cout << endl;
  price = 5 * distance;
  cout << "\t\tYOUR COIN PRICE IS:" << price << endl;
  cout << endl;
  cout << "\t##############################################################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
back:
  cout << " \t\t  ENTER 1 FOR COIN AND 0 FOR CARD:";
  getline(cin, wasyhi);
  if (wasyhi == "0")
  {
    cout << "ENTER YOUR CARD NUMBER:";
    cin >> seatnumber;
    cout << endl;
    locationofbalance = seatnumber;
    newbalance = convertint(balance[locationofbalance]) - price;
    SetConsoleTextAttribute(hConsole, 10);
    cout << "\t##################################################################################" << endl;
    cout << "\t\tYOUR REMAINING BALANCE IS:" << newbalance;
    cout << endl;
    cout << "\t##################################################################################" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    balance[locationofbalance] = to_string(newbalance);
    if (convertint(balance[locationofbalance]) <= 0)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << endl;
      cout << "\t##################################################################################" << endl;
      cout << endl;
      cout << "\t\t\tYOUR CARD IS EXPIRED PLEASE AGAIN SIGNUP";
      cout << endl;
      cout << "\t##################################################################################" << endl;
      SetConsoleTextAttribute(hConsole, 7);
      system("pause");
      maincheck++;
      main();
    }
  wapis:
    cout << "\t\t1.TRAVEL MORE                     2.STOP";
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin, conditioncheck);
    // cin.ignore();
    if (conditioncheck == "1")
    {
      signin();
    }
    else if (conditioncheck == "2")
    {
      maincheck++;
      main();
    }
    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto wapis;
    }
  }
  else if (wasyhi == "1")
  {
    cout << "HAVE A SAFE JOURNEY" << endl;
    system("pause");
    maincheck++;
    main();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto back;
  }
}
void print2(int price)
{
back:
  int seatnumber, newbalance, locationofbalance;
  cout << "ENTER YOUR CARD NUMBER:";
  cin >> seatnumber;
  if (seatnumber <= cardcount)
  {
    cout << endl;
    locationofbalance = seatnumber;
    newbalance = convertint(balance[locationofbalance]) - price;
    cout << "\t##################################################################################" << endl;
    cout << "\t\tYOUR REMAINING BALANCE IS:" << newbalance;
    cout << endl;
    cout << "\t##################################################################################" << endl;
    balance[locationofbalance] = to_string(newbalance);
    cout << "check here" << endl;
    cout << balance[locationofbalance];
    if (convertint(balance[locationofbalance]) <= 0)
    {
      cout << endl;
      cout << "\t##################################################################################" << endl;
      cout << endl;
      cout << "\t\t\tYOUR CARD IS EXPIRED PLEASE AGAIN SIGNUP";
      cout << endl;
      cout << "\t##################################################################################" << endl;
      system("pause");
      maincheck++;
      main();
    }
  }
  else
  {
    cout << "YOU ENTER WRONG CARD NUMBER";
    goto back;
  }
}
void viewdetailofcustomer()
{
  system("cls");
  int x, y;
  string z;
  cout << endl;
  if (cardcount != 0)
  {
    cout << "ENTER YOUR SEAT NUMBER";
    cin >> x;
    y = x;
    cout << "\t\t                     || CARD MEMBER " << y << "||";
    cout << endl;
    cout << endl;
    cout << "\t\tYOUR NAME:" << onlinename[y];
    cout << endl;
    cout << endl;
    cout << "\t\tYOUR PASSWORD:" << password[y];
    cout << endl;
    cout << endl;
    cout << "\t\tYOUR DATE OF BIRTH:" << dateofbirth[y];
    cout << endl;
    cout << endl;
    cout << "\t\tYOUR CINC:" << cinc[y];
    cout << endl;
    cout << endl;
    cout << "\t\tYOUR BALANCE:" << balance[y];
    cout << endl;
    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl;
  check:
    cout << endl;
    cout << "\t\t1.SEE MORE                    2.STOP     :";
    getline(cin, z);
    if (z == "1")
    {
      viewdetailofcustomer();
    }
    else if (z == "2")
    {
      maincheck++;
      main();
    }
    else
    {
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto check;
    }
  }
  else
  {
    cout << "CRAD MEMEBERS IS ZERO" << endl;
    system("pause");
  }
}
void signinview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << "\t\t\t*************************************" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO SIGNIN PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t*************************************" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void signupview()
{
  SetConsoleTextAttribute(hConsole, 6);
  system("cls");
  cout << "\t\t\t*************************************" << endl;
  cout << endl;
  cout << "                  \t\tWELCOME TO SIGNUP PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t*************************************" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
/*HERE IS THE PASSWORD VALIDATE*/
void validatepassword(string password, int sizeofpassword)
{
  int count = 0;
  for (int x = 0; x < sizeofpassword; x++)
  {
    if (password[x] == 'A' || password[x] == 'B' || password[x] == 'C' || password[x] == 'D' || password[x] == 'E' || password[x] == 'F' || password[x] == 'G')

    {
      count = count + 1;
    }
    else if (password[x] == 'H' || password[x] == 'I' || password[x] == 'J' || password[x] == 'K' || password[x] == 'L' || password[x] == 'M' || password[x] == 'N')
    {
      count = count + 1;
    }
    else if (password[x] == 'O' || password[x] == 'P' || password[x] == 'Q' || password[x] == 'R' || password[x] == 'S' || password[x] == 'T' || password[x] == 'U')
    {
      count = count + 1;
    }
    else if (password[x] == 'V' || password[x] == 'W' || password[x] == 'X' || password[x] == 'Y' || password[x] == 'Z')

    {
      count = count + 1;
    }
  }

  if (count == 0)
  {
    signupview();
    cout << "\tPASSWORD MUST CONTAIN ATLEASET ONE CAPITAL ALPHABET\t" << endl;
    sigup();
  }
}
void driverview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t###################################################" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO DRIVER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t###################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void managerview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t###################################################" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO MANAGER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t###################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void computerview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t####################################################" << endl;
  cout << endl;
  cout << "                 \t WELCOME TO COMPUTER ENGINEER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t####################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void trainview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \t WELCOME TO TRAIN ENGINEER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void salaryview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \tWELCOME TO SALARY MAANGER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void securityview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \t WELCOME TO SECURITY MANAGER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void stationview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \t WELCOME TO STATION MANAGER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void driver()
{
  driverview();

  string id;
  int x;
  bool flagpass = true;
  string codecheck, condition;
  string username;
  SetConsoleTextAttribute(hConsole, 11);
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  if (checkpassword(id, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER)" << endl;
    system("pause");
    goto checkit;
    SetConsoleTextAttribute(hConsole, 7);
  }
  x = convertint(id);
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR NAME:";
  getline(cin , username);
  cout << "\t\tENTER YOUR PASSWORD:";
  getline(cin , codecheck);
  cout << endl;
  cout << nameoftestdriver[x];
  if ((codecheck == passwordoftestdriver[x]) && (username == nameoftestdriver[x]))

  {
    check:
 driverview();
    SetConsoleTextAttribute(hConsole, 11);
    cout << endl;
    cout << "\t\t1.ATTENDENCE";
    cout << endl;
    cout << endl;
    cout << "\t\t2.ADD DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t3.VIEW DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t4.EXIT";
    cout << endl;
    cout << endl;
    cout << "ENTER HERE:";
    SetConsoleTextAttribute(hConsole, 7);
    getline(cin , condition);
    if (condition == "1")
    {
      attendenceview();
      driverattendenceportal(x);
    }
    else if (condition == "2")
    {
      driveradddetailview();
      driverdetail(x);
    }
    else if (condition == "3")
    {
      driveradddetailviewportal();
      driverdetailview(x);
    }
    else if (condition == "4")
    {
      employeeview();
    }
    else
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto check;
      SetConsoleTextAttribute(hConsole, 7);
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    system("cls");
    cout << "PLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void driverdetail(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  string id;
  int sizeofcinc;
  if (x <= 10)
  {
    bool flagname = false, flagpass = true;
    bool testflag = false;
    cout << endl;
  name:
    cout << "\t\tENTER YOUR NAME:";
    cin >> drivername[x];
    cin.ignore();
    if (checkname(drivername[x], testflag) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto name;
    }
    cout << endl;
    cout << endl;
    cout << "\t\tENTER YOUR DATE OF BIRTH:" << endl;
    driverdateofbirth[x] = dateofBirthcheck();
    cout << endl;
  cincc:
    cout << "\t\tENTER YOUR CINC:";
    getline(cin, drivercinc[x]);
    cin.ignore();
    sizeofcinc = drivercinc[x].length();
    if (sizeofcinc != 13)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    else if (checkpassword(drivercinc[x], flagpass) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }

    cout << endl;
    cout << "\t\t\t#################################################################" << endl;
    cout << "\t\t\t\t\tONLY\t" << 10 - x << "\tSEAT LEFT " << endl;
    cout << "\t\t\t#################################################################" << endl;
    system("pause");
    employeeview();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
int convertint(string data)
{
  int number;
  istringstream(data) >> number;
  return number;
}
int convertint2(string data)
{
  int number;

  istringstream(data) >> number;
  cout << number;
  system("pause");
  return number;
}
void driverdetailview(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  int condition;
  cout << "\t\t YOUR NAME:" << drivername[x];
  cout << endl;
  cout << endl;
  cout << "\t\t YOUR SALARY:" << driversalary[x];
  cout << endl;
  cout << endl;
  cout << "\t\t YOUR DATE OF BIRTH:" << driverdateofbirth[x];
  cout << endl;
  cout << endl;
  cout << "\t\t YOUR CINC:" << drivercinc[x];
  cout << endl;
  cout << endl;
  cout << "\t-----------------------------------------------------------------" << endl;
  system("pause");
  employeeview();
  SetConsoleTextAttribute(hConsole, 7);
}
void driverattendenceportal(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  string hour;
  bool testflag = true, testflag2 = true;
  int latearrival, totalmin, total;
  string arrivalhour, arrivalmin;
  cout << "\t\t\t\tYOUR DUTY TIMING IS:8 am";
  cout << endl;
  cout << endl;
  cout << "\tENTER YOUR ARRIVAL TIMING:-";
  cout << endl;
  cout << endl;
houroo:
  cout << "\tENTER HOUR:";
  getline(cin, arrivalhour);
  if (checkpassword(arrivalhour, testflag) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto houroo;
  }
  else if (convertint(arrivalhour) > 12)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 12)" << endl;
    system("pause");
    goto houroo;
  }
mintoo:
  cout << endl;
  cout << "\tENTER MIN:";
  getline(cin, arrivalmin);
  if (checkpassword(arrivalmin, testflag2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto mintoo;
  }
  else if (convertint(arrivalmin) >= 60)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 60)" << endl;
    system("pause");
    goto mintoo;
  }
  total = (convertint(arrivalhour) * 60) + convertint(arrivalmin);
  totalmin = 480 - total;
  int finalhour, finalmin, id;
  if (totalmin < 0)
  {
    checkdriverattendence[x] = checkdriverattendence[x] + 1;
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "\t\tYOU LATE " << -(finalhour) << "  HOUR "
         << " AND " << finalmin << "  MIN";
    cout << endl;
    // cout << "\t\tENTER YOUR ID:";
    // cin >> id;
    id = x;
    driverattendence[id] = driverattendence[id] + 1;
    cout << endl;
    if (driverattendence[id] <= 3)
    {
      cout << endl;
      cout << "\t\tALERT!IF YOU LATE " << 3 - driverattendence[id] << "  TIMES MORE THEN YOU WILL BE FIRED";
      cout << endl;
      cout << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      employeeview();
    }
    else if (driverattendence[id] > 3)
    {
      driveradddetailviewportal();
      optionDetailView4();
    }
  }
  else if (totalmin > 0)
  {
    checkdriverattendence[x] = checkdriverattendence[x] + 1;
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU EARLY " << finalhour << " HOUR"
         << " AND " << -finalmin << " MIN";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else if (totalmin == 0)
  {
    checkdriverattendence[x] = checkdriverattendence[x] + 1;
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU ON TIME ";
    cout << endl;
    system("pause");
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void trainattendenceportal(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  bool testflag = true, testflag2 = true;
  int  latearrival, totalmin, total;
  string arrivalhour, arrivalmin;
  cout << "\t\t\t\tYOUR DUTY TIMING IS:8 am";
  cout << endl;
  cout << endl;
  cout << "\tENTER YOUR ARRIVAL TIMING:-";
  cout << endl;
  cout << endl;
  houroo:
  cout << "\tENTER HOUR:";
  getline(cin , arrivalhour);
   if (checkpassword(arrivalhour, testflag) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto houroo;
  }
  else if (convertint(arrivalhour) > 12)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 12)" << endl;
    system("pause");
    goto houroo;
  }
  cout << endl;
  mintoo:
  cout << "\tENTER MIN:";
  getline(cin , arrivalmin);
  if (checkpassword(arrivalmin, testflag2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto mintoo;
  }
  else if (convertint(arrivalmin) >= 60)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 60)" << endl;
    system("pause");
    goto mintoo;
  }
  total = (convertint(arrivalhour) * 60) + convertint(arrivalmin);
  totalmin = 480 - total;
  int finalhour, finalmin, id;
  if (totalmin < 0)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "\t\tYOU LATE " << -(finalhour) << "  HOUR "
         << " AND " << finalmin << "  MIN";
    cout << endl;

    id = x;
    trainattendence[id] = trainattendence[id] + 1;
    cout << endl;
    if (trainattendence[id] <= 3)
    {
      cout << endl;
      cout << "\t\tALERT!IF YOU LATE " << 3 - trainattendence[id] << "  TIMES MORE THEN YOU WILL BE FIRED";
      cout << endl;
      cout << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      employeeview();
    }
    else if (trainattendence[id] > 3)
    {
      driveradddetailviewportal();
      optionDetailView4();
    }
  }
  else if (totalmin > 0)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU EARLY " << finalhour << " HOUR"
         << " AND " << -finalmin << " MIN";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else if (totalmin == 0)
  {
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU ON TIME ";
    cout << endl;
    system("pause");
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void managerattendenceportal(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  bool testflag=true,testflag2=true;
  int  latearrival, totalmin, total;
  string arrivalhour, arrivalmin;
  cout << "\t\t\t\tYOUR DUTY TIMING IS:8 am";
  cout << endl;
  cout << endl;
  cout << "\tENTER YOUR ARRIVAL TIMING:-";
  cout << endl;
  cout << endl;
  houroo:
  cout << "\tENTER HOUR:";
  getline(cin , arrivalhour);
   if (checkpassword(arrivalhour, testflag) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto houroo;
  }
  else if (convertint(arrivalhour) > 12)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 12)" << endl;
    system("pause");
    goto houroo;
  }
   mintoo:
  cout << "\tENTER MIN:";
  getline(cin , arrivalmin);
  if (checkpassword(arrivalmin, testflag2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto mintoo;
  }
  else if (convertint(arrivalmin) >= 60)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 60)" << endl;
    system("pause");
    goto mintoo;
  }
  total = (convertint(arrivalhour) * 60) + convertint(arrivalmin);
  totalmin = 480 - total;
  int finalhour, finalmin, id;
  if (totalmin < 0)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "\t\tYOU LATE " << -(finalhour) << "  HOUR "
         << " AND " << finalmin << "  MIN";
    cout << endl;

    id = x;
    managerattendence[id] = managerattendence[id] + 1;
    cout << endl;
    if (managerattendence[id] <= 3)
    {
      cout << endl;
      cout << "\t\tALERT!IF YOU LATE " << 3 - managerattendence[id] << "  TIMES MORE THEN YOU WILL BE FIRED";
      cout << endl;
      cout << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      employeeview();
    }
    else if (managerattendence[id] > 3)
    {
      driveradddetailviewportal();
      optionDetailView4();
    }
  }
  else if (totalmin > 0)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU EARLY " << finalhour << " HOUR"
         << " AND " << -finalmin << " MIN";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else if (totalmin == 0)
  {
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU ON TIME ";
    cout << endl;
    system("pause");
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void securityattendenceportal(int x)
{bool testflag = true, testflag2 = true;
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  int latearrival, totalmin, total;
  string arrivalhour, arrivalmin;
  cout << "\t\t\t\tYOUR DUTY TIMING IS:8 am";
  cout << endl;
  cout << endl;
  cout << "\tENTER YOUR ARRIVAL TIMING:-";
  cout << endl;
  cout << endl;
  houroo:
  cout << "\tENTER HOUR:";
  getline(cin , arrivalhour);
   if (checkpassword(arrivalhour, testflag) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto houroo;
  }
  else if (convertint(arrivalhour) > 12)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 12)" << endl;
    system("pause");
    goto houroo;
  }

  mintoo:
  cout << "\tENTER MIN:";
  getline(cin , arrivalmin);
  if (checkpassword(arrivalmin, testflag2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto mintoo;
  }
  else if (convertint(arrivalmin) >= 60)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 60)" << endl;
    system("pause");
    goto mintoo;
  }
  total = (convertint(arrivalhour) * 60) + convertint(arrivalmin);
  totalmin = 480 - total;

  int finalhour, finalmin, id;
  if (totalmin < 0)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "\t\tYOU LATE " << -(finalhour) << "  HOUR "
         << " AND " << finalmin << "  MIN";
    cout << endl;
    id = x;
    securityattendence[id] = securityattendence[id] + 1;
    cout << endl;
    if (securityattendence[id] <= 3)
    {
      cout << endl;
      cout << "\t\tALERT!IF YOU LATE " << 3 - securityattendence[id] << "  TIMES MORE THEN YOU WILL BE FIRED";
      cout << endl;
      cout << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      employeeview();
    }
    else if (securityattendence[id] > 3)
    {
      driveradddetailviewportal();
      optionDetailView4();
    }
  }
  else if (totalmin > 0)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU EARLY " << finalhour << " HOUR"
         << " AND " << -finalmin << " MIN";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else if (totalmin == 0)
  {
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU ON TIME ";
    cout << endl;
    system("pause");
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void salaryattendenceportal(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  bool testflag = true, testflag2 = true;
  int  latearrival, totalmin, total;
  string arrivalhour, arrivalmin;
  cout << "\t\t\t\tYOUR DUTY TIMING IS:8 am";
  cout << endl;
  cout << endl;
  cout << "\tENTER YOUR ARRIVAL TIMING:-";
  cout << endl;
  cout << endl;
  houroo:
   cout << "\tENTER HOUR:";
   getline(cin , arrivalhour);
   if (checkpassword(arrivalhour, testflag) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto houroo;
  }
  else if (convertint(arrivalhour) > 12)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 12)" << endl;
    system("pause");
    goto houroo;
  }
  mintoo:
  cout << "\tENTER MIN:";
  getline(cin ,arrivalmin);
  if (checkpassword(arrivalmin, testflag2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto mintoo;
  }
  else if (convertint(arrivalmin) >= 60)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 60)" << endl;
    system("pause");
    goto mintoo;
  }

  total = (convertint(arrivalhour) * 60) + convertint(arrivalmin);
  totalmin = 480 - total;
  int finalhour, finalmin, id;
  if (totalmin < 0)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "\t\tYOU LATE " << -(finalhour) << "  HOUR "
         << " AND " << finalmin << "  MIN";
    cout << endl;
    id = x;
    salaryattendence[id] = salaryattendence[id] + 1;
    cout << endl;
    if (salaryattendence[id] <= 3)
    {
      cout << endl;
      cout << "\t\tALERT!IF YOU LATE " << 3 - salaryattendence[id] << "  TIMES MORE THEN YOU WILL BE FIRED";
      cout << endl;
      cout << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      employeeview();
    }
    else if (salaryattendence[id] > 3)
    {
      driveradddetailviewportal();
      optionDetailView4();
    }
  }
  else if (totalmin > 0)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU EARLY " << finalhour << " HOUR"
         << " AND " << -finalmin << " MIN";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else if (totalmin == 0)
  {
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU ON TIME ";
    cout << endl;
    system("pause");
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void computerattendenceportal(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  bool testflag = true, testflag2 = true;
  int  latearrival, totalmin, total;
  string arrivalhour, arrivalmin;
  cout << "\t\t\t\tYOUR DUTY TIMING IS:8 am";
  cout << endl;
  cout << endl;
  cout << "\tENTER YOUR ARRIVAL TIMING:-";
  cout << endl;
  cout << endl;
  houroo:
  cout << "\tENTER HOUR:";
  getline(cin , arrivalhour);
   if (checkpassword(arrivalhour, testflag) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto houroo;
  }
  else if (convertint(arrivalhour) > 12)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 12)" << endl;
    system("pause");
    goto houroo;
  }
  mintoo:
  cout << "\tENTER MIN:";
  getline(cin , arrivalmin);
  if (checkpassword(arrivalmin, testflag2) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ONLY USE INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto mintoo;
  }
  else if (convertint(arrivalmin) >= 60)
  {
    cout << "WRONG INPUT(HOUR IS NOT GREATER THAN 60)" << endl;
    system("pause");
    goto mintoo;
  }
  total = (convertint(arrivalhour) * 60) + convertint(arrivalmin);
  totalmin = 480 - total;

  int finalhour, finalmin, id;

  if (totalmin < 0)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "\t\tYOU LATE " << -(finalhour) << "  HOUR "
         << " AND " << finalmin << "  MIN";
    cout << endl;

    id = x;
    computerattendence[id] = computerattendence[id] + 1;
    cout << endl;
    if (computerattendence[id] <= 3)
    {
      cout << endl;
      cout << "\t\tALERT!IF YOU LATE " << 3 - computerattendence[id] << "  TIMES MORE THEN YOU WILL BE FIRED";
      cout << endl;
      cout << endl;
      system("pause");
      employeeview();
      SetConsoleTextAttribute(hConsole, 7);
    }
    else if (computerattendence[id] > 3)
    {
      driveradddetailviewportal();
      optionDetailView4();
    }
  }
  else if (totalmin > 0)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU EARLY " << finalhour << " HOUR"
         << " AND " << -finalmin << " MIN";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else if (totalmin == 0)
  {
    cout << endl;
    finalhour = totalmin / 60;
    finalmin = (finalhour * 60) - totalmin;
    cout << "YOU ON TIME ";
    cout << endl;
    system("pause");
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}

void attendenceview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO ATTENDENCE PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void driveradddetailview()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO ADD DETAIL PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void driveradddetailviewportal()
{
  SetConsoleTextAttribute(hConsole, 11);
  system("cls");
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO VIEW PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t######################################################" << endl;
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
void engineer()
{
  string category;
  SetConsoleTextAttribute(hConsole, 11);
backii:
  engineerview();
  cout << "\t\t METIONED YOUR CATEGORY:-\t\t" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\t           1.TRAIN ENGINEER " << endl;
  cout << endl;
  cout << "\t\t           2.COMPUTER ENGINEER " << endl;
  cout << endl;
  cout << "\t\t           3.EXIT" << endl;
  cout << endl;
  cout << endl;
  cout << "ENTER YOUR CATEGORY :";
  getline(cin, category);
 // cin.ignore();
  if (category == "1")
  {
    trainview();
    trainEngineer();
  }
  else if (category == "2")
  {
    computerview();
    computerEngineer();
  }
  else if (category == "3")
  {
    employeeview();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto backii;
    SetConsoleTextAttribute(hConsole, 7);
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void engineerview()
{

  system("cls");
  cout << "\t\t\t*************************************" << endl;
  cout << endl;
  cout << "                 \t\t WELCOME TO ENGINEER PORTAL" << endl;
  cout << endl;
  cout << "\t\t\t*************************************" << endl;
}
void trainEngineer()
{
  SetConsoleTextAttribute(hConsole, 11);
  string id;
  bool flagpass = true;
  int x;
  string codecheck, condition, username;
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  cin.ignore();
  if (checkpassword(id, flagpass) == false)
  {
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER)" << endl;
    system("pause");
    goto checkit;
  }
  x = convertint(id);
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR NAME:";
  getline(cin , username);
  cout << "\t\tENTER YOUR PASSWORD:";
  getline(cin , codecheck);
  if ((codecheck == passwordoftesttrain[x]) && (username == nameoftesttrain[x]))
  {
    check:
  engineerview();
    cout << endl;
    cout << "\t\t1.ATTENDENCE";
    cout << endl;
    cout << endl;
    cout << "\t\t2.ADD DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t3.VIEW DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t4.EXIT";
    cout << endl;
    cout << endl;
    cout << "ENTER HERE:";
  getline(cin , condition);
    if (condition == "1")
    {
      attendenceview();
      trainattendenceportal(x);
    }
    else if (condition == "2")
    {
      driveradddetailview();
      traindetail(x);
    }
    else if (condition == "3")
    {
      driveradddetailviewportal();
      traindetailview(x);
    }
    else if (condition == "4")
    {
      employeeview();
    }
    else
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto check;
      SetConsoleTextAttribute(hConsole, 7);
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    system("cls");
    cout << "PLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void traindetail(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  int sizeofcinc;
  bool flagname = false, flagpass = true;
  bool testflag = false;

  if (x <= 10)
  {
    cout << endl;
  name:
    cout << "\t\tENTER YOUR NAME:";
    getline(cin, trainname[x]);
    cin.ignore();
    if (checkname(trainname[x], testflag) == false)
    {
      cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
      system("pause");
      goto name;
    }
    cout << endl;
    cout << "\t\tENTER YOUR DATE OF BIRTH:";
    traindateofbirth[x] = dateofBirthcheck();
    cout << endl;
  cincc:
    cout << "\t\tENTER YOUR CINC:";
    cin >> traincinc[x];
    cin.ignore();
    sizeofcinc = traincinc[x].length();
    if (sizeofcinc != 13)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    else if (checkpassword(drivercinc[x], flagpass) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    cout << endl;
    cout << "\t\t\t#################################################################" << endl;
    cout << "\t\t\t\t\tONLY" << 10 - x << "SEAT LEFT " << endl;
    cout << "\t\t\t#################################################################" << endl;
    system("pause");
    employeeview();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}

void traindetailview(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  int condition;
  cout << "\t\t YOUR NAME:" << trainname[x];
  cout << endl;
  cout << "\t\t YOUR SALARY:" << trainsalary[x];
  cout << endl;
  cout << "\t\t YOUR DATE OF BIRTH:" << traindateofbirth[x];
  cout << endl;
  cout << "\t\t YOUR CINC:" << traincinc[x];
  cout << endl;
  cout << "\t-----------------------------------------------------------------" << endl;
  system("pause");
  employeeview();

  SetConsoleTextAttribute(hConsole, 7);
}
void computerEngineer()
{
  string id;
  bool flagpass = true;
  int x;
  SetConsoleTextAttribute(hConsole, 11);
  string codecheck, condition, username;
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  cin.ignore();
  if (checkpassword(id, flagpass) == false)
  {
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER)" << endl;
    system("pause");
    goto checkit;
  }
  x = convertint(id);
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR NAME:";
  getline(cin , username);
  cout << "\t\tENTER YOUR PASSWORD:";
  getline(cin ,codecheck);
  if ((codecheck == passwordoftestcomputer[x]) && (username == nameoftestcomputer[x]))
  {
     check:
    computerview();
      SetConsoleTextAttribute(hConsole, 11);
    cout << endl;
    cout << "\t\t1.ATTENDENCE";
    cout << endl;
    cout << endl;
    cout << "\t\t2.ADD DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t3.VIEW DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t4.EXIT";
    cout << endl;
    cout << endl;
    cout << "ENTER HERE:";
    SetConsoleTextAttribute(hConsole, 7);
    getline(cin , condition);
    if (condition == "1")
    {
      attendenceview();
      computerattendenceportal(x);
    }
    else if (condition == "2")
    {
      driveradddetailview();
      computerdetail(x);
    }
    else if (condition == "3")
    {
      driveradddetailviewportal();
      computerdetailview(x);
    }
    else if (condition == "4")
    {
      employeeview();
    }
    else
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT" << endl;
      system("pause");
      goto check;
      SetConsoleTextAttribute(hConsole, 7);
      
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    system("cls");
    cout << "PLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void computerdetail(int x)
{
  int sizeofcinc;
  bool flagname = false, flagpass = true;
  bool testflag = false;
  SetConsoleTextAttribute(hConsole, 11);
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  if (x <= 10)
  {
    cout << endl;
  name:
    cout << "\t\tENTER YOUR NAME:";
    getline(cin, computername[x]);
    cin.ignore();
    if (checkname(computername[x], testflag) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto name;
    }
    cout << endl;
    // cout << "\t\tENTER YOUR SALARY:";
    // cin >> computersalary[x];
    // cout << endl;
    cout << "\t\tENTER YOUR DATE OF BIRTH:";
    computerdateofbirth[x] = dateofBirthcheck();
    cout << endl;
  cincc:
    cout << "\t\tENTER YOUR CINC:";
    getline(cin, computercinc[x]);
    cin.ignore();
    sizeofcinc = computercinc[x].length();
    if (sizeofcinc != 13)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    else if (checkpassword(computercinc[x], flagpass) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    cout << endl;
    system("pause");
    cout << "\t\t\t#################################################################" << endl;
    cout << "\t\t\t\t\tONLY" << 10 - x << "SEAT LEFT " << endl;
    cout << "\t\t\t#################################################################" << endl;
    employeeview();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void computerdetailview(int x)
{
  SetConsoleTextAttribute(hConsole, 11);

  cout << "\t\t YOUR NAME:" << computername[x];
  cout << endl;
  cout << "\t\t YOUR SALARY:" << computersalary[x];
  cout << endl;
  cout << "\t\t YOUR DATE OF BIRTH:" << computerdateofbirth[x];
  cout << endl;
  cout << "\t\t YOUR CINC:" << computercinc[x];
  cout << endl;
  cout << "\t-----------------------------------------------------------------" << endl;
  system("pause");
  employeeview();

  SetConsoleTextAttribute(hConsole, 7);
}
void manager()
{
  string category;
backii:
  managerview();
  cout << "\t\t METIONED YOUR CATEGORY:-\t\t" << endl;
  cout << endl;
  cout << endl;
  cout << "\t\t           1.SALARY MANAGER " << endl;
  cout << endl;
  cout << "\t\t           2.SECURITY MANAGER " << endl;
  cout << endl;
  cout << "\t\t           3.STATION MANAGER" << endl;
  cout << endl;
  cout << "\t\t           4.EXIT" << endl;
  cout << endl;
  cout << endl;
  cout << "ENTER YOUR CATEGORY :";
  getline(cin, category);
  cin.ignore();
  if (category == "1")
  {
    salaryview();
    salarymanager();
  }
  else if (category == "2")
  {
    securityview();
    securityManager();
  }
  else if (category == "3")
  {
    stationview();
    stationManager();
  }
  else if (category == "4")
  {
    employeeview();
  }
  else
  {
    cout << "WRONG INPUT" << endl;
    system("pause");
    goto backii;
  }
}
void salarymanager()
{
  SetConsoleTextAttribute(hConsole, 11);
  string id;
  int x;
  bool flagpass = true;
  string codecheck, condition, username;
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  //cin.ignore();
  if (checkpassword(id, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto checkit;
  }
  SetConsoleTextAttribute(hConsole, 11);
  x = convertint(id);
  cout << "\t\tENTER YOUR NAME:";
  getline(cin , username);
  
  cout << "\t\tENTER YOUR PASSWORD:";
  cin >> codecheck;
  if ((codecheck == passwordoftestsalary[x]) && (username == nameoftestsalary[x]))
  {
check:
salaryview();
    cout << endl;
    cout << "\t\t1.ATTENDENCE";
    cout << endl;
    cout << endl;
    cout << "\t\t2.ADD DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t3.VIEW DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t4.EXIT";
    cout << endl;
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin , condition);
    if (condition == "1")
    {
      attendenceview();
      salaryattendenceportal(x);
    }
    else if (condition == "2")
    {
      driveradddetailview();
      salarydetail(x);
    }
    else if (condition == "3")
    {
      driveradddetailviewportal();
      salarydetailview(x);
    }
    else if (condition == "4")
    {
      employeeview();
    }
    else
    {
      SetConsoleTextAttribute(hConsole, 2);
      goto check;
      cout << "WRONG INPUT" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
    
    }
  }
  else
  {
    system("cls");
    SetConsoleTextAttribute(hConsole, 2);
    cout << "PLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void salarydetail(int x)
{
  int sizeofcinc;
  bool flagname = false, flagpass = true;
  bool testflag = false;
  SetConsoleTextAttribute(hConsole, 7);
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  if (x <= 10)
  {
    cout << endl;
  name:
    cout << "\t\tENTER YOUR NAME:";
    getline(cin, salaryname[x]);
    cin.ignore();
    if (checkname(salaryname[x], testflag) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto name;
    }
    // cout << "\t\tENTER YOUR SALARY:";
    // cin >> salarysalary[x];
    // cout << endl;
    cout << "\t\tENTER YOUR DATE OF BIRTH:";
    salarydateofbirth[x] = dateofBirthcheck();
    cout << endl;
  cincc:
    cout << "\t\tENTER YOUR CINC:";
    getline(cin, salarycinc[x]);
    cin.ignore();
    sizeofcinc = salarycinc[x].length();
    if (sizeofcinc != 13)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    else if (checkpassword(salarycinc[x], flagpass) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }

    cout << endl;
    cout << "\t\t\t#################################################################" << endl;
    cout << "\t\t\t\t\tONLY" << 10 - x << "SEAT LEFT " << endl;
    cout << "\t\t\t#################################################################" << endl;
    system("pause");
    employeeview();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void salarydetailview(int x)
{
  SetConsoleTextAttribute(hConsole, 11);

  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  cout << "\t\t YOUR NAME:" << salaryname[x];
  cout << endl;
  cout << "\t\t YOUR SALARY:" << salarysalary[x];
  cout << endl;
  cout << "\t\t YOUR DATE OF BIRTH:" << salarydateofbirth[x];
  cout << endl;
  cout << "\t\t YOUR CINC:" << salarycinc[x];
  cout << endl;
  cout << "\t-----------------------------------------------------------------" << endl;
  system("pause");
  employeeview();

  SetConsoleTextAttribute(hConsole, 7);
}
void securityManager()
{
  SetConsoleTextAttribute(hConsole, 11);
  string id;
  int x;
  bool flagpass = true;
  string codecheck, condition, username;
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  cin.ignore();
  if (checkpassword(id, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto checkit;
  }
  SetConsoleTextAttribute(hConsole, 7);
  SetConsoleTextAttribute(hConsole, 11);
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR  NAME:";
  getline(cin , username);
  cout << "\t\tENTER YOUR PASSWORD:";
  getline(cin , codecheck);
  if ((codecheck == passwordoftestsecurity[x]) && (username == nameoftestsecurity[x]))
  {
 check:
    cout << endl;
    cout << "\t\t1.ATTENDENCE";
    cout << endl;
    cout << endl;
    cout << "\t\t2.ADD DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t3.VIEW DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t4.EXIT";
    cout << endl;
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin , condition);
    if (condition == "1")
    {
      attendenceview();
      securityattendenceportal(x);
    }
    else if (condition == "2")
    {
      driveradddetailview();
      securitydetail(x);
    }
    else if (condition == "3")
    {
      driveradddetailviewportal();
      securitydetailview(x);
    }
    else if (condition == "4")
    {
      employeeview();
    }
    else
    {
      SetConsoleTextAttribute(hConsole, 2);
      cout << "WRONG INPUT" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
       goto check;
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 2);
    system("cls");
    cout << "PLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void securitydetail(int x)
{
  int sizeofcinc;
  bool flagname = false, flagpass = true;
  bool testflag = false;
  SetConsoleTextAttribute(hConsole, 11);
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  if (x <= 10)
  {
    cout << endl;
  name:
    cout << "\t\tENTER YOUR NAME:";
    getline(cin, securityname[x]);
    cin.ignore();
    if (checkname(securityname[x], testflag) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT(DON'T USE INTEGER)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto name;
    }
    cout << endl;
    // cout << "\t\tENTER YOUR SALARY:";
    // cin >> securitysalary[x];
    cout << endl;
    cout << "\t\tENTER YOUR DATE OF BIRTH:";
    securitydateofbirth[x] = dateofBirthcheck();
    cout << endl;
  cincc:
    cout << "\t\tENTER YOUR CINC:";
    getline(cin, securitycinc[x]);
    cin.ignore();
    sizeofcinc = securitycinc[x].length();
    if (sizeofcinc != 13)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    else if (checkpassword(securitycinc[x], flagpass) == false)
    {
      SetConsoleTextAttribute(hConsole, 4);
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      goto cincc;
    }
    cout << endl;
    system("pause");
    cout << endl;
    SetConsoleTextAttribute(hConsole, 4);
    cout << "\t\t\t#################################################################" << endl;
    cout << "\t\t\t\t\tONLY" << 10 - x << "SEAT LEFT " << endl;
    cout << "\t\t\t#################################################################" << endl;
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void securitydetailview(int x)
{
  SetConsoleTextAttribute(hConsole, 11);
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  cout << "\t\t YOUR NAME:" << securityname[x];
  cout << endl;
  cout << "\t\t YOUR SALARY:" << securitysalary[x];
  cout << endl;
  cout << "\t\t YOUR DATE OF BIRTH:" << securitydateofbirth[x];
  cout << endl;
  cout << "\t\t YOUR CINC:" << securitycinc[x];
  cout << endl;
  cout << "-------------------------------------------------";
  // cout << "\t\t 1.SEE MORE                   2.STOP";
  // cin >> condition;
  // if (condition == 1)
  // {
  //   driverdetailview();
  // }
  // else if (condition == 2)
  // {
  system("pause");
  employeeview();

  SetConsoleTextAttribute(hConsole, 7);
}
void stationManager()
{
  SetConsoleTextAttribute(hConsole, 11);
  string id;
  bool flagpass = true;
  int x;
  string codecheck, condition, username;
checkit:
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  getline(cin, id);
  cin.ignore();
  if (checkpassword(id, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 2);
    cout << "WRONG INPUT( ID MUST CONTAIN INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto checkit;
  }

  SetConsoleTextAttribute(hConsole, 7);
  SetConsoleTextAttribute(hConsole, 11);
  x = convertint(id);
  cout << endl;
  cout << endl;
  cout << "\t\tENTER YOUR NAME:";
  getline(cin ,username);
  cout << "\t\tENTER YOUR PASSWORD:";
  getline(cin ,codecheck);
  if ((codecheck == passwordoftestmanager[x]) && (username == nameoftestmanager[x]))
  {
    check:
    managerview();
    cout << endl;
    cout << "\t\t1.ATTENDENCE";
    cout << endl;
    cout << endl;
    cout << "\t\t2.ADD DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t3.VIEW DETAILS";
    cout << endl;
    cout << endl;
    cout << "\t\t4.EXIT";
    cout << endl;
    cout << endl;
    cout << "ENTER HERE:";
    getline(cin , condition);
    if (condition == "1")
    {
      attendenceview();
      managerattendenceportal(x);
    }
    else if (condition == "2")
    {
      driveradddetailview();
      managerdetail(x);
    }
    else if (condition == "3")
    {
      driveradddetailviewportal();
      managerdetailview(x);
    }
    else if (condition == "4")
    {
      employeeview();
    }
    else
    {
      SetConsoleTextAttribute(hConsole, 2);
      //   system("cls");
      cout << "WRONG INPUT" << endl;
      system("pause");
      SetConsoleTextAttribute(hConsole, 7);
      
    
    }
  }
  else
  {
    SetConsoleTextAttribute(hConsole, 2);
    system("cls");
    cout << "PLEASE FIRST CLEAR THE TEST";
    cout << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    employeeview();
  }
  SetConsoleTextAttribute(hConsole, 7);
}
void managerdetail(int x)
{
  bool flagname = false, flagpass = true;
  int sizeofcinc;
  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  if (x <= 10)
  {
    cout << endl;
  namee:
    cout << "\t\tENTER YOUR NAME:";
    getline(cin, managername[x]);
    if (checkname(managername[x], flagname) == false)
    {
      cout << "WRONG INPUT(PLZ DON'T ENTER INTEGER)" << endl;
      system("pause");
      goto namee;
    }
    cout << endl;
    // cout << "\t\tENTER YOUR SALARY:";
    // cin >> managersalary[x];
    cout << endl;
    cout << "\t\tENTER YOUR DATE OF BIRTH:";
    managerdateofbirth[x] = dateofBirthcheck();
    cout << endl;
  cincc:
    cout << "\t\tENTER YOUR CINC:";
    getline(cin, managercinc[x]);
    sizeofcinc = managercinc[x].length();
    if (sizeofcinc != 13)
    {
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 13 NUMBERS)" << endl;
      system("pause");
      goto cincc;
    }
    else if (checkpassword(managercinc[x], flagpass) == false)
    {
      cout << "WRONG INPUT( CINC MUST CONTAIN INTEGER AND ONLY HAVE 12 NUMBERS)" << endl;
      system("pause");
      goto cincc;
    }
    cout << endl;
    cout << "\t\t\t#################################################################" << endl;
    cout << "\t\t\t\t\tONLY" << 10 - x << "SEAT LEFT " << endl;
    cout << "\t\t\t#################################################################" << endl;
    system("pause");
    employeeview();
  }
  else
  {
    cout << "ALL EMPLOYEES ARE COMPLETE WHEN ANYONE FIRED YOU GET A JOB";
    system("pause");
    employeeview();
  }
}
string dateofBirthcheck()
{
  string dateofbirth;
  string date, month, year;
  bool flagname = false, flagpass = true;
  int checkdate, checkmonth, checkyear, sizeofcinc;
birth:
  cout << "\t\tENTER MONTH:";
  getline(cin, month);
 // cin.ignore();
  checkmonth = convertint(month);
  if (checkmonth > 12)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( MONTH IS NOT GREATER THAN 12)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto birth;
  }
  else if (checkpassword(month, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( MONTH IS ONLY INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto birth;
  }
date:
  cout << "\t\tENTER DATE:";
  getline(cin, date);
  checkdate = convertint(date);
  if (checkdate > 31)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( DATE IS NOT GREATER THAN 31)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto date;
  }
  else if (checkpassword(date, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( DATE IS ONLY INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto date;
  }
year:
  cout << "\t\tENTER YEAR:";
  getline(cin, year);
  checkyear = convertint(year);
  if ((checkyear > 2023) && (checkyear < 2000))
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT(ENTER VALID YEAR)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto year;
  }
  else if (checkpassword(year, flagpass) == false)
  {
    SetConsoleTextAttribute(hConsole, 4);
    cout << "WRONG INPUT( YEAR IS ONLY INTEGER)" << endl;
    system("pause");
    SetConsoleTextAttribute(hConsole, 7);
    goto year;
  }
  dateofbirth = month + date + year;
  return dateofbirth;
}
void managerdetailview(int x)
{
  SetConsoleTextAttribute(hConsole, 11);

  cout << "\t\tENTER YOUR EMPLOYEE ID:";
  cin >> x;
  cout << "\t\t YOUR NAME:" << managername[x];
  cout << endl;
  cout << "\t\t YOUR SALARY:" << managersalary[x];
  cout << endl;
  cout << "\t\t YOUR DATE OF BIRTH:" << managerdateofbirth[x];
  cout << endl;
  cout << "\t\t YOUR CINC:" << managercinc[x];
  cout << endl;
  cout << "\t-----------------------------------------------------------------" << endl;
  system("pause");
  employeeview();
  SetConsoleTextAttribute(hConsole, 7);
}

void firstview()
{
  SetConsoleTextAttribute(hConsole, 11);
  Sleep(200);
  cout << " _  _  ____  __     ___  __   _  _  ____    ____  __" << endl;
  Sleep(200);
  cout << "/ )( \\(  __)(  )   / __)/  \\ ( \\/ )(  __)  (_  _)/  \\" << endl;
  Sleep(200);
  cout << "\\ /\\ / ) _) / (_/\\( (__(  O )/ \\/ \\ ) _)     )( (  O )" << endl;
  Sleep(200);
  cout << "(_/\\_)(____)\\____/ \\___)\\__/ \\_)(_/(____)   (__) \\__/" << endl;
  Sleep(200);
  cout << "                            __  ____   __   __ _   ___  ____    __    __  __ _  ____    ____  ____   __   __  __ _    ____   __  ____  ____  __   __   " << endl;
  Sleep(200);
  cout << "                           /  \\(  _ \\ / _\\ (  ( \\ / __)(  __)  (  )  (  )(  ( \\(  __)  (_  _)(  _ \\ / _\\ (  )(  ( \\  (  _ \\ /  \\(  _ \\(_  _)/ _\\ (  ) " << endl;
  Sleep(200);
  cout << "                          (  O ))   //    \\/    /( (_ \\ ) _)   / (_/\\ )( /    / ) _)     )(   )   //    \\ )( /    /   ) __/(  O ))   /  )( /    \\/ (_/\\     " << endl;
  Sleep(200);
  cout << "                           \\__/(__\\_)\\_/\\_/\\_)__) \\___/(____)  \\____/(__)\\_)__)(____)   (__) (__\\_)\\_/\\_/(__)\\_)__)  (__)   \\__/(__\\_) (__)\\_/\\_/\\____/ " << endl;
  Sleep(200);
  cout << " ____   __   _  _  ____  ____  ____  ____    ____  _  _            __    __   ____  _  _  _  _  _  _  ____   __   ____   __                            " << endl;
  Sleep(200);
  cout << "(  _ \\ /  \\ / )( \\(  __)(  _ \\(  __)(    \\  (  _ \\( \\/ )   ___  ___\\ \\  / _\\ (  _ \\/ )( \\/ )( \\/ )( \\(  _ \\ / _\\ (  _ \\ / _\\         " << endl;
  Sleep(200);
  cout << " ) __/(  O )\\ /\\ / ) _)  )   / ) _)  ) D (   ) _ ( )  /   (___)(___)) )/    \\ ) _ () \\/ () __ () \\/ ( )   /    \\ )   /    \\                    " << endl;
  Sleep(200);
  cout << "(__)   \\__/ (_/\\_)(____)(__\\_)(____)(____/  (____/(__/             /_/ \\_/\\_/(____/\\____/\\_)(_/\\____/(__\\_)\\_/\\_/(__\\_)\\_/\\_/ " << endl;
  SetConsoleTextAttribute(hConsole, 7);
}
