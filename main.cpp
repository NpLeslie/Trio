#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void reorder(int&, int&, int&); 

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  reorder(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE 

void reorder(int& red, int& green, int& blue)
{
  int high=0;
  int med=0;
  int low=0;

  if(red>green && red>blue)
  {
    high=red;
  }
  else if(red<green && red<blue)
  {
    low=red;
  }
  else
  {
    med=red;
  }

  if(green>red && green>blue)
  {
    high=green;
  } 
  else if(green<red && green<blue)
  {
    low=green;
  }
  else
  {
    med=green;
  }

  if(blue>red && blue>green)
  {
    high=blue;
  }
  else if(blue<red && blue<green) 
  {
    low=blue;        
  }
  else
  {
    med=blue;
  }

  red=high;
  green=med;
  blue=low;
}
