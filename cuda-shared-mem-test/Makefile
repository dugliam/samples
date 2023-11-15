INCLUDES_0_3=nvidia-cufftdx-0.3.0-Linux/cufftdx/include/
INCLUDES_22_11=nvidia-mathdx-22.11.0-Linux/nvidia/mathdx/22.11/include/
INCLUDES_22_11_MOD=nvidia-mathdx-22.11.0-Linux-modified/nvidia/mathdx/22.11/include/
GENCODE=-arch=sm_70
CXX_STANDARD=-std=c++17

default: shared_mem_0_3 shared_mem_22_11 shared_mem_22_11_mod

shared_mem_0_3: shared_mem.cu
	nvcc -I$(INCLUDES_0_3) $(GENCODE) $(CXX_SsTANDARD) shared_mem.cu -o shared_mem_0_3

shared_mem_22_11: shared_mem.cu
	nvcc -I$(INCLUDES_22_11) $(GENCODE) $(CXX_STANDARD) shared_mem.cu -o shared_mem_22_11

shared_mem_22_11_mod: shared_mem.cu
	nvcc -I$(INCLUDES_22_11_MOD) $(GENCODE) $(CXX_STANDARD) shared_mem.cu -o shared_mem_22_11_mod

clean: 
	rm shared_mem_0_3 shared_mem_22_11 shared_mem_22_11_mod