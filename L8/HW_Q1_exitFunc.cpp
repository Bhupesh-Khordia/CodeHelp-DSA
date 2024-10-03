# include <iostream>
using namespace std;

int main () {
    while(true) {
        int num;
        cout << "Enter a number(1, 2, 3) or 0 to exit: ";
        cin >> num;

        switch (num) {
            case 1 : cout << "you chose 1."<<endl;
                    break;
            case 2 : cout << "you chose 2."<<endl;
                    break;
            case 3 : cout << "you chose 3."<<endl;
                    break;
            case 0 : cout << "the programme has been terminated."<<endl;
                    exit(EXIT_SUCCESS);
            default : cout << "invalid input."<<endl;
        }
    }
    cout << "This will never be execute." ;
}