/*
    Program: hello.c (ii)
    Author: Mazal Bohbot Berrie for CS50x with David Malan, Harvard EdX
    Date: August 1, 2023
    Description: pset01 - Gets user input and prints more complex "Hello, World!"
    to console.
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("\nHi there, I'm Comp U. Tate. What's your name? ");
    printf("Hello, %s. Welcome to the rest of your life.\n\n", name);
}

// This is a second generation v. of hello.c, which prompts for user input and
// holds value, then prints to console a more complex string than traditional
// "hello, world". My Desktop stack, MacOS currently unable to compile and run
// scripts with <cs50.h> library, including get_string() function.