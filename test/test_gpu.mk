MONOLISH_DIR?=$(HOME)/lib/monolish

CXX=g++
CXXFLAGS=-O3 -std=c++14
CXXFLAGS+=-fopenmp
CXXFLAGS+=-DUSE_GPU

LIBS=-I $(MONOLISH_DIR)/include/ -L$(MONOLISH_DIR)/lib/ -lmonolish_gpu

OBJS=$(FUNC)_$(ARCH).out

all:$(OBJS)

$(FUNC)_$(ARCH).out: $(FUNC).cpp
	$(CXX) $(CXXFLAGS) $(LIBS) $^ -o $@ $(LIBS) 
