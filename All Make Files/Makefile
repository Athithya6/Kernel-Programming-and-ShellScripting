obj-m:= kernel2.o

KERNEL_DIR = /lib/modules/$(shell uname -r)/build
PwD = $(shell pwd)
all:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PwD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order *-
