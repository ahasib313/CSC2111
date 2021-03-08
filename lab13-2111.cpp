#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;


int main()
{
    int randomNums[5];
    int inputNums[5];
    char play;
    int counter;

    cout << "Start game (Y or N)?: ";
    cin >> play;
    cout << endl;

    while (play == 'y')
    {
        srand(time(0));
        for (int i = 0; i < 5; i++)
            randomNums[i] = rand() % 10 + 1;

        cout << "Guess 5 numbers (1-10): " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter the number " << i + 1 << ": ";
            cin >> inputNums[i];
            while (inputNums[i] > 10 || inputNums[i] < 1)
            {
                cout << "Error: Number out of range. Try again!" << endl;
                cout << "Enter the number" << i + 1 << ": ";
                cin >> inputNums[i];
            }
        }
        counter = 0;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
                if (inputNums[i] == randomNums[j])
                    counter++;
        }

        if (counter == 5)
            cout << "You Win!" << endl << endl;
        else
        {
            cout << "You Lose!" << endl;
            cout << "The random numbers are: ";
            for (int i = 0; i < 5; i++)
                cout << randomNums[i] << " ";

        }
        cout << "\nDo you want to play again (Y or N)?: ";
        cin >> play;
        cout << endl;
    }
}

void sortNums(int arr[])
{
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted random numbers: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}