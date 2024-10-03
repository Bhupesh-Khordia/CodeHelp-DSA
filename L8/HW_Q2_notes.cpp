//Code Written by me.

# include <iostream>
using namespace std;

int main () {
    int amount;
    cout << "Enter amount of money: ";
    cin >> amount;

    switch (amount / 100) {
        case 0 : break;
        default : cout << "You need " << amount / 100 << " notes of 100 Rupees." << endl;
                amount = amount % 100;
    }

    switch (amount / 50) {
        case 0 : break;
        default : cout << "You need " << amount / 50 << " notes of 50 Rupees." << endl;
                amount = amount % 50;
    }

    switch (amount / 20) {
        case 0 : break;
        default : cout << "You need " << amount / 20 << " notes of 20 Rupees." << endl;
                amount = amount % 20;
    }

    switch (amount / 1) {
        case 0 : break;
        default : cout << "You need " << amount / 1 << " notes of 1 Rupees." << endl;
                amount = amount % 1;
    }
}

//Code copied from comment section.

// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter the amount"<<endl;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee notes required are="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee notes required are="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee notes required are="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee notes required are="<<Rs1<<endl; 
                  
//            }
// }