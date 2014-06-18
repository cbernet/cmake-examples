Example showing how to link against ROOT.
=========================================

Prerequisite
------------

Install ROOT
you can do that with cmake:
http://root.cern.ch/drupal/content/building-root-cmake

On the mac:
- problem with pcre, so one has to use the built-in pcre.
- problem with ssl, deactivated

I managed to compile in the following way:

mkdir _build
cd _build
cmake .. -Dbuiltin_pcre=ON -Dssl=OFF -DCMAKE_INSTALL_PREFIX=/Users/cbern/local/root
make -j 4


Finding the ROOT package
------------------------

got FindROOT.cmake in $ROOTSYS/etc/cmake/
