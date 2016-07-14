# Makefile to build our Hello module

# One module to be built from hello.o
# Resulting module is hello.ko

obj-m += hello.o

all:
	make -C /lib/modules/`uname - r`/build M=$(shell pwd) modules
clean:
	make -C /lib/modules/`uname - r`/build M=$(shell pwd) clean
