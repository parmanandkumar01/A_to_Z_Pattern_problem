#include <iostream>
using namespace std;
void printA()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j > 0 && j < 4 || i != 0 && j == 0 || i != 0 && j == 4 || i == 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        // next line
        cout << endl;
    }
}
void printB()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j < 4 || i > 0 && i < 6 && j == 4 || i == 3 || i == 6 && j < 4 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printC()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j > 0 || i > 0 && i < 6 && j == 0 || i == 6 && j > 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printD()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j < 4 || i > 0 && i < 6 && j == 4 || i == 6 && j < 4 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printE()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 3 || i == 6 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printF()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 3 && j < 4 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printG()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 3 || i == 6 || j == 0 || j == 4 && i > 2 && i < 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printH()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 3 || j == 4 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printI()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 2 || i == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printJ()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 2 || i == 6 && j < 3 || j == 0 && i > 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printK()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 3 || i - j == 3 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printL()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < 6 && j == 0 || i == 6 && j > 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printM()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {

            if (j == 0 || j == 6 || (j == i && i <= 3) || (j + i == 6 && i <= 3))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printN()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {

            if (j == 0 || j == 6 || i == j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printO()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (i == 0 && j > 0 && j < 4 || j == 4 && i > 0 && i < 6 || i == 6 && j > 0 && j < 4 || j == 0 && i > 0 && i < 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printP()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 && i != 0 || i == 0 && j != 0 && j != 4 || j == 4 && i != 0 && i <= 2 || i == 3 && j != 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printQ()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 && j != 0 && j != 4 || j == 4 && i != 0 || i == 6 && j != 0 && j != 4 || j == 0 && i != 0 && i != 6 || i - j == 2 && i>3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printR()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 || i == 0 && j != 0 && j != 4 || j == 4 && i != 0 && i != 3 || i == 3 && j != 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printS()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 0 && i <= 3 || i == 0 || i == 3 || i == 6 || j == 4 && i >= 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printT()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || j == 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printU()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 4 && i != 6 || i == 6 && j != 0 && j != 4 || j == 0 && i != 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printV()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if (j - i == 0 || j + i == 12)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printW()
{
    for (int i = 0; i < 7; i++) 
    {
        for (int j = 0; j < 7; j++) 
        {
            
            if (j == 0 || j == 6  || i+j==6 && i > 2  || i-j ==0 && i>2 ) 
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl; 
    }
}
void printX()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j - i == 0 || j + i == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printY()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j - i == 0 && i <= 3 || j + i == 6 && i <= 3 || j == 3 && i >= 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printZ()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 0 || j + i == 6 || i == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
   
   printA();
   cout << endl << endl << endl;
   printB();
   cout << endl << endl << endl;
   printC();
   cout << endl << endl << endl;
   printD();
   cout << endl << endl << endl;
   printE();
   cout << endl << endl << endl;
   printF();
   cout << endl << endl << endl;
   printG();
   cout << endl << endl << endl;
   printH();
   cout << endl << endl << endl;
   printI();
   cout << endl << endl << endl;
   printJ();
   cout << endl << endl << endl;
   printK();
   cout << endl << endl << endl;
   printL();
   cout << endl << endl << endl;
   printM();
   cout << endl << endl << endl;
   printN();
   cout << endl << endl << endl;
   printO();
   cout << endl << endl << endl;
   printP();
   cout << endl << endl << endl;
   printQ();
   cout << endl << endl << endl;
   printR();
   cout << endl << endl << endl;
   printS();
   cout << endl << endl << endl;
   printT();
   cout << endl << endl << endl;
   printU();
   cout << endl << endl << endl;
   printV();
   cout << endl << endl << endl;
   printW();
   cout << endl << endl << endl;
   printX();
   cout << endl << endl << endl;
   printY();
   cout << endl << endl << endl;
   printZ();
   cout << endl << endl << endl;
   
  
}