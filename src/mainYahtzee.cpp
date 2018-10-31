
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "TreePuzzle.hpp"
#include "BSTY.hpp"
using namespace std;
int main() {
	string sarr[10] = {"run","tuxedo","ocelot","vast","bark","punctilios","hello","is","sibylic","go"};
	treePuzzle(10,sarr,0);
	//FOR EXTRA CREDIT
	//string sarr2[13] = {"xray","jack","superthriller","fa","noon","muddle","kindergartener","zoogeographical","window","dandelion","youthsploitation","byte","apple"};
  	//treePuzzle(13,sarr2 ,1);
//	BSTY *tree = new BSTY();
//	for (int i = 0; i < 10; i++){
//		tree->insertit(sarr[i]);
//	}
}

