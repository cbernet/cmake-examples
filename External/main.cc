// A simple program that computes the square root of a number
#include <iostream>
#include <fstream>
#include <string>

#include <bzlib.h>

using namespace std;

int main (int argc, char *argv[]) {
  if (argc!=2) exit(1);

  ifstream infile(argv[1]);
  const unsigned bufsize=1000;
  char *buf=new char[bufsize];

  const char* outfname = "out.bz2";
  FILE* outfile = fopen(outfname, "wb");
  int bzerr;
  const int BLOCK_MULTIPLIER = 7;
  BZFILE* mybz = BZ2_bzWriteOpen(&bzerr, outfile, BLOCK_MULTIPLIER, 0, 0);
  int bytesRead;
  while(infile.tellg()>=0) {
    infile.read(buf, bufsize);
    BZ2_bzWrite(&bzerr, mybz, buf, infile.gcount());
  }
  BZ2_bzWriteClose(&bzerr, mybz, 0, NULL, NULL);
  delete[] buf;
}
