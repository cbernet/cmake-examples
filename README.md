cmake-examples
==============

## Contents

A collection of small project examples build using CMake.

*SimpleExecutable:*

Just one executable to calculate a square root. 

*SourceOrganized:*

Shared library built from the code in include/ and src/
Executable linked against this shared library

*External*

Executable linked against a standard external module (BZip2)

*External_ROOT_FastJet*

Executable linked against both ROOT and FastJet.
Obviously, you need to install these packages first if you
wish to try this one, or to use a standard environment from
one of the CERN experiments.

## How to compile?

For example, for SimpleExecutable: 

```
cd SimpleExecutable
mkdir build
cd build
cmake ..
make -j 4
./myapp
```

Note that we create a `build` directory from which we run `cmake` and `make`.
This is called an out-of-source build and is the recommended way to use `cmake`.
If you wish to start again from scratch, just remove this directory and repeat the steps above. 

Study the file [SimpleExecutable/CMakeLists.txt](https://github.com/cbernet/cmake-examples/blob/master/SimpleExecutable/CMakeLists.txt).