/*******************************************************************************
 * Displaying ASCII codes of characters.  
 *  
 * Output the characters 'a', 'b', 'c' and their ASCII representations.  
 *  
 * Use std::cout to display the characters and their corresponding ASCII codes.  
 * Format the output to show both the character and its ASCII value.
 * a 97
 * b 98
 * c 99
 ******************************************************************************/
#include <iostream>
int main()
{
    int a = 97;
    int b = 98;
    int c = 99;
    std::cout << a << ' ' << (char)a << '\n';
    std::cout << b << ' ' << (char)b << '\n';
    std::cout << c << ' ' << (char)c << '\n';
    char va = 'a';
    char vb = 'b';
    char vc = 'c';
    std::cout << va << ' ' << va + 1 << '\n';
    std::cout << vb << '\n';
    std::cout << vc << '\n';
    return 0;
}
