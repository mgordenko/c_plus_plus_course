/*******************************************************************************
 * Calculating the expression (a + b) * c - d  
 *  
 * This program takes four integers as input: a, b, c, d.  
 * It then calculates and displays the result of the expression (a + b) * c - d.  
 ******************************************************************************/

#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b>> c >> d;
    std::cout << (a + b) * c - d;
    return 0;
}
