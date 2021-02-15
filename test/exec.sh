gcc -fPIC -c trans.c 
gcc -shared -o libtrans.so trans.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) main.c -o test -ltrans 

rm *.o

./test
