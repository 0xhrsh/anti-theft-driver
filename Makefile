obj-m += driver.o
 
KDIR = /lib/modules/$(shell uname -r)/build
 
 
all:
	make -C $(KDIR)  M=$(shell pwd) modules;
	gcc webhook.c -o webhook;
	sudo cp webhook /usr/bin/
 
clean:
	make -C $(KDIR)  M=$(shell pwd) clean
