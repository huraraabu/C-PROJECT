#include <iostream>
#include <windows.h>
#include<fstream>
#include<sstream>
using namespace std;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

void jetplane(int jetx, int jety);
void jetplane2(int x, int y);

void jetplaneUp();
void jetplaneDown();
void jetplaneRight();
void jetplaneLeft();

void jetplane2Up();
void jetplane2Down();
void jetplane2Right();
void jetplane2Left();

void maze();
void maze2();
void erase(int eraselocationx, int eraselocationy);
// void menu();

int bulletX[100];
int bulletY[100];
int bullet2X[1000];
int bullet2Y[1000];
int bulletforenemyX[100];
int bulletforenemyY[100];

void generateBullet();
void eraseBullet(int buletlocationx, int buletlocationy);
void moveBullet();
void printBullet(int buletlocationx, int buletlocationy);
void removeBulletFromArray(int index);
string bullet = ".";

void generateBullet2();
void eraseBullet2(int buletlocation2x, int buletlocation2y);
void moveBullet2();
void printBullet2(int buletlocation2x, int buletlocation2y);
void removeBulletFromArray2(int index);
string bullet2 = "-";

int bulletCount = 0;
int bulletCount2 = 0;
int bulletCountforenemy = 0;

void generateBulletforenemy();
void eraseBulletforenemy(int buletLocationEnemyX, int buletLocationEnemyY);
void moveBulletforenemy();
void printBulletforenemy(int buletLocationEnemyX, int buletLocationEnemyY);
void removeBulletFromEnemyArray(int index);

bool mainCondition = true;
char location, location2;
int x = 20, y = 10;
int x2 = 20, y2 = 10;
int bulletx = 10, bullety = 10;
int score = 0;
int score2 = 0;
int timer = 0;

void showScore();
void addScore();
void showScore2();
void addScore2();
void add2Score();
void add2Score2();

void enemyPlane();
void enemyMove();
void eraseEnemy(int enemyerasex, int enemyerasey);
int enemyX = 80, enemyY = 12;
string directionofEnemy = "UP";

void health();
void removeHealth();
char box = 221;

char healthArray[14] = {box, box, box, box, box, box, box, box, box, box, box, box, box, box};
char healthArrayround2[14] = {box, box, box, box, box, box, box, box, box, box, box, box, box, box};
char health2Arrayround2[14] = {box, box, box, box, box, box, box, box, box, box, box, box, box, box};
char healthForFinal[14] = {box, box, box, box, box, box, box, box, box, box, box, box, box, box};
char healthForFinal2[14] = {box, box, box, box, box, box, box, box, box, box, box, box, box, box};

int healthArrayCount = 12;
int powerCount = 0;
bool extraPowerCheck = true;
bool flag2 = true;
int startagain = 0;
int finalpower;

void health2();
void removeHealth2();
char box2 = 221;
char healthArray2[14] = {box2, box2, box2, box2, box2, box2, box2, box2, box2, box2, box2, box2, box2, box2};
int healthArrayCount2 = 12;
int powerCount2 = 0;

void bulletUpgrade();
void bulletVersion2();
void bulletVersion2Erase();
void bulletVersion2Move();
int bulletVersion2x = 40, bulletVersion2y = 12;
void sec();

string menu2();
string modeOption();
string twoplayerOption();
int playerDetail();
string changingDetail();
int listOfJetColour();
int listOfBulletColour();
int jetColour, bullet1Colour;

int playerDetail2();
string changingDetail2();
int listOfJet2Colour();
int listOfBullet2Colour();
int jet2Colour, bullet2Colour;

// string playerName[2];
int nameCount = 0;
string playerName2;
string playerName;

void power();
void powerErase();
void powerMove();
void powerUpgrade();
void extraPower();
void extraPowerErase();
int extracheck = 0;
void extraPower2();
void extraPowerErase2();
int extracheck2 = 0;
char extraHealthArray[13] = {box, box, box, box, box, box, box, box, box, box, box, box, box};
char extraHealthArray2[13] = {box, box, box, box, box, box, box, box, box, box, box, box, box};
int powerx = 60, powery = 15, count, count2;

void menuview();
int finalmenu();

void round1();
int checkRound = 0;
void round2();
int finalround();
int finalround2();
int finalresult();
int finalresult2();

void bomb();
void bombErase();
void bombMove(int bomblocationx, int bomblocationy);
void bomb2();
void bombErase2();
void bombMove2(int bomblocation2x, int bomblocation2y);
void bombblast();
void blastmove(int blastmotionx, int blastmotiony);
void eraseblast();
int blastx, blasty;
int bombx, bomby;
int bomb2x, bomb2y;
char undersore = 95, hash = 35, dot = 46, singlequote = 39, minus = 45, staric = 45;
char underscore = 95, straightline = 124, backslash = 92, slash = 47;

int roundCount = 0, roundCount2 = 0, round2HealthCheck = 0, round2Health2Check = 0;
int final = 0;

void resetFile();
void round1health();
void round1health2();
void finalhealth();
void finalhealth2();

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);





void notify()
{
  cout<<"WRONG INPUT"<<endl;
  system("pause");
}

int convertint(string data)
{
  int number;
  istringstream(data) >> number;
  return number;
}



void storeStartIndicator()
{
 fstream myfile6;
 myfile6.open("start.txt",ios::out);
 myfile6 << startagain<<endl;
 myfile6 << roundCount<<endl;
 myfile6 << roundCount2<<endl;
 myfile6.close();

}
void storeScore()
{
  fstream myfile;
  myfile.open("score.txt", ios::out);
  myfile << score  << endl;
  myfile << score2;
  myfile.close();
}
void storePower()
{
  fstream myfile2;
  myfile2.open("power.txt", ios::out);
  myfile2 << final << endl;
  myfile2 << finalpower;
  myfile2.close();
}
void loadScore()
{
  fstream myfile3;
  myfile3.open("score.txt", ios::in);
  myfile3 >> score;
  myfile3 >> score2;
  myfile3.close();
}
void  loadstartindicator()
{
  fstream myfile5;
 myfile5.open("start.txt",ios::in);
 myfile5 >> startagain;
 myfile5 >> roundCount;
 myfile5 >> roundCount2;
 myfile5.close();
}

void loadPower()
{
  fstream myfile4;
  myfile4.open("power.txt", ios::in);
  myfile4 >> final;
  myfile4 >> finalpower;
  myfile4.close();
  
}
int  exitFromGame()
{
 startagain=1;  
 storeScore();
 storePower();
 storeStartIndicator();
 system("cls");
 return 0; 
}

