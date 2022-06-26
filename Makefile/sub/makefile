# 变量
# objs = print.o main.o
objs=$(patsubst %.c, %.o, $(wildcard *.c))
target = main

# 编译时的参数
CFLAGS = -g
# 预处理时的参数
CPPFLAGS = -DDEBUG
LDFLAGS = 

$(target):$(objs)
	gcc $(objs) -o $(target) $(LDFLAGS)

.PHONY : clean install distclean


install :
	cp $(target) /opt

distclean:
	rm -rf /opt/$(target)

#%.o : %.c
#	gcc -c $^

clean :
	-rm -rf $(objs) $(target)
	@echo "clean success"