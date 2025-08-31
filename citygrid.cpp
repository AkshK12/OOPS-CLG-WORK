#include<iostream>
#include<vector>
using namespace std;

class city{
    public:
    int houses;
    void addhouse(){
        cout<<"ENTER NUMBER OF HOUSES IN CITY: ";
        cin>>houses;
    }
    float hbill=0;
    float cbill=0;


};
class house: public city{
    public:
        int numappliance;
    

    void houseinfo(int houseNumber) {
        cout << "\nHouse " << houseNumber;
        cout << "Enter number of appliances in this house: ";
        cin >>numappliance;
    }
};


class appliances:public house{
    public:
    void applianceinfo(){
        
        
        
        vector<string> name(numappliance);
        vector<int> wattage(numappliance), hours(numappliance);
        vector<float> abill(numappliance);

        for(int i=0;i<numappliance;i++){
            cout << "\nEnter name of appliance " << i + 1 << ": ";
            cin >> name[i];

            cout << "Enter wattage of " << name[i] << ": ";
            cin >> wattage[i];

            cout << "Enter daily usage hours of " << name[i] << ": ";
            cin >> hours[i];

            abill[i] = (wattage[i] / 1000.0) * hours[i] * 30 * 5;
            hbill+=abill[i];
        }
       cout << "House total bill = Rs. " << hbill << endl;
        cbill += hbill; 
    
        
    }

};
int main(){
    appliances a;
    a.addhouse();
    for(int b=0;b<a.houses;b++){
        a.houseinfo(b);
       if (a.numappliance > 0) {
            a.applianceinfo();  
        } else {
            cout << "No appliances in this house.\n";
        }
    }
      cout << "\nCity Total Bill = Rs. " << a.cbill << endl;
    return 0;
}




