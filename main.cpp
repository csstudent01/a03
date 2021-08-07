#include <iostream>
using namespace std;

int main() {

  int i;
  double beanLength;
  double beanHeight;
  int jarVolume;
  float singleBeanVolume;
  const double loadFactor = 0.745;
  const double PI = 3.14159265358979323846;
  int numBean;
  int avgBean;



  //Welcom message
  cout<< "Welcome to my Jelly Bean estimate program!!" << endl << endl;
  cout<< "Enter jelly bean length (cm), jelly bean height (cm), and jar size (mL), separated by space: ";

  cin >>beanLength;
  cout << " ";
  cin >>beanHeight;
  cout << " ";
  cin >>jarVolume;

  singleBeanVolume = (5*(M_PI)* beanLength * beanHeight)/24;
  numBean = (singleBeanVolume*loadFactor)/ singleBeanVolume;

  while((beanLength =!0) && (beanHeight =!0) && (jarVolume =!0)){
      cout << "Estimate of jelly beans in the jar: ";
      cin >> numBean;
      count++;
  }
    //avgBean =avgBean + numBean;
    
    







  return 0;

}