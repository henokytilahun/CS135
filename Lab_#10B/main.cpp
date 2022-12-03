/*
  Name: Henok Tilahun, 5007740928, 1021, 10B
  Description:  funcGets input from user using user-definedtions.
  Check for failure using user defined funcitions. Displays a
  data sheet using a struct named PurchaseType.
  Input: Ints, strings, chars, and structs
  Output: chars, bools, ints, and void
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

using namespace std;

struct PurchaseType
{
    string customerID;
    string productName;
    string price;
    string qtyPurchased;
    string taxRate;
};
//function prototypes
void openFile(ifstream &reader, string prompt);
void readFile(ifstream &reader, PurchaseType a[]);
void printPurchaseData(PurchaseType a[], int size,double t[],int c);
void total(PurchaseType a[], int size, double t[], int &c);
/*
  FUNCTION_IDENTIFIER: Lets the Operating System run this program.
  parameters: N/A
  return value: returns 0
*/

int main()
{
    ifstream reader;
    string prompt1 = "Enter file name\n**";
    int const size = 10;
    PurchaseType a[size];
    openFile(reader, prompt1);

    readFile(reader, a);
    reader.close();

    int c = 0;
    double t[size];
    total(a, size, t, c);
    printPurchaseData(a, size, t, c);

    return 0;
}
/*
  FUNCTION_IDENTIFIER: Opens file.
  parameters: ifstream, string
  return value: N/A
*/
void openFile(ifstream &reader, string prompt)
{
    cout << prompt;
    string filename = "";
    cin >> filename;
    reader.open(filename.c_str());
    while(!reader)
    {
        if(!reader)
        {
            cout << "\nError: Invalid File\n" << prompt;
            cin.clear();
            cin.ignore(100, '\n');
            cin >> filename;
        }
        reader.open(filename.c_str());
    }
}
/*
  FUNCTION_IDENTIFIER: Reads file.
  parameters: ifstream, struct array
  return value: N/A
*/
void readFile(ifstream &reader, PurchaseType a[])
{
    string line = "";
    int i = 0;
    while(getline(reader, line))
    {
        stringstream ss(line);
        getline(ss, a[i].customerID, ',');
        getline(ss, a[i].productName, ',');
        getline(ss, a[i].price, ',');
        getline(ss, a[i].qtyPurchased, ',');
        getline(ss, a[i].taxRate, ',');
        i++;
    }
}
/*
  FUNCTION_IDENTIFIER: Calculates total and checks for unique customers.
  parameters: struct array, int, double
  return value: N/A
*/
void total(PurchaseType a[], int size, double t[], int &c)
{
    for(int i = 0; i < size; i++)
    {
        double totall = stod(a[i].price) * stod(a[i].qtyPurchased);
        totall *= (stod(a[i].taxRate) + 1);
        t[i] = totall;
        if(a[i].customerID != a[i+1].customerID)
        {
            c++;
        }
    }
}
/*
  FUNCTION_IDENTIFIER: Displays results.
  parameters: N/A
  return value: N/A
*/
void printPurchaseData(PurchaseType a[], int size, double t[], int c)
{
    double total = 0;
    cout << "\n+-------------+--------------+-------+----------+---"
    << "-------+--------+\n" << "| Customer ID | Product Name | Price"
    << " | Quantity | Tax Rate | Total  |\n"
    << "+-------------+--------------+-------+----------+----------"
    << "+--------+\n";
    for(int i = 0; i < size; i++)
    {
        cout << setprecision(2) << fixed;
        cout << "|" << setw(12) << a[i].customerID << " |" << setw(13) 
        << a[i].productName << " |"
        << setw(6) << a[i].price << " |" << setw(9) << a[i].qtyPurchased
        << " |" << setw(9) 
        << (stod(a[i].taxRate) *100) << " |" << setw(7) << t[i] 
        << " |\n";
        total += t[i];
    }
    total = total/size;
    cout << "+-------------+--------------+-------+----------+--------"
    << "--+--------+\n";
    cout << "Unique users:  " << c;
    cout << "\nAverage total: $" << total;
}