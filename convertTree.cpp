// Based on "convertTH1" from Benjamin Fenker
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <TFile.h>
#include <TTree.h>


// ****** Compilation command *****************************************************
// g++ -o convertTree `root-config --cflags` convertTree.cpp `root-config --glibs`
// ********************************************************************************

using namespace std;

void help() {
  cout << " ***** convertTree *****" << endl;
  cout << " You must provide two input parameters: " << endl;
  cout << "     1) Name of file containing root trees to convert" << endl;
  cout << "     2) Name of tree to convert" << endl;
  cout << " **********************" << endl;

  exit(0);			// normal
}

int main (int argc, char *argv[]) {
  if (argc < 3) help();

  char *file_name = argv[1];
  char *tree_name = argv[2];

  TFile *treefile = new TFile(file_name);
  TTree *tree = (TTree*)treefile->Get(tree_name);
  
  tree->SetScanField(0);
  tree->Scan("*"); 

  return 0;
}