void game2()
{

  maze2();
  jetplane(x, y);
  enemyPlane();
  for (int x = 1; x != 0; x++)
  {

    enemyMove();
    if (GetAsyncKeyState('a'))
    {
      //generateBulletforenemy();
    }
    //moveBulletforenemy();
  }
}

main()
{
  int playerDetailNumber2,playerDetailNumber,listofJetColourNumber,istofJetColourNumber2, listofBulletColourNumber,finalmenuNumber;
  string menuNumber,modeNumber,twoplayerNumber,changingDetailNumber, changingDetailNumber2;
  bool singleplayer = false;
  system("cls");

  // menuview();
  // system("pause");
  
  finalback:
  finalmenuNumber =finalmenu();
  if (finalmenuNumber == 1)
  {
     resetFile();
     menuback:
     menuNumber = menu2();
    if (menuNumber == "1")
    {
      modeback:
      modeNumber = modeOption();
      if (modeNumber == "1")
      {
        
        playerNumberback:
        twoplayerNumber = twoplayerOption();

        if (twoplayerNumber == "1")
        {
          playerback:
          playerDetailNumber = playerDetail();

          if (playerDetailNumber == 1)
          {
            changingback:
            changingDetailNumber = changingDetail();

            if (changingDetailNumber == "1")
            {
               listOfJetColour();
               goto changingback;  
            }

            else if (changingDetailNumber == "2")
            {
              listofBulletColourNumber = listOfBulletColour();
              goto changingback;
            }
            else if (changingDetailNumber == "3")
            {
            goto playerNumberback;
            }
            else
            {
              notify();
              goto changingback;
            }
          }

          else if (playerDetailNumber == 2)
          {
            goto playerNumberback;
          }
         
        }

        else if (twoplayerNumber == "2")
        {
           
          playerDetailNumber2 = playerDetail2();
          if (playerDetailNumber2 == 1)
          {
 changingdetail2:
            changingDetailNumber2 = changingDetail2();
            if (changingDetailNumber2 == "1")
            {
             listOfJet2Colour();   
            }

            else if (changingDetailNumber2 == "2")
            {
              listOfBullet2Colour();
            }
            else if (changingDetailNumber2 == "3")
            {
             main();
            }
            else
            {
              notify();
              goto changingdetail2;
            }
          }
          else if (playerDetailNumber2 == 2)
          {
           goto playerNumberback;
          }
        }

        else if (twoplayerNumber == "3")
        {
          goto modeback;
        }
        else
        {
          notify();
          goto playerNumberback;
        }
      }
      else if (modeNumber == "2")
      {
        game2();
      }
     else if(modeNumber == "3") 
  {
    goto  menuback;
  }
      else 
  {
       notify();
       goto modeback;
  }
    }
    else if (modeNumber == "3")
    {
      main();
    }
   
    else if (menuNumber == "2")
    {
      goto finalback;
    }
  else
  {
    notify();
    goto menuback;
  }
    //finalmenuNumber = finalmenu();
    //if (finalmenuNumber == "1")
    //{
    gameContinue:
    
      maze();
      gotoxy(x, y);
      jetplane(x, y);
      jetplane2(x + 70, y);
      while (mainCondition)
      {
        
        showScore();
        showScore2();
        bulletUpgrade();
        powerUpgrade();
        health();
        health2();
        if (GetAsyncKeyState('W'))
        {
          
          jetplaneUp();
        }
       if (GetAsyncKeyState('S'))
        {
          jetplaneDown();
        }
        if (GetAsyncKeyState('A'))
        {
          jetplaneLeft();
        }
        if (GetAsyncKeyState('B'))
         {
          exitFromGame();
          startagain=1;
          mainCondition=false;
         }
        if (GetAsyncKeyState('D'))
        {
          jetplaneRight();
        }

        if (GetAsyncKeyState(VK_UP))
        {
          jetplane2Up();
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
          jetplane2Down();
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
          jetplane2Right();
        }
          
       if (GetAsyncKeyState(VK_LEFT))
        {
          jetplane2Left();
        }
        // if (GetAsyncKeyState('L'))
        // {
        //   bombMove(x + 20, y);
        // }
        // if (GetAsyncKeyState('P'))
        // {
        //   bombMove2(x2 + 56, y2);
        // }

        if (GetAsyncKeyState(VK_TAB))
        {
          generateBullet();
        }
        moveBullet();
        if (GetAsyncKeyState(VK_SPACE))
        {
          generateBullet2();
        }
        moveBullet2();
       }

 
  }
  else if (finalmenuNumber == 3)
  {
    
    return 0;
  }
  else if (finalmenuNumber == 2)
  {
    goto gameContinue;
  }
  else
  {
     notify();
     goto finalback;
  }
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
  CHAR_INFO ci;
  COORD xy = {0, 0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void maze()

{
  system("cls");
  SetConsoleTextAttribute(hConsole, 14);
  cout << endl;
  cout << endl;
  cout << endl;
  cout << "\t\t **********************************************************************************************************************************************" << endl;
  
  cout<<"                                                                ROUND  "<<(roundCount+roundCount2)+1<<endl;
  
  cout << "\t\t **********************************************************************************************************************************************" << endl;
  cout << "\t\t **                                                                                                                 **     --------------    **" << endl;
  cout << "\t\t **                                                                                                                 **      RIGHT PLAYER      ** " << endl;
  cout << "\t\t **                                                                                                                 **     -------------     **" << endl;
  cout << "\t\t **                                                                                                                 **  1.UP     |  3.RIGHT  **" << endl;
  cout << "\t\t **                                                                                                                 **           |           **" << endl;
  cout << "\t\t **                                                                                                                 **  BY ' W ' |  BY ' D ' **" << endl;
  cout << "\t\t **                                                                                                                 **           |           **" << endl;
  cout << "\t\t **                                                                                                                 **  2.DOWN   |  4.LEFT   **" << endl;
  cout << "\t\t **                                                                                                                 **           |           **" << endl;
  cout << "\t\t **                                                                                                                 **  BY ' S'  |  BY ' A ' **" << endl;
  cout << "\t\t **                                                                                                                 ** --------------------- **" << endl;
  cout << "\t\t **                                                                                                                 ** FIRE OF LEFT PLAYER   **" << endl;
  cout << "\t\t **                                                                                                                 **        BY             **" << endl;
  cout << "\t\t **                                                                                                                 **       ----            **" << endl;
  cout << "\t\t **                                                                                                                 **      |TAB |           **" << endl;
  cout << "\t\t **                                                                                                                 **       ----            **" << endl;
  cout << "\t\t **                                                                                                                 **     --------------    **" << endl;
  cout << "\t\t **                                                                                                                 **      LEFT PLAYER     **" << endl;
  cout << "\t\t **                                                                                                                 **     --------------    **" << endl;
  cout << "\t\t **                                                                                                                 ** 1.UP     |  3.RIGHT   **" << endl;
  cout << "\t\t **                                                                                                                 ** BY ' ^ ' |  BY ' > '  **" << endl;
  cout << "\t\t **                                                                                                                 ** 2.DOWN   |  4.LEFT    **" << endl;
  cout << "\t\t **                                                                                                                 ** BY '  '  |  BY ' < '  **" << endl;
  cout << "\t\t **                                                                                                                 **---------------------  **" << endl;
  cout << "\t\t **                                                                                                                 **                       **" << endl;
  cout << "\t\t **********************************************************************************************************************************************" << endl;
  cout << "\t\t **********************************************************************************************************************************************" << endl;
  cout << "\t\t **                                                                                                                 ** FIRE OF RIGHT PLAYER  ** " << endl;
  cout << "\t\t **                                                                                                                 **        BY             ** " << endl;
  cout << "\t\t **                                                                                                                 **      -------          **" << endl;
  cout << "\t\t **                                                                                                                 **      |SPACE |         **" << endl;
  cout << "\t\t **                                                                                                                 **      -------          **" << endl;
  cout << "\t\t **                                                                                                                 ** OPTION:               **" << endl;
  cout << "\t\t **                                                                                                                 **    B.EXIT             **" << endl;
  cout << "\t\t **                                                                                                                 **                       **" << endl;
  cout << "\t\t **                                                                                                                 **                       **" << endl;
  cout << "\t\t **                                                                                                                 **                       **" << endl;
  cout << "\t\t **                                                                                                                 **                       **" << endl;
  cout<<"\t\t********************************************************************************************************************************************** " << endl;
  cout << "\t\t **********************************************************************************************************************************************" << endl;
}
//move jetplane of player 2
void jetplane2(int x, int y)
{

  char underscore = 95, straightline = 124, backslash = 92, slash = 47;
  char array1[12] = {' ', ' ', ' ', ' ', underscore, underscore, slash, straightline, underscore, underscore, slash, straightline};
  char array2[12] = {' ', underscore, underscore, straightline, ' ', ' ', ' ', ' ', ' ', ' ', ' ', straightline};
  char array3[12] = {straightline, underscore, underscore, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', straightline};
  char array4[12] = {' ', ' ', ' ', straightline, underscore, underscore, ' ', ' ', underscore, underscore, ' ', straightline};
  char array5[12] = {' ', ' ', ' ', ' ', ' ', ' ', backslash, straightline, ' ', ' ', backslash, straightline};
  if (jet2Colour == 1)
  {
    SetConsoleTextAttribute(hConsole, 11);
  }
  else if (jet2Colour == 2)
  {
    SetConsoleTextAttribute(hConsole, 10);
  }
  else if (jet2Colour == 3)
  {
    SetConsoleTextAttribute(hConsole, 15);
  }
  else if (jet2Colour == 4)
  {
    SetConsoleTextAttribute(hConsole, 4);
  }
  else if (jet2Colour == 5)
  {
    SetConsoleTextAttribute(hConsole, 5);
  }
  else if (jet2Colour == 6)
  {
    SetConsoleTextAttribute(hConsole, 6);
  }
  else if (jet2Colour == 7)
  {
    SetConsoleTextAttribute(hConsole, 12);
  }
  else if (jet2Colour == 8)
  {
    SetConsoleTextAttribute(hConsole, 8);
  }
  else if (jet2Colour == 9)
  {
    SetConsoleTextAttribute(hConsole, 9);
  }
  else if (jet2Colour == 10)
  {
    SetConsoleTextAttribute(hConsole, 13);
  }

  gotoxy(x, y);
  for (int x = 0; x < 12; x++)
  {
    cout << array1[x];
  }
  gotoxy(x, y + 1);
  for (int x = 0; x < 12; x++)
  {
    cout << array2[x];
  }
  gotoxy(x, y + 2);
  for (int x = 0; x < 12; x++)
  {
    cout << array3[x];
  }
  gotoxy(x, y + 3);
  for (int x = 0; x < 12; x++)
  {
    cout << array4[x];
  }
  gotoxy(x, y + 4);
  for (int x = 0; x < 12; x++)
  {
    cout << array5[x];
  }
}
void erase(int eraselocationx, int eraselocationy)
{
  gotoxy(eraselocationx, eraselocationy);
  for (int x = 0; x < 12; x++)
  {
    cout << " ";
  }
  gotoxy(eraselocationx, eraselocationy + 1);
  for (int x = 0; x < 12; x++)
  {
    cout << " ";
  }
  gotoxy(eraselocationx, eraselocationy + 2);
  for (int x = 0; x < 12; x++)
  {
    cout << " ";
  }
  gotoxy(eraselocationx, eraselocationy + 3);
  for (int x = 0; x < 12; x++)
  {
    cout << " ";
  }
  gotoxy(eraselocationx, eraselocationy + 4);
  for (int x = 0; x < 12; x++)
  {
    cout << " ";
  }
}
//move jet plane of player 1 
void jetplane(int jetx, int jety)
{

  char array1[12] = {straightline, backslash, underscore, underscore, straightline, backslash, underscore, underscore, ' ', ' ', ' '};
  char array2[12] = {straightline, ' ', ' ', ' ', ' ', ' ', ' ', ' ', straightline, underscore, underscore, ' '};
  char array3[12] = {straightline, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', underscore, underscore, straightline};
  char array4[12] = {straightline, ' ', underscore, underscore, ' ', ' ', underscore, underscore, straightline, ' ', ' ', ' '};
  char array5[12] = {straightline, slash, ' ', ' ', straightline, slash, ' ', ' ', ' ', ' ', ' ', ' '};
  if (jetColour == 1)
  {
    SetConsoleTextAttribute(hConsole, 11);
  }
  else if (jetColour == 2)
  {
    SetConsoleTextAttribute(hConsole, 10);
  }
  else if (jetColour == 3)
  {
    SetConsoleTextAttribute(hConsole, 15);
  }
  else if (jetColour == 4)
  {
    SetConsoleTextAttribute(hConsole, 4);
  }
  else if (jetColour == 5)
  {
    SetConsoleTextAttribute(hConsole, 5);
  }
  else if (jetColour == 6)
  {
    SetConsoleTextAttribute(hConsole, 6);
  }
  else if (jetColour == 7)
  {
    SetConsoleTextAttribute(hConsole, 12);
  }
  else if (jetColour == 8)
  {
    SetConsoleTextAttribute(hConsole, 8);
  }
  else if (jetColour == 9)
  {
    SetConsoleTextAttribute(hConsole, 9);
  }
  else if (jetColour == 10)
  {
    SetConsoleTextAttribute(hConsole, 13);
  }

  gotoxy(jetx, jety);
  for (int x = 0; x < 12; x++)
  {
    cout << array1[x];
  }

  gotoxy(jetx, jety + 1);
  for (int x = 0; x < 12; x++)
  {
    cout << array2[x];
  }

  gotoxy(jetx, jety + 2);
  for (int x = 0; x < 12; x++)
  {
    cout << array3[x];
  }

  gotoxy(jetx, jety + 3);
  for (int x = 0; x < 12; x++)
  {
    cout << array4[x];
  }
  gotoxy(jetx, jety + 4);
  for (int x = 0; x < 12; x++)
  {
    cout << array5[x];
  }
}

//generate bullet for jet plane 1
void generateBullet()
{
  bulletX[bulletCount] = x + 13;
  bulletY[bulletCount] = y + 2;
  gotoxy(x + 13, y + 2);
  bulletCount++;
}
//erase bullet for jet plane 1
void eraseBullet(int buletlocationx, int buletlocationy)
{

  gotoxy(buletlocationx, buletlocationy);
  cout << " ";
}
//print bullet for jet plane 1
void printBullet(int buletlocationx, int buletlocationy)
{
  char location;
  gotoxy(buletlocationx, buletlocationy);
  location = getCharAtxy(buletlocationx + 1, buletlocationy);
  if ((location == '|' || location == '/' || location == '_') && (bullet == "."))
  {
    addScore();
  }
  if ((location == '|' || location == '/' || location == '_') && (bullet == ">"))
  {
    add2Score();
  }

  bulletUpgrade();
  if (bullet1Colour == 1)
  {
    SetConsoleTextAttribute(hConsole, 11);
  }
  else if (bullet1Colour == 2)
  {
    SetConsoleTextAttribute(hConsole, 10);
  }
  else if (bullet1Colour == 3)
  {
    SetConsoleTextAttribute(hConsole, 15);
  }
  else if (bullet1Colour == 4)
  {
    SetConsoleTextAttribute(hConsole, 4);
  }
  else if (bullet1Colour == 5)
  {
    SetConsoleTextAttribute(hConsole, 5);
  }
  else if (bullet1Colour == 6)
  {
    SetConsoleTextAttribute(hConsole, 6);
  }
  else if (bullet1Colour == 7)
  {
    SetConsoleTextAttribute(hConsole, 12);
  }
  else if (bullet1Colour == 8)
  {
    SetConsoleTextAttribute(hConsole, 8);
  }
  else if (bullet1Colour == 9)
  {
    SetConsoleTextAttribute(hConsole, 9);
  }
  else if (bullet1Colour == 10)
  {
    SetConsoleTextAttribute(hConsole, 13);
  }
  cout << bullet;
}
//move bullet for jet plane 1
void moveBullet()
{
  for (int x = 0; x < bulletCount; x++)
  {
    char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
    if (next != ' ')
    {
      eraseBullet(bulletX[x], bulletY[x]);
      removeBulletFromArray(x);
    }
    else
    {
      eraseBullet(bulletX[x], bulletY[x]);
      bulletX[x] = bulletX[x] + 1;
      printBullet(bulletX[x], bulletY[x]);
    }
  }
}
void removeBulletFromArray(int index)
{
  for (int x = index; x < bulletCount - 1; x++)
  {
    bulletX[x] = bulletX[x + 1];
    bulletY[x] = bulletY[x + 1];
  }
  bulletCount--;
}
//show score for jet plane 1
void showScore()
{
  gotoxy(21, 34);
  cout << playerName << "\tSCORE:" << score;
}
//add score for jet plane 1
void addScore()
{
  score++;
}
//add score for jet plane 2
void add2Score()
{
  score = score + 2;
}

void jetplaneUp()
{
  //  char location2=getCharAtxy(x,y-2);
  location = getCharAtxy(x, y - 1);
  {
    if (location == ' ')
    {
      erase(x, y);
      y = y - 1;
      jetplane(x, y);
    }
  }
  if (location == '#')
  {
    bullet = ">";
    cout << bullet;
  }
  if (location == '@')
  {
    if (extraPowerCheck == true)
    {
      extraPower();
      extraPowerCheck = false;
    }
  }
}
void jetplaneDown()
{
  // char location2=getCharAtxy(x,y+6);
  location = getCharAtxy(x, y + 5);
  {
    if ((location == ' '))

    {
      erase(x, y);
      y = y + 1;
      jetplane(x, y);
    }
  }
  if (location == '#')
  {
    bullet = ">";
    cout << bullet;
  }
  if (location == '@')
  {
    if (count == 0)
    {
      extraPower();
      count++;
      extraPowerCheck = false;
    }
  }
}
void jetplaneRight()
{
  char location2 = getCharAtxy(x + 13, y + 2);
  location = getCharAtxy(x + 12, y);

  {
    if (location == ' ')
    {
      erase(x, y);
      x = x + 1;
      jetplane(x, y);
    }
  }
  if (location == '#')
  {
    bullet = ">";
    cout << bullet;
  }
  if (location == '@')
  {
    if (count == 0)
    {
      extraPower();
      count++;
      extraPowerCheck = false;
    }
  }
}
void jetplaneLeft()
{
  location = getCharAtxy(x - 1, y);
  {
    if (location == ' ')
    {
      erase(x, y);
      x = x - 1;
      jetplane(x, y);
    }
  }
  if (location == '@')
  {
    if (count == 0)
    {
      extraPower();
      count++;
      extraPowerCheck = false;
    }

    
  }
  if (location == '#')
  {
    bullet = ">";
    cout << bullet;
  }
}
//generate bullet for jet plane 2
void generateBullet2()
{
  bullet2X[bulletCount2] = x2 + 68;
  bullet2Y[bulletCount2] = y2 + 2;
  gotoxy(x2 + 68, y2 + 2);
  bulletCount2++;
}
//move bullet for jet plane 2
void moveBullet2()
{
  for (int x = 0; x < bulletCount2; x++)
  {
    char next = getCharAtxy(bullet2X[x] - 1, bullet2Y[x]);
    if (next != ' ')
    {
      eraseBullet(bullet2X[x], bullet2Y[x]);
      removeBulletFromArray2(x);
    }
    else
    {

      eraseBullet2(bullet2X[x], bullet2Y[x]);
      bullet2X[x] = bullet2X[x] - 1;
      printBullet2(bullet2X[x], bullet2Y[x]);
    }
  }
}
//erase bullet for jet plane 2
void eraseBullet2(int buletlocation2x, int buletlocation2y)
{
  gotoxy(buletlocation2x, buletlocation2y);
  cout << "  ";
}
//erase bullet for jet plane 2
void printBullet2(int buletlocation2x, int buletlocation2y)
{
  char location = getCharAtxy(buletlocation2x - 1, buletlocation2y);
  if ((location == '|' || location == '\\' || location == '_' || location == '/') && (bullet2 == "-"))
  {
    addScore2();
  }
  if ((location == '|' || location == '\\' || location == '_' || location == '/') && (bullet2 == "<"))
  {
    add2Score2();
  }
  gotoxy(buletlocation2x, buletlocation2y);
  cout << bullet2;
}
void removeBulletFromArray2(int index)
{
  for (int x = index; x < bulletCount2 - 1; x++)
  {
    bullet2X[x] = bullet2X[x + 1];
    bullet2Y[x] = bullet2Y[x + 1];
  }
  bulletCount2--;
}

void addScore2()
{
  score2++;
}

void add2Score2()
{
  score2 = score2 + 2;
}
//show score for jet plane 2
void showScore2()
{
  gotoxy(90, 34);
  cout << playerName2 << "\tSCORE :" << score2;
}

void maze2()

{
  system("cls");
  cout << endl;
  cout << endl;
  cout << " *************************************************************************************************" << endl;
  cout << " **                                                                                             **" << endl;
  cout << " **                                                                                             **" << endl;
  cout << " **                                                                                             **" << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " **                                                                                             ** " << endl;
  cout << " ************************************************************************************************" << endl;
}
void enemyPlane()
{
  char minus = 45, underscore = 95, equal = 61, straightline = 124, bracket = 40, capitalL = 76, startbarcket = 91, closebracket = 93, lessthan = 60, staric = 42, singlequate = 39, sign = 96;
  char array1[15] = {minus, minus, minus, minus, minus, straightline, minus, minus, minus, minus, minus, ' ', ' ', ' ', ' '};
  char array2[15] = {' ', ' ', bracket, capitalL, startbarcket, underscore, closebracket, equal, equal, equal, equal, equal, lessthan, staric};
  char array3[15] = {' ', ' ', ' ', minus, singlequate, minus, sign, minus, ' ', ' ', ' ', ' ', ' '};

  gotoxy(enemyX, enemyY);
  for (int x = 0; x < 15; x++)
  {
    cout << array1[x];
  }
  gotoxy(enemyX, enemyY + 1);
  for (int x = 0; x < 15; x++)
  {
    cout << array2[x];
  }
  gotoxy(enemyX, enemyY + 2);
  for (int x = 0; x < 15; x++)
  {
    cout << array3[x];
  }
}
void enemyMove()
{
  if (directionofEnemy == "UP")
  {

    char location = getCharAtxy(enemyX, enemyY - 1);
    gotoxy(enemyX, enemyY - 1);
  
    if (location == ' ')
    {

      eraseEnemy(enemyX, enemyY);
      enemyY--;
      enemyPlane();
      Sleep(30);
    }
    if (location == '*')
    {
      directionofEnemy = "DOWN";
    }
  }
  if (directionofEnemy == "DOWN")
  {
    char location = getCharAtxy(enemyX, enemyY + 4);
    if (location == ' ')

    {
      eraseEnemy(enemyX, enemyY);
      enemyY++;
      enemyPlane();
      Sleep(30);
    }
    if (location == '*')
    {
      eraseEnemy(enemyX, enemyY);
      enemyX--;
      enemyPlane();
      directionofEnemy = "UP";
    }
  }

 
}
void eraseEnemy(int enemyerasex, int enemyerasey)
{
  gotoxy(enemyerasex, enemyerasey);
  for (int x = 0; x < 15; x++)
  {
    cout << " ";
  }
  gotoxy(enemyerasex, enemyerasey + 1);
  for (int x = 0; x < 15; x++)
  {
    cout << " ";
  }
  gotoxy(enemyerasex, enemyerasey + 2);
  for (int x = 0; x < 15; x++)
  {
    cout << " ";
  }
}
//show health for jet plane 1
void health()
{
  int colourindex = 4;
  gotoxy(43, 38);
  for (int index = 0; index < healthArrayCount; index++)
  {    
    cout << "\033[32m" << healthArray[index] << "\033[0m";
  }
  gotoxy(21, 38);
  cout << "POWER   OF " << playerName << "JET";

  if (round2HealthCheck == 2)
  {
    round1health();
    removeHealth();
  }
  else if (round2HealthCheck == 4)
  {
    finalhealth();
    removeHealth();
  }
  else if (round2HealthCheck == 6)
  {
    finalresult();
  }
  removeHealth();
}
//remove health for jet plane 1
void removeHealth()
{
  int value, extraHealth, count = 0, check;
  check = score2 + 1;
  if ((score2 % 10 == 0) || (check % 10 == 0))
  {

    value = score2 / 10;
    final = 12 - value;
    if (round2HealthCheck == 2)
    {
      healthArrayround2[final] = {' '};
    }
    else if (round2HealthCheck == 4)
    {
      healthForFinal[final] = {' '};
    }
    healthArray[final] = {' '};
  }

  else if ((final == 0) && (extraPowerCheck == true))
  {
    roundCount++;

    if (roundCount == 1)
    {
      round1();
    }
    else if (roundCount == 2)
    {
      finalround();
    }
  }
  if ((score2 > 122) && (extracheck == 0))
  {
    extraPower();
  }
}

void round1()
{
  
  system("cls");
  gotoxy(40, 12);
  cout << playerName2 << "\t is the WINNER of ROUND 1 ";
  sec();
  score = 0;
  score2 = 0;
  maze();
  round2HealthCheck = 2;
}
void round2()
{
  system("cls");
  gotoxy(40, 12);
  cout << playerName << "\t is the WINNER of ROUND 1 ";
  sec();
  score = 0;
  score2 = 0;
  maze();
  round2Health2Check = 2;
}
void round1health()
{
  gotoxy(42, 38);
  for (int index = 0; index < healthArrayCount; index++)
  {

    cout << "\033[32m" << healthArrayround2[index] << "\033[0m";
  }
  gotoxy(21, 38);
  cout << "POWER   OF  " << playerName << "JET";
}

void round1health2()
{

  gotoxy(109, 38);
  for (int index2 = 0; index2 < healthArrayCount; index2++)
  {

    cout << "\033[32m" << health2Arrayround2[index2] << "\033[0m";
  }
  gotoxy(90, 38);
  cout << " POWER OF " << playerName2 << "JET ";
}

void finalhealth()
{
  gotoxy(42, 38);
  for (int index = 0; index < healthArrayCount; index++)
  {

    cout << "\033[32m" << healthForFinal[index] << "\033[0m";
  }
  gotoxy(21, 38);
  cout << "POWER   OF  " << playerName << "JET";
  round2HealthCheck = 6;
}

void finalhealth2()
{
  gotoxy(109, 38);
  for (int index2 = 0; index2 < healthArrayCount; index2++)
  {

    cout << "\033[32m" << healthForFinal2[index2] << "\033[0m";
  }
  gotoxy(90, 38);
  cout << "POWER   OF  " << playerName2 << " JET";
  round2Health2Check = 6;
}

void health2()
{

  gotoxy(110, 38);
  for (int index2 = 0; index2 < healthArrayCount2; index2++)
  {
    cout << "\033[32m" << healthArray2[index2] << "\033[0m";
  }
  gotoxy(90, 38);
  cout << " POWER OF " << playerName2 << " JET ";
  if (round2Health2Check == 2)
  {
    round1health2();
    removeHealth2();
  }
  else if (round2Health2Check == 4)
  {
    finalhealth2();
    removeHealth();
  }
  else if (round2HealthCheck == 6)
  {
    finalresult();
  }

  removeHealth2();
}

void removeHealth2()
{
  int value,  check;
  check = score + 1;
  if ((score % 10 == 0) || (check % 10 == 0))
  {
    value = score / 10;
    finalpower = healthArrayCount2 - value;
    if (round2Health2Check == 2)
    {
      health2Arrayround2[finalpower] = {' '};
    }
    else if (round2Health2Check == 4)
    {
      healthForFinal2[finalpower] = {' '};
    }

    healthArray2[finalpower] = {' '};
  }

  else if ((finalpower == 0) && (flag2 == true))
  {
    roundCount2++;
    if (roundCount2 == 1)
    {
      round2();
    }
    else if (roundCount2 == 2)
    {
      finalround2();
    }
  }

  if (score > 122)
  {

    extraPower2();
  }
}
//bullet upgrade for jet plane 1
void bulletUpgrade()
{
  int final;
  final = score + score2;
  if (final > 30)
  {
    bulletVersion2Move();
  }
}
//bullet upgrade  tab for jet plane 1
void bulletVersion2()
{
  char minus = 45, lessthen = 62, dot = 35;
  char array1[5] = {dot, dot, dot, dot, dot};
  char array2[5] = {dot, minus, minus, lessthen, dot};
  char array3[5] = {dot, dot, dot, dot, dot};
  gotoxy(bulletVersion2x, bulletVersion2y);
  for (int x = 0; x < 5; x++)
  {
    cout << array1[x];
  }
  gotoxy(bulletVersion2x, bulletVersion2y + 1);
  for (int x = 0; x < 5; x++)
  {
    cout << array2[x];
  }
  gotoxy(bulletVersion2x, bulletVersion2y + 2);
  for (int x = 0; x < 5; x++)
  {
    cout << array3[x];
  }
}
//bullet upgrade  remove for jet plane 1
void bulletVersion2Erase()
{
  gotoxy(bulletVersion2x, bulletVersion2y);
  for (int x = 0; x < 5; x++)
  {
    cout << " ";
  }
  gotoxy(bulletVersion2x, bulletVersion2y + 1);
  for (int x = 0; x < 5; x++)
  {
    cout << " ";
  }
  gotoxy(bulletVersion2x, bulletVersion2y + 2);
  for (int x = 0; x < 6; x++)
  {
    cout << " ";
  }
}
//bullet upgrade move  for jet plane 1
void bulletVersion2Move()
{
  char location = getCharAtxy(bulletVersion2x, bulletVersion2y - 1);
  if (location == ' ')
  {
    bulletVersion2Erase();
    bulletVersion2y--;
    bulletVersion2();
    Sleep(300);
  }
}
void jetplane2Up()
{
  location2 = getCharAtxy(x2 + 70, y2 - 1);
  if (location2 == ' ')
  {
    erase(x2 + 70, y2);
    y2 = y2 - 1;
    jetplane2(x2 + 70, y2);
  }
  if (location2 == '#')
  {
    bullet2 = "<";
  }
  if (location2 == '@')
  {
  
    {
      extraPower2();
      count2++;
      flag2 = false;
    }
  }
}
void jetplane2Down()
{
  location2 = getCharAtxy(x2 + 70, y2 + 5);
  if (location2 == ' ')
  {
    erase(x2 + 70, y2);
    y2 = y2 + 1;
    jetplane2(x2 + 70, y2);
  }
  if (location2 == '#')
  {
    bullet2 = "<";
  }
  if (location2 == '@')
  {
    {
      extraPower2();
      count2++;
      flag2 = false;
    }
  }
}
void jetplane2Right()
{

  location2 = getCharAtxy(x2 + 82, y2);
  if (location2 == ' ')
  {
    erase(x2 + 70, y2);
    x2 = x2 + 1;
    jetplane2(x2 + 70, y2);
  }
  if (location2 == '#')
  {
    bullet2 = "<";
  }
  if (location2 == '@')
  {
    {
      extraPower2();
      count2++;
      flag2 = false;
    }
  }
}
void jetplane2Left()
{
  location2 = getCharAtxy(x2 + 69, y2);
  if (location2 == ' ')
  {
    erase(x2 + 70, y2);
    x2 = x2 - 1;
    jetplane2(x2 + 70, y2);
  }
  if (location2 == '#')
  {
    bullet2 = "<";
  }
  if (location2 == '@')
  {
    {
      extraPower2();
      count2++;
      flag2 = false;
    }
  }
}
void sec()
{

  for (int sec = 15; sec > 0; sec--)
  {

    gotoxy(40, 14);
    cout << " BE READY FOR NEXT ROUND: " << sec;
    Sleep(300);
    gotoxy(x, y);
    cout << " ";
  }
}
int finalround()
{

  if (roundCount < 2)
  {
    system("cls");
    gotoxy(40, 12);
    cout << playerName << "\t is the WINNER of ROUND 2 ";
    sec();
    score = 0;
    score2 = 0;
    maze();
    round2HealthCheck = 4;
  }
  system("cls");
  gotoxy(40, 12);
  cout << playerName2 << "\t is the WINNER ";
  cout << endl;
  resetFile();
  system("pause");
  return 0;
}
void resetFile()
{
  startagain=0;
  score=0;
  score2=0;
  final=12;
  finalpower=12;
  roundCount=0;
  roundCount2=0;
  storePower();
  storeScore(); 
  storeStartIndicator();
}
int finalround2()
{

  if (roundCount2 < 2)
  {
    system("cls");
    gotoxy(40, 12);
    cout << playerName << "\t is the WINNER of ROUND 2 ";
    sec();
    score = 0;
    score2 = 0;
    maze();
    round2Health2Check = 4;
  }
  system("cls");
  gotoxy(40, 12);
  cout << playerName << "\t is the WINNER ";
  cout << endl;
  resetFile();
  system("pause");
  return 0;
}
int finalresult()
{
  startagain = 1;
  system("cls");
  gotoxy(40, 12);
  cout << playerName << "\t is the WINNER ";
  cout << endl;
  resetFile();
  system("pause");
  return 0;
}

int finalresult2()
{
  startagain = 1;
  system("cls");
  gotoxy(40, 12);
  cout << playerName2 << "\t is the WINNER ";
  cout << endl;
  resetFile();
  system("pause");
   return 0;
}

string menu2()
{
  string number;
  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\t1.MODE" << endl;
  cout << endl;
  cout << "\t\t2.EXIT" << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
 getline (cin, number);
  return number;
}
//mode option for first menu
string modeOption()
{
  string number;
  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\t1.TWO PLAYER" << endl;
  cout << "\t\t3.EXIT" << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  getline(cin , number);
  return number;
}
//player option  for first menu
string twoplayerOption()
{
  string number;
  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\t1.FIRST PLAYER DETAIL" << endl;
  cout << endl;
  cout << "\t\t2.SECOUND PLAYER DETAIL" << endl;
  cout << endl;
  cout << "\t\t3.EXIT" << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  getline(cin , number);
  return number;
}
//player option for first menu
 int playerDetail()
{
  int number;
  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\tENTER PLAYER 1 NAME:";
  cin >> playerName;
  cout << endl;
  cout << endl;
  cout << "\t\t1.CHANGE COLOUR";
  cout << endl;
  cout << endl;
  cout << "\t\t2.EXIT";
  cout << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  cin >> number;
  return number;
  nameCount++;
}
//enter detail for player 2
int playerDetail2()
{
  int number2;
  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\tENTER PLAYER 2 NAME:";
  cin >> playerName2;
  cout << endl;
  cout << endl;
  cout << "\t\t1.CHANGE COLOUR";
  cout << endl;
  cout << endl;
  cout << "\t\t2.EXIT";
  cout << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  cin >> number2;
  return number2;
}
//changing colour for jet plane 1
string changingDetail()
{
  string number;
  menuview();
  cout << endl;
  cout << endl;

  cout << "\t\t1.JETCOLOUR" << endl;
  cout << endl;
  cout << "\t\t2.BULLET COLOUR";
  cout << endl;
  cout << endl;
  cout << "\t\t3.EXIT" << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  getline(cin ,number);
  return number;
}
//changing colour for jet plane 2
string changingDetail2()
{
  string number2;
  menuview();
  cout << endl;
  cout << endl;

  cout << "\t\t1.JETCOLOUR" << endl;
  cout << endl;
  cout << "\t\t2.BULLET COLOUR";
  cout << endl;
  cout << endl;
  cout << "\t\t3.EXIT" << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  getline(cin , number2);
  return number2;
}
//list  changing colour for jet plane 1
int listOfJetColour()
{

  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\t1.BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t2.GREEN";
  cout << endl;
  cout << endl;
  cout << "\t\t3.AQUA";
  cout << endl;
  cout << endl;
  cout << "\t\t4.RED";
  cout << endl;
  cout << endl;
  cout << "\t\t5.PURPLE";
  cout << endl;
  cout << endl;
  cout << "\t\t6.YELLOW";
  cout << endl;
  cout << endl;
  cout << "\t\t7.ORANGE";
  cout << endl;
  cout << endl;
  cout << "\t\t8.BROWN";
  cout << endl;
  cout << endl;
  cout << "\t\t9.DARK BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t10.WHITE";
  cout << endl;
  cout << endl;
  cout << "\t\t11.EXIT";
  cout << endl;
  cout << endl;
  cout << "ENTER HERE:";
  cin >> jetColour;
  if (jetColour == 11)
  {
    main();
  }
  
}
// list changing colour for jet plane 2
int listOfJet2Colour()
{

  menuview();
  cout << endl;
  cout << endl;

  cout << "\t\t1.BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t2.GREY";
  cout << endl;
  cout << endl;
  cout << "\t\t3.AQUA";
  cout << endl;
  cout << endl;
  cout << "\t\t4.RED";
  cout << endl;
  cout << endl;
  cout << "\t\t5.PURPLE";
  cout << endl;
  cout << endl;
  cout << "\t\t6.YELLOW";
  cout << endl;
  cout << endl;
  cout << "\t\t7.ORANGE";
  cout << endl;
  cout << endl;
  cout << "\t\t8.BROWN";
  cout << endl;
  cout << endl;
  cout << "\t\t9.DARK BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t10.WHITE";
  cout << endl;
  cout << endl;
  cout << "\t\t11.EXIT";
  cout << endl;
  cout << endl;
  cout << "ENTER HERE:";
  cin >> jet2Colour;
  if (jet2Colour == 11)
  {
    main();
  } 
}
//changing colour for  bullet jet plane 1
int listOfBulletColour()
{

  menuview();
  cout << endl;
  cout << endl;

  cout << "\t\t1.BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t2.GREEN";
  cout << endl;
  cout << endl;
  cout << "\t\t3.AQUA";
  cout << endl;
  cout << endl;
  cout << "\t\t4.RED";
  cout << endl;
  cout << endl;
  cout << "\t\t5.PURPLE";
  cout << endl;
  cout << endl;
  cout << "\t\t6.YELLOW";
  cout << endl;
  cout << endl;
  cout << "\t\t7.ORANGE";
  cout << endl;
  cout << endl;
  cout << "\t\t8.BROWN";
  cout << endl;
  cout << endl;
  cout << "\t\t9.DARK BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t10.WHITE";
  cout << endl;
  cout << endl;
  cout << "ENTER HERE:";
  cin >> bullet1Colour;

}
//changing colour for  bullet jet plane 2
int listOfBullet2Colour()
{

  menuview();
  cout << endl;
  cout << endl;
  cout << "\t\t1.BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t2.GREY";
  cout << endl;
  cout << endl;
  cout << "\t\t3.AQUA";
  cout << endl;
  cout << endl;
  cout << "\t\t4.RED";
  cout << endl;
  cout << endl;
  cout << "\t\t5.PURPLE";
  cout << endl;
  cout << endl;
  cout << "\t\t6.YELLOW";
  cout << endl;
  cout << endl;
  cout << "\t\t7.ORANGE";
  cout << endl;
  cout << endl;
  cout << "\t\t8.BROWN";
  cout << endl;
  cout << endl;
  cout << "\t\t9.DARK BLUE";
  cout << endl;
  cout << endl;
  cout << "\t\t10.WHITE";
  cout << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  cin >> bullet2Colour;
  
}
//print tab of power
void power()
{
  char capitalP = 80, atSign = 64;
  char array1[4] = {atSign, atSign, atSign, atSign};
  char array2[4] = {atSign, capitalP, capitalP, atSign};
  char array3[4] = {atSign, atSign, atSign, atSign};
  gotoxy(powerx, powery);
  for (int index = 0; index < 4; index++)
  {
    cout << array1[index];
  }
  gotoxy(powerx, powery + 1);
  for (int index = 0; index < 4; index++)
  {
    cout << array2[index];
  }
  gotoxy(powerx, powery + 2);
  for (int index = 0; index < 4; index++)
  {
    cout << array3[index];
  }
}
//erase tab of power
void powerErase()
{

  gotoxy(powerx, powery);
  for (int index = 0; index < 4; index++)
  {
    cout << " ";
  }
  gotoxy(powerx, powery + 1);
  for (int index = 0; index < 4; index++)
  {
    cout << " ";
  }
  gotoxy(powerx, powery + 2);
  for (int index = 0; index < 4; index++)
  {
    cout << " ";
  }
}
//move tab of power

void powerMove()
{
  char location = getCharAtxy(powerx, powery - 1);
  if (location == ' ')
  {
    powerErase();
    powery--;
    power();
    Sleep(300);
  }
}
//power tab call here 
void powerUpgrade()
{
  int final;
  final = score + score2;
  if (final > 50)
  {
    powerMove();
  }
}
//extra power print here
void extraPower()
{
  gotoxy(43, 40);
  SetConsoleTextAttribute(hConsole, 4);
  for (int index = 3; index < 13; index++)
  {
    cout << extraHealthArray[index];
  }
  gotoxy(20, 40);
  SetConsoleTextAttribute(hConsole, 7);
  cout << "EXTRA POWER";
  extraPowerErase();
}

//extra power erase here
void extraPowerErase()
{
  int final, value, check, validateScore;
  check = score2 + 1;
  if ((score2 % 10 == 0) || (check % 10 == 0))
  {

    gotoxy(60, 12);
    value = score2 / 10;
    final = value - 10;
    extraHealthArray[final] = {' '};
    if (final == 12)
    {

      extracheck = 2;
      round1();
      health();
      extraPowerCheck = true;
    }
  }
}
//extra power print here for jet plane 2
void extraPower2()
{
  gotoxy(110, 40);
  for (int index2 = 3; index2 < 13; index2++)
  {
    cout << "\033[31m" << extraHealthArray2[index2] << "\033[0m";
  }
  gotoxy(92, 40);
  SetConsoleTextAttribute(hConsole, 7);
  cout << "EXTRA POWER";
  extraPowerErase2();
}
//extra power erase here for jet plane 2
void extraPowerErase2()
{
  int final, value;
  if (score % 10 == 0)
  {
    value = score / 10;
    final = value - 10;
    extraHealthArray2[final] = {' '};
    if (final == 11)
    {

      extracheck2 = 2;
      round2();
      health2();
      flag2 = true;
    }
  }
}
//game menu view 
void menuview()
{
  system("cls");
 
  cout << endl;
  cout << endl;
  SetConsoleTextAttribute(hConsole, 14);
  cout << "___________.___  ________  ___ ___________________________________             ____.______________________        ________    _____      _____  ___________          " << endl;
  cout << "\\_   _____/|   |/  _____/ /   |   \\__    ___/\\_   _____/\\______   \\           |    |\\_   _____/\\__    ___/       /  _____/   /  _  \\    /     \\ \\_   _____/          " << endl;
  cout << " |    __)  |   /   \\  ___/    ~    \\|    |    |    __)_  |       _/           |    | |    __)_   |    |         /   \\  ___  /  /_\\  \\  /  \\ /  \\ |    __)_           " << endl;
  cout << " |     \\   |   \\    \\_\\  \\    Y    /|    |    |        \\ |    |  \\        /\\__|    | |        \\  |    |         \\    \\_\\  \\/    |    \\/    Y    \\|        \\          " << endl;
  cout << " \\___  /   |___|\\______  /\\___|_  / |____|   /_______  / |____|_  /       \\________|/_______  /  |____|          \\______  /\\____|__  /\\____|__  /_______  /          " << endl;
  cout << "     \\/                \\/       \\/                   \\/         \\/                          \\/                          \\/         \\/         \\/        \\/           " << endl;

  SetConsoleTextAttribute(hConsole, 7);
  }
  //furst menu option
int finalmenu()
{
  menuview();
  int number;
  
 loadstartindicator();
  cout << endl;
  cout << endl;
  cout << "\t\t1.START";
  cout << endl;
  cout << endl;
  if (startagain == 1)
  {
   loadPower();
   loadScore();

    for(int a=final;a<=12;a++)
  {
    healthArray[a]={' '};
  }
  for(int a=finalpower;a<=12;a++)
  {
    healthArray2[a]={' '};
  } 
    cout<<final;

    cout << "\t\t2.CONTINUE";
    cout << endl;
    cout << endl;
  }
  cout << "\t\t3.EXIT";
  cout << endl;
  cout << endl;
  cout << "\t\tENTER HERE:";
  cin>>number;
  return number;
}
