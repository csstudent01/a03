#include <iostream>
using namespace std;

int main() {

  int i;
  int count =0;
  double beanLength;
  double beanHeight;
  int jarVolume;
  float singleBeanVolume;
  const double loadFactor = 0.745;
  const double PI = 3.14159265358979323846;
  int numBean;
  int avgBean = 0;
  int largestBean;
  int largeBeanLength;
  int largeBeanHeight;
  int largeJarVolume;

  //Welcom message
    
    
    do{
      cout<< "Welcome to my Jelly Bean estimate program!!" << endl << endl;
      cout<< "Enter jelly bean length (cm), jelly bean height (cm), and jar size (mL), separated by space: ";
      cin >> beanLength >> beanHeight >> jarVolume;

      singleBeanVolume = (5 * PI * beanLength * beanHeight *beanHeight) / 24;
      numBean = (jarVolume * jarVolume * loadFactor) / (singleBeanVolume);
    }

    if(beanLength !=0 && beanHeight =!0 && jarVolume !=0){
      cout << "Estimate of jelly beans in the jar: " << numBean << endl;
      avgBean = avgBean + numBean;
    }

    if(numBean >largestBean){
      largeBeanLength = beanLength;
      largeBeanHeight = beanHeight;
      largeJarVolume = jarVolume;
      largestBean = numBean;
    }
    
    count++;

    while((beanLength =!0) && (beanHeight != 0) && (jarVolume =!0)){
      avgBean = avgBean / count;
    }

    cout << "Total number of entries: " << count << endl;
    cout << "Average number of beans: " << avgBean << endl;
    cout << "Bean size for t he largest jellybean estimate: " << largeBeanLength << " cm" << "and" << largeBeanHeight << " cm";
    cout << "Jar size for the laregest jelly bean estimate: " << largeJarVolume << " mL" << endl << endl;
    cout << "Thank you for using my program." << endl;






  return 0;

}

