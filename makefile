out: main.o add.o del.o load.o mod.o save.o show.o sort.o 
	cc main.c add.c del.c load.c mod.c save.c show.c sort.c  -o out
main.o:main.c
	cc -c main.c
add.o:add.c
	cc -c add.c
del.o:del.c
	cc -c del.c
load.o:load.c
	cc -c load.c
mod.o:mod.c
	cc -c mod.c
save.o:save.c
	cc -c save.c
show.o:show.c
	cc -c show.c
sort.o:sort.c
	cc -c sort.c


