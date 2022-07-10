Answer 2.
#include <iostream>
using namespace std;
long hms_to_secs(int , int, int);
int main()
{
    char ch, temp;
    int hrs, mins, secs;
    long result;
    do
    {
        cout << "Enter time (HH:MM:SS): ";
        cin >> hrs >> temp >> mins >> temp >> secs;
        long result = hms_to_secs(hrs, mins, secs);
        cout << "Total seconds: " << result << endl;
        cout << "Want to try again(y/n): ";
        cin >> ch;
    }while(ch == 'y');
    cout << "\nExit";
    cout<<"\nBy HeenuReet 21BCS1055";
    return 0;
}

long hms_to_secs(int hrs, int mins, int secs)
{
    long totalSecs = 3600 * hrs + 60 * mins + secs;
    return totalSecs;
}