@echo off

set folderName=%1

IF NOT EXIST .\%1 mkdir .\%1

pushd .\%1

echo int main() {> entry.cpp
echo     return 0; >> entry.cpp
echo }>> entry.cpp

echo g++ *.cpp -std=c++11 -Wall -o program > build.bat
echo .\program > run.bat
