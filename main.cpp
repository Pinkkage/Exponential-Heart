#include <iostream>
#include <string>

using namespace std;


int exponentialLoveTest()
{
    int i,j,k,x;
    cout << "How much do you like me (on a scale from 1-15)?" << endl;
    cin >> i;
    if (i<=0)
    {
        cout << "That's beyond out of the question (& you are a very bad boyfriend/girlfriend)!!!" << endl;
        return 0;
    }
    if (i>15)
    {
        cout << "Awwwwww - you are the sweetest boyfriend/girlfriend EVER!" << endl;
        return 0;
    }
    //top_
    for (int k=1; k<=i; k++)
        cout << " ";
    for (int k=1; k<=i; k++)
        cout << "_";
    for (int k=1; k<=i; k++)
        cout << "  ";
    for (int k=1; k<=i; k++)
        cout << "_";
    cout << endl;
    //side
    for (j=i-1; j>=0; j--)
    {
        for (k=1; k<=j; k++)
            cout << " ";
        cout << "/";
        for (k=1; k<=i+2*(i-j-1); k++)
            cout << " ";
        cout << "\\";
        for (k=1; k<=j; k++)
            cout << "  ";
        cout << "/";
        for (k=1; k<=i+2*(i-j-1); k++)
            cout << " ";
        cout << "\\";
        cout << endl;
    }
    //return
    for (j=0; j<3*i; j++)
    {
        for (k=1; k<=j; k++)
            cout << " ";
        cout << "\\";
        for (k=1; k<=2*(3*i-j-1); k++)
            cout << " ";
        cout << "/";
        cout << endl;
    }
}

int main()
{
    exponentialLoveTest();
    return 0;
}
