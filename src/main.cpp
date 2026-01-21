/*
Make a program where you enter the height of a pyramid
and the program will print out that pyramid.

For example, if I was to type 5, it would show
     *
    * *
   * * *
  * * * *
* * * * * *

If I was to type 3 it would show
   *
  * *
* * * *

*/

#include <iostream>
#include <string>


int main() {
    int pyramidHeight = 0;
	std:: cout << "How tall do you want the pyramid to be? ";
    std::cin >> pyramidHeight;

    //Main iteration for each row
    for (int row = 1; row <= pyramidHeight; row++) {
        //Calculate empty spaces before the first star in each row
        int emptySpace = (pyramidHeight + 1) - row;

        //Puts the correct amount of empty space before each star
        for (int i = 1; i < emptySpace; i++) {
            std::cout << "  ";
        }
        //Places stars
        for (int star = 1; star < row *2; star++) {
            std::cout << " *";
        }
        //Starts new row
        std::cout << " \n";
    }
    return 0;
}