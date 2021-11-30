/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jose Malave
 */
//ex04

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int a, b , c;
  int ans1, ans2;
  cin >> a; 
  cin >> b; 
  cin >> c;

  int part1 = 2*b;
 
  int part2 = 4*a*c;


  if((part1-part2) >= 0){

    int z = pow(b,2);
    int y = z - 4*a*c;

    int x1  = (-b+sqrt(y))/(2*a);
    int x2  = (-b-sqrt(y))/(2*a);

    cout << x1 << " " << x2;
  }
  else{
    cout << "no roots";
  } 
  return 0;
}
