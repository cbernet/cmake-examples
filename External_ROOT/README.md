Example showing how to link against ROOT.
=========================================

Prerequisite
------------

If you are not using the standard software stack of your experiment, either CMS or the FCC, you can do a standalone installation in the following way. 

### Install ROOT

you can [compile root with cmake](http://root.cern.ch/drupal/content/building-root-cmake)

On the mac:
- problem with pcre, so one has to use the built-in pcre.
- problem with ssl, deactivated

I managed to compile in the following way:

mkdir _build
cd _build
cmake .. -Dbuiltin_pcre=ON -Dssl=OFF -DCMAKE_INSTALL_PREFIX=/Users/cbern/local/root
make -j 4

### Install FastJet

You can download it [here](http://fastjet.fr/repo/fastjet-3.1.0.tar.gz)
Then:
```
mkdir ~/local
./configure --prefix=$HOME/local
make -j 4
make install
export FASTJET_ROOT_DIR=$HOME/local
```



How external packages are found
-------------------------------

Two cmake functions are used to find ROOT and fastjet when you run cmake.
These functions are provided by the ROOT and fastjet developers, and they are in the cmake/ directory.

The function FindROOT.cmake was found in $ROOTSYS/etc/cmake/.

The function FindFastjet.cmake was googled and found [here](http://spartyjet.hepforge.org/svn/trunk/cmake/Modules/Findfastjet.cmake)

