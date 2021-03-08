#include <iostream>
#include <string>

using namespace std;

int main() {
    int* votes; 
    string* names;
    int sizeofarray;
    cout << "Enter the number of candidates" << "\n";
    cin >> sizeofarray; 
    votes = new int[sizeofarray];
    names = new string[sizeofarray];
    int total = 0;
    int max = 0;
    

    for (int i = 0; i < sizeofarray; i++)
    {
        cout << "Enter last name of candidate " << i<< " : ";
        cin >> names[i];
        cout << "Enter the number of votes candidate " << i << " (" << names[i] << ") has received: ";
        cin >> votes[i];
        if (votes[i] > max)
        {
            max = votes[i];
            j = i;
        }
        total = total + votes[i];
    }
    cout << "\n*******************ELECTION RESULTS*******************" << endl;
    cout << "Name of candidate" << "\t" << "Vote Received" << "\t" << "Percentage of votes" << endl;
    for (int i = 0; i < sizeofarray; i++) {
        cout << names[i] << "\t\t\t";
        cout << votes[i] << "\t\t";
        cout << (votes[i] * 100) / total << "%" << endl;
    
    }
   
    cout << "The winner is " << names[j] << endl;
   
    cout << "---------------------------------------" << endl;
    cout << "Total votes: "<< total << endl;


}