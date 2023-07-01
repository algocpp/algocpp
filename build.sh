#!/bin/bash

echo Algo.cpp is precompiled.
echo Do not operate until the end of the program.

g++ includes/algocpp/all.hpp -I includes/ -O3

echo Precompilation of Algo.cpp is complete.