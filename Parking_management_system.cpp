#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int car = 0, bike = 0, truck =0, charge = 0, totalcharge = 0, totalvechile = 0;
    while(true){
    cout << "\n\n\t\t\t--------------PARKING SYSTEM-------------\n\n\n";
    cout << "\t\t\tBike/Scooter->40 ruppes\n\t\t\tCar->80 ruppes\n\t\t\tTruck->150 ruppes";
    cout << "\n\n\t\t\tPress 1 for bike/scooter parking\n";
    cout << "\t\t\tPress 2 for car parking\n";
    cout << "\t\t\tPress 3 for truck parking\n";
    cout << "\t\t\tPress 4 for show record\n";
    cout << "\t\t\tPress 5 for delete record\n";

    cout << "\t\t\tENTER CHOICE-->";
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        bike++;
        charge = charge + 40;
        totalvechile++;
        cout<<"\t\t\t1 bike is parked\n";
        system("pause");
        system("cls");
       break;
    case 2:
        car++;
        charge = charge + 80;
        totalvechile++;
        cout<<"\t\t\t1 car is parked\n";
        system("pause");
        system("cls");
        break;
    case 3:
        truck++;
        charge = charge + 150;
        totalvechile++;
        cout<<"\t\t\t1 truck is parked\n";
        system("pause");
        system("cls");
        break;
    case 4:
    cout<<"\n\t\t\tTOTAL AMOUNT-->"<<charge<<endl;
    cout<<"\t\t\tTOTAL vechile-->"<<totalvechile<<endl;
    cout<<"\t\t\tBIKE--->"<<bike;
    cout<<"\n\t\t\tCAR--->"<<car;
    cout<<"\n\t\t\tTRUCK--->"<<truck;
        system("pause");
        system("cls");
        break;
    case 5:
      car=0;
      bike=0;
      truck=0;
      charge=0;
      totalvechile=0;
      cout<<"\n\t\t\tDELETE RECORD";
      break;
      default:
      cout<<"\t\t\tINVALID INPUT";
    }
    }
    return 0;
}