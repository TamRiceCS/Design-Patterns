#include <iostream>
#include <vector>
#include <string>
#include <map>

class FactoryMethod : public Pattern{
    class Product{
        public:
            virtual void sellProduct(){}
            virtual void buyProduct(){}
        protected:
            std::string name;
            int barcode;
            int price;
            int count;
            int inventoryLimit;
    };

    class LittlestPetShop : protected Product{
        private:
            std::string petName;
            std::string waveNum; 
        public:
            LittlestPetShop(std::string name, int barcode, int price, int count, std::string petName, std::string waveNum, int limit){
                this->name = name;
                this->barcode = barcode;
                this->price = price;
                this->count = count;
                this->petName = petName;
                this->waveNum = waveNum;
                this->inventoryLimit = limit;
            }
            void sellProduct(){
                if(count == 0) {
                    std::cout << this->name << " is out of stock, order more." << std::endl;
                }
                else{
                    count--;
                    std::cout << this->name << " only has " << this->count << "remaining for sale." << std::endl;
                }
            }

            void buyProduct(){
                std::string purchaseNum = "0";
                if(count == inventoryLimit) {
                    std::cout << "We do not have anymore space to store " << this->name << " has " << this->count << " in stock." << std::endl;
                }
                else {
                    while(purchaseNum != "x")
                        std::cout << "Please enter a quanity to order. If the number you enter is over the limit, it will max out stock. Press \'x\' to cancel order." << std::endl;
                        std::cin >> purchaseNum;

                        if(std::isdigit(purchaseNum)) {
                            if(stoi(purchaseNum) + count >= inventoryLimit) {
                                count = inventoryLimit;
                                std::cout << "Maxing out " << this->name << " with the count of " << this->count << std::endl;
                            }
                            else{
                                count += stoi(purchaseNum);
                                std::cout << "The current number of " << this->name << " is " << this->count << std::endl;
                            }
                        }
                        else {
                            std::cout << "Your input was not a number." << std::endl;
                        }


                }

            }
            
            
    };

    class Plushie : private Product{
        private:
        public:

    };

    class Store{
        public:
            Store(){
                std::cout << "Openning the store..." << std::endl;
            }
            void sellProduct(){

            }
        private:
            std::vector<Product> itemsForSale;
            virtual void purchaseProduct() {
            }  
    };

    class ToyStore: private Store{

    };
    
};