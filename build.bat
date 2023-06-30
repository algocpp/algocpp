
@echo off

echo Algo.cpp is precompiled.
echo Do not operate until the end of the program.

cd ../
g++ algocpp/all.hpp -I . -O3

echo Precompilation of Algo.cpp is complete.
