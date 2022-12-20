#include <iostream>

using namespace std;
class AbstractPhone {
    protected:
    string ModelName;
    string Manifacturer;
    int YearRelaesed;
    
    public:
    static int PhoneCount;
    
    AbstractPhone(string ModelName, string Manifacturer, int YearRelaesed) {
        this->ModelName = ModelName;
        this->Manifacturer = Manifacturer;
        this->YearRelaesed = YearRelaesed;
        PhoneCount++;
    }
       string getModlName() {
           return ModelName;
       }
       void setModelName(string ModelName) {
           this->ModelName = ModelName;
       }
       
       string getManifacturer() {
           return Manifacturer;
       }
       void setManifacturer(string Manifacturer) {
           this->Manifacturer = Manifacturer;
       }
       int getYearRelaesed() {
           return YearRelaesed;
       }
       
       void setYearRelaesed(int YearRelaesed) {
           this->YearRelaesed = YearRelaesed;
       }
       
       void call() {
           cout << "Absrtact phone is calling..." <<endl;
          }
        
        void receiveCall() {
            cout << "Abstract phone is receiving call..." << endl;
        }
        virtual void comeraPress() = 0;
        
        void connectTowifi() {
            cout <<"Absrtact phone connected to wifi..." << endl;
        }
};

 int AbstractPhone::PhoneCount = 0;
 
 class SamsungPhone: public AbstractPhone {
     public:
      SamsungPhone(string setModelName,  int YearRelaesed): AbstractPhone(ModelName,  "Samsung", YearRelaesed) {}
      void comeraPress() {
          // Complex logic for Camera
          cout << "Camera click on Samsung phone" << endl;
      }
      void cameraPress(string cameraMode) {
          cout << "camera pressed in " << cameraMode << "mode" << endl;
      }
 };
 
 class ApplePhone: public AbstractPhone {
     public:
      ApplePhone(string ModelName,  int YearRelaesed): AbstractPhone(ModelName,  "Apple", YearRelaesed) {}
      
      void comeraPress() {
          // Complex logic for camera press 
          
          cout << "Camera click on Apple phone" << endl;
      }
      void cameraPress(string cameraMode) {
          cout << "camera pressed in " << cameraMode << "mode" << endl;
      }
 };
 class Onlineshop {
     string Name;
     
     public:
     static int SoldPhoneCount;
     
     Onlineshop(string Name){
         this->Name = Name;
     }
     string getName() {
         return Name;
     }
     void setName(string Name) {
         this->Name = Name;
     }
     void sellPhone() {
         cout << "Online shop sold phone to customer" << endl;
         SoldPhoneCount++;
     }
     
     void sellPhone(SamsungPhone phone) {
         cout << "Online shop sold" << phone.getManifacturer() << " " << phone.getModlName() << " to customer" << endl;
         SoldPhoneCount++;
     }
     
     void sellPhone(ApplePhone phone) {
         cout << "Online shop sold" << phone.getManifacturer() << " " << phone.getModlName() << " to customer" << endl;
         SoldPhoneCount++;
     }
 };
 
 int Onlineshop::SoldPhoneCount = 0;
 
int main()
{
    ApplePhone iPhone14("iPhone 14", 2022); 
    SamsungPhone GalaxyS22("Galaxy S22", 2022);
    
    Onlineshop PhoneShop("Phone shop");
    
   // PhoneShop.sellPhone();
   // cout << Onlineshop::SoldPhoneCount << endl;
    
   // PhoneShop.sellPhone(iPhone14);
   // cout << Onlineshop::SoldPhoneCount << endl;
    
   // PhoneShop.sellPhone(GalaxyS22);
   // cout << Onlineshop::SoldPhoneCount << endl;
    
   // iPhone14.call();
   // iPhone14.receiveCall();
   //iPhone14.connectTowifi();
    
    return 0;
}





