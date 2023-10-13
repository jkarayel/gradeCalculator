
#include <iostream>
using namespace std;
#include <string>

string calcLetter(double avg);

int main()
{
    string name;
    double grades[6] = { 0 };
    int size = sizeof(grades) / sizeof(double);

    cout << "First-Last Name ==>";
    getline(cin, name);
    //grades[size - 1] = 0;
    for (int i = 0; i < size - 1; i++)
    {   
        cout << "Enter grade #" << i + 1 << "\t";
        cin >> grades[i];
        grades[size - 1] += grades[i];
    }

    double avg = grades[size - 1] / (size - 1);
    

    cout << "**************************" << endl;
    cout << "The Grade is" << "\t" << avg << endl;
    cout << "The Letter Grade is" << "\t" << calcLetter(avg) << endl;
    
}



string calcLetter(double avg){
    string letter;
    if (avg >= 90){
        letter = "A";
    }
    else if (avg >= 80){
        letter = "B";
    }
    else if (avg >= 70) {
        letter = "C";
    }
    else if (avg >= 60) {
        letter = "D";
    }
    else{
        letter = "F";
    }
    return letter;
}







/*double calcTotal(double grades[])
{
    grades[5] = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];
}
*/