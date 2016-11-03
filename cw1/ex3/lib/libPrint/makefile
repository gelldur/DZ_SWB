#TODO - Add variables here - compiler, flags...
BINDIR:=bin
SRCDIR:=src
OBJDIR:=obj
DSTDIR:=..

all: build install

build: $(OBJDIR)/libPrint.o
 	#Create library

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR) $(BINDIR)
	#Build .o file.
	g++ -c $< -o $@

install: $(DSTDIR)/libPrint.a

$(DSTDIR)/libPrint.a: $(OBJDIR)/libPrint.o
	#Copy lib from bin dir to destination directory - ../
	ar -rvs $@ $<

.PHONY:clean

clean:
	#Add removal of .o files and ./bin/*
	rm -rf $(OBJDIR)
	rm -rf $(BINDIR)
	rm -f $(DSTDIR)/libPrint.a
	mkdir -p $(OBJDIR)
	mkdir -p $(BINDIR)
