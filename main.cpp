#include "DatabaseImplementation.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv){
  DatabaseImplementation *db = new DatabaseImplementation();
  db->checkForReference();
  while(db->getChoiceNum() != 14){
    db->menu();
  }
  return 0;
}
