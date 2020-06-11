SRC_BASE_PATH=/home/ubuntu/source/phxpaxos

all:sub_dir

include $(SRC_BASE_PATH)/makefile.mk

SUBDIRS=phxkv phxelection phxecho

.PHONY:sub_dir
sub_dir:$(SUBDIRS)
	@for sub_dir in $^; do \
	make -C $$sub_dir; \
	done

.PHONY:clean
clean:$(SUBDIRS)
	@for sub_dir in $^; do \
	make -C $$sub_dir clean;\
	done
	rm -rf *.o *.pb.*  