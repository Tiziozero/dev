Vim�UnDo� ��B�����șo�$'�A�d��L���xR�U                                      ed��   
 _�                             ����                                                                                                                                                                                                                                                                                                                                                             ed�z    �                  �               �   	                �   
            �   
            �                     �   	            �   	            �   	            �   	            �                    �               �               �               �               �               �                 int �               �               �                 }�               �                     p�               �               �               �               �               �               �               �                 
__global__�               �               �               �               �                   �               5��                       
                          �       
                                        �                        2                      �                      *   8               *       �       /                 b                      �                        g                      �                         m                      �       
                 s                      �                         y                      �                        �                      �                         �                      �                        �                      �    	                     �                      �    	   
                  �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        ed޶   	 �   '               �   (            �   %                  r�   &            �   &            �   $               �   %            �   #                 �   $            �   $            �   $            �   $            �   "                 �   #            �   #            �   #            �   #            �   #            �   !               �   "            �   "            �   "            �   "            �   "            �                   �   !            �   !            �   !            �   !            �                  �                �                �                �                �                �                   �               �               �               �                   �               �               �               �               �               �               �               �               �               �               �               �               �               �               �                  �               �               �               �               �               �               �               �                    �               �               �               �               �               �               �               �               �                  �               �               �               �               �               �               �               �               �               �               �               �               �               �               �               �               �               �               �               �                     cl�               �               �               �               �               �               �               �               �               �               �                    �               �               �               �               �               �               �               �               �               �               �                  �               �               �               �               �               �               �               �               �               �               �               �               �               �               �                    �               �               �               �               �               �               �               �               �               �               �               �                  �               �               �               �               �               �               �               �               �               �               �               �               �               �                     �               �               �               �               �               �               �               �               �               �               �               �               �                  �               �               �               �               �                  �               �               �               �               �               �               �               �                  �               �               �               �               �   
              i�               �               �                      �   	            �   	            �   	            �   	            �                  �               �               �               �               �               �               �               �               �               �               �               �                  �               �               �               �               �               �               �               �               �                 const �               �               �               �               �               �               �               �               �               �               �               �                  �               �                 #define NUM�               �                  �               �                 #incl�               �                   �               �               �               �                 #include <stdio.h>       __global__ void cudaThread() {   2    printf("Hello from thread %d\n", threadIdx.x);   }       int main() {       cudaThread<<<1, 10>>>();       cudaDeviceSynchronize();       return 0;   }    5��                                  �              �                                                  �                                               �                                               �                         &                      �                         2                      �                         ?                      �                      E   F               E       �       K                 �                      �                      6   �               6       �       7                  �                      �                       I   �               I       �       I                                      �                                              �                        4                     �    
                     9                     �    
   	                  A                     �                          E                     �                         [                     �                       '   b              '       �       '                  �                     �                          �                     �                        �                     �                      =   �              =       �       A                  �                     �                       K   �              K       �       K                 6                     �                      G   <              G       �       J                  �                     �                       X   �              X       �       X                 �                     �                      7   �              7       �       :                                      �                      =   #              =       �       C                 `                     �                      d   e              d       �       e                 �                     �                      0   �              0       �       3                  �                     �                       #                 #       �       #                 (                     �                      Q   -              Q       �       S                 ~                     �                         �                     �                         �                     �                          �                     �                        �                     �                          �                     �                          �                     �    !                      �                     �    !                    �                     �    "                     �                     �    "                                         �    #                                          �    #                     -                     �    $                     4                     �    %                     :                     �    %                     B                     5�_�                             ����                                                                                                                                                                                                                                                                                                                            (                      V        ed��   
 �              (   #include <CL/cl.h>   #include <stdio.h>       #define NUM_ELEMENTS 10       Oconst char *kernelSource = "__kernel void openclThread(__global int* array) { \   <                               int gid = get_global_id(0); \   J                               printf(\"Hello from thread %d\\n\", gid); \                              }";       int main() {       cl_platform_id platform;   )    clGetPlatformIDs(1, &platform, NULL);           cl_device_id device;   C    clGetDeviceIDs(platform, CL_DEVICE_TYPE_GPU, 1, &device, NULL);       M    cl_context context = clCreateContext(NULL, 1, &device, NULL, NULL, NULL);   L    cl_command_queue queue = clCreateCommandQueue(context, device, 0, NULL);       Z    cl_program program = clCreateProgramWithSource(context, 1, &kernelSource, NULL, NULL);   :    clBuildProgram(program, 1, &device, NULL, NULL, NULL);   E    cl_kernel kernel = clCreateKernel(program, "openclThread", NULL);       g    cl_mem buffer = clCreateBuffer(context, CL_MEM_READ_WRITE, sizeof(int) * NUM_ELEMENTS, NULL, NULL);   7    clSetKernelArg(kernel, 0, sizeof(cl_mem), &buffer);       %    size_t globalSize = NUM_ELEMENTS;   U    clEnqueueNDRangeKernel(queue, kernel, 1, NULL, &globalSize, NULL, 0, NULL, NULL);       clFinish(queue);           clReleaseMemObject(buffer);       clReleaseKernel(kernel);       clReleaseProgram(program);   !    clReleaseCommandQueue(queue);       clReleaseContext(context);           return 0;   }    5��            (                      F             5��