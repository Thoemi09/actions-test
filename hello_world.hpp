/**
 * @file hello_world.hpp
 * @brief Contains the function to print "Hello, World!" and an optional string to the console.
 * @details Let us try some markdown:
 * # Header 1
 * 
 * ## Header 2 
 * > Block quote
 *
 * - list item 1
 *     - nested list item 2
 *
 * -----
 * 
 * Here is a link to print_hello_world(const std::string&) function.
 */

#ifndef HELLO_WORLD_HPP
#define HELLO_WORLD_HPP

#include <iostream>
#include <string>

/**
 * @brief Prints "Hello, World!" and an optional string to the console.
 * 
 * @param str The string to print.
 * @return void
 */
inline void print_hello_world(const std::string& str = "") {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "The string is: " << str << std::endl;
}

#endif // HELLO_WORLD_HPP
