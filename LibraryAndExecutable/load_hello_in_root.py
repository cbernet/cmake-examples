'''Shows how to load a C++ class without dictionary in root 6.'''

from ROOT import gSystem, gROOT
import os
os.chdir('build/')
gROOT.ProcessLine('#include "hello.h"')
gSystem.Load('libhello')

from ROOT import Hello

hello = Hello()
hello.Print()
