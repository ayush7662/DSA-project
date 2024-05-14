//restaurant menu system
#include <iostream>
using namespace std;
int main(){
    int order,no_deals;
    cout<<"|*---------------------------MENU-----------------------------*|"<<endl;
    cout<<endl;
    cout<<"(1)  Chicken Biryani                    $2 only."<<endl;
    cout<<"(2)  Chicken Palao                      $1.5 only."<<endl;
    cout<<"(3)  Chinese Rice                       $2.5 only."<<endl;
    cout<<"(4)  Chicken Burgar                     $1 only."<<endl;
    cout<<"(5)  Nawabi Pizza                       $4.5 only."<<endl;
    cout<<"(6)  2.5 Litre Coke                     $1.75 only."<<endl;
    cout<<endl;
    cout<<"Please select the order number: ";
    cin>>order;
    cout<<"Please enter the number of deals: ";
    cin>>no_deals;
    cout<<endl;
    switch(order) {
    
            case 1:
        cout<<"Order : Chicken Biryani."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $2 only."<<endl;
        cout<<"Total price : "<<"$"<<2*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
            case 2:
        cout<<"Order Chicken Palao."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $1.5 only."<<endl;
        cout<<"Total price : "<<"$"<<1.5*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 3:
        cout<<"Order : Chinese Rice."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $2.5 only."<<endl;
        cout<<"Total price : "<<"$"<<2.5*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 4:
        cout<<"Order : Chicken Burgar."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $1 only."<<endl;
        cout<<"Total price : "<<"$"<<1*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 5:
        cout<<"Order : Nawabi Pizza ."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $4.5 only."<<endl;
        cout<<"Total price : "<<"$"<<4.5*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
                case 6:
        cout<<"Order : 2.5 Litre Coke."<<endl;
        cout<<"Number of deals : "<<no_deals<<endl;
        cout<<"Price of each deal: $1.75 only."<<endl;
        cout<<"Total price : "<<"$"<<1.75*no_deals<<" "<<"only."<<endl;
        cout<<endl;
        cout<<"~---------THANK YOU FOR COMING-----------~"<<endl;
        break;
    
} return 0;
}