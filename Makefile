v4l2cap: main.c
	${CC} -W -Wall main.c -o v4l2cap

clean:
	rm v4l2cap

all: v4l2cap
