#include <iostream>

using namespace std;
const double medium_pizza = 9.99;
const double large_pizza = 12.99;
const double coupon =2;
char pizza_size;
char have_coupon;
double total;
char continued;
double runningtotal;

int main()
{

    do {

    cout << "What pizza size would you like to enter? Enter m for medium and l for large." << endl;
    cin >> pizza_size;
    cout << "Do you have a coupon?" << endl;
    cin >> have_coupon;

    if ((have_coupon == 'y') || (have_coupon == 'Y'))
        if ((pizza_size == 'm') || (pizza_size == 'M'))
            total = (medium_pizza - coupon) + total;

        else{
            total = (large_pizza - coupon) + total;
        }
    else{
        if ((pizza_size == 'm') || (pizza_size == 'M'))
            total = medium_pizza + total;

            else{
                total = large_pizza + total;
            }
        }
    cout << "Do you want to continue adding pizzas?" << endl;
    cin >> continued;


} while (continued == 'y');

    cout << "Your total for the pizza is: 0" << total << endl;


    return 0;
}
