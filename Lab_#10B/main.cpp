#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct PurchaseType
{
    string customerID;
    string productName;
    double price;
    int qtyPurchased;
    double taxRate;
};

void openFile(ifstream &reader, string prompt);
void readFile(ifstream&, PurchaseType[]);
void printPurchaseData(PurchaseType[], int size);

int main()
{
    ifstream reader;
    string prompt1 = "Enter file name\n";


    return 0;
}

void openFile(ifstream &reader, string prompt)
{

}
void readFile(ifstream&, PurchaseType[])
{

}
void printPurchaseData(PurchaseType[], int size)
{
    
}