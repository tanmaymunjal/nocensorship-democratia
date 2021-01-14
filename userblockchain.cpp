#include <iostream>
#include <string>
using namespace std;

int main(){
    return 0;
};
class saysteminfo{
 public:
  float supply= 100000;
  float coinvalue;
  float pastvalue[1000000];
  int currentblock;
};
class Addres{
    public:
     string addressname;
     float accountbalance;
     double pk;
     Addres(string a,float b){
         addressname=a;
         accountbalance=b;
     };
    private:
     double prk;
     bool checkvalidity(bool wishfortransaction,float amount,bool minersupport){
         bool valid;
          if(wishfortransaction==false){
              bool valid=false;
          }
           else if (wishfortransaction==true)
           { if(accountbalance>=amount)
           { 
               if(minersupport==true){
                    bool valid=true;
           } else{
               bool valid=false;
             }
               }else{
               bool valid=false;
           };
        };
           return(valid);
      };
     void transaction(bool checkvalidity(bool wishfortransaction,float amount),bool wishfortransaction,float amount,float accountbalance){
           if(checkvalidity(wishfortransaction,amount)==true){
               accountbalance-=amount;
                };
            };
       };

//if(tx[1]==1){
   //#include <message>;
   //return message.main();};

