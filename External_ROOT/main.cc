#include "TH1F.h"

#include <iostream>

int main (int argc, char *argv[]) {
  TH1F h("an_histogram", "", 10, 0, 1);
  std::cout<<h.GetName()<<" created."<<std::endl;
}
