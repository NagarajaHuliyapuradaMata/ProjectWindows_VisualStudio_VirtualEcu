rm -f  CMakeCache.txt
rm -rf CMakeFiles
rm -f  Makefile
rm -f  Windows_VisualStudio_VirtualEcu_R2024.exe
rm -f  cmake_install.cmake

cmake ..

cmake --build .

ls -al

git status

