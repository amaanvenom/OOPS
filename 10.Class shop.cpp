10.Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. 
#include <iostream>
#include <string>
using namespace std;
class Invoice {
 private:
 string partNumber;
 string partDescription;
 int quantity;
 double price_per_item;
 public:
 Invoice(string partNum, string partDesc, int qty, double price) {
 partNumber = partNum;
 partDescription = partDesc;
 setQuantity(qty);
 setPricePerItem(price);
 }
 void setPartNumber(string partNum) {
 partNumber = partNum;
 }
 string getPartNumber() const {
return partNumber;
 }
 void setPartDescription(string partDesc) {
 partDescription = partDesc;
 }
 string getPartDescription() const {
 return partDescription;
 }
 void setQuantity(int qty) {
 if (qty < 0) { quantity = 0; } 
 else { quantity = qty;}
 }
 int getQuantity() const {
 return quantity;
 }
 void setPricePerItem(double price) {
 if (price < 0) { price_per_item = 0.0; } 
 else { price_per_item = price; }
 }
 double getPricePerItem() const {
 return price_per_item;
 }
 double getInvoiceAmount() const {
 return quantity * price_per_item;
 }
};
int main() {
 Invoice invoice1("1234", "Hammer", 10, 15.50);
 
 cout << "Part Number: " << invoice1.getPartNumber() << endl;
 cout << "Part Description: " << invoice1.getPartDescription() << endl;
 cout << "Quantity: " << invoice1.getQuantity() << endl;
 cout << "Price per Item: $" << invoice1.getPricePerItem() << endl;
 cout << "Total Invoice Amount: $" << invoice1.getInvoiceAmount() << 
endl;
 
 invoice1.setQuantity(-5);
 invoice1.setPricePerItem(-20.0);
 cout << "\nAfter setting invalid values (negative quantity and price):" 
<< endl;
 cout << "Quantity: " << invoice1.getQuantity() << endl;
 cout << "Price per Item: $" << invoice1.getPricePerItem() << endl;
cout << "Total Invoice Amount: $" << invoice1.getInvoiceAmount() << 
endl;
 return 0;
}
