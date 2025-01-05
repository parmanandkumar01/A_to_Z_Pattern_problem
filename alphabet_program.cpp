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

// Function print the pattern of the
// alphabets from A to Z
void printPattern(char character)
{
    switch (character)
    {
    case 'A':
        printA();
        break;
    case 'B':
        printB();
        break;
    case 'C':
        printC();
        break;
    case 'D':
        printD();
        break;
    case 'E':
        printE();
        break;
    case 'F':
        printF();
        break;
    case 'G':
        printG();
        break;
    case 'H':
        printH();
        break;
    case 'I':
        printI();
        break;
    case 'J':
        printJ();
        break;
    case 'K':
        printK();
        break;
    case 'L':
        printL();
        break;
    case 'M':
        printM();
        break;
    case 'N':
        printN();
        break;
    case 'O':
        printO();
        break;
    case 'P':
        printP();
        break;
    case 'Q':
        printQ();
        break;
    case 'R':
        printR();
        break;
    case 'S':
        printS();
        break;
    case 'T':
        printT();
        break;
    case 'U':
        printU();
        break;
    case 'V':
        printV();
        break;
    case 'W':
        printW();
        break;
    case 'X':
        printX();
        break;
    case 'Y':
        printY();
        break;
    case 'Z':
        printZ();
        break;
    }
}


// Function to print star patterns for each character in a string
void printStringPatterns(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printPattern(str[i]);
            printf("\n"); // Add a blank line between characters for clarity
        } else {
            printf("Character '%c' is not supported\n", str[i]);
        }
    }
}


int main()
{
   
     const char *name = "PARMANAND";
      printStringPatterns(name);

   
  
}