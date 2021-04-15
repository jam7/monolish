# monolish container {#monolish_docker}
monolish container is a container for easy use of monolish based on ubuntu.

monolish is installed in the following locations:
- /usr/lib/
- /usr/include

examples can be found at:
- /opt/monolish/

# Run monolish container
Use the following command to enter the monolish docker container.
Please refer to the next section to see how to run the sample.

## OSS

```
docker run -it --rm ghcr.io/ricosjp/monolish/oss
```

## MKL

```
docker run -it --rm ghcr.io/ricosjp/monolish/mkl
```

## OSS+NVIDIA

If there is not a GPU, `--gpus all` will fail

```
docker run -it --rm --gpus all ghcr.io/ricosjp/monolish/oss_nvidia
```

Then, in execute the following command in monolish docker.
The monolish library has `so` files for each # of Streaming multiprocessor (SM) of GPU.
This script determines the # of SM of GPU 0 and makes a link to `libmonolish_gpu.so`.

```
sh /opt/monolish/link_monolish_gpu.sh
```

## MKL+NVIDIA

If there is not a GPU, `--gpus all` will fail

```
docker run -it --rm --gpus all ghcr.io/ricosjp/monolish/mkl_nvidia
```

Then, in execute the following command in monolish docker.
The monolish library has `so` files for each # of Streaming multiprocessor (SM) of GPU.
This script determines the # of SM of GPU 0 and makes a link to `libmonolish_gpu.so`.

```
sh /opt/monolish/link_monolish_gpu.sh
```

# Build monolish container (for developpers)
In `monolish/docker` : 

## OSS

```
make oss
```

## MKL

```
make mkl
```

## OSS+NVIDIA

```
make in_oss_nvidia
```

## MKL+NVIDIA

```
make mkl_nvidia
```

# Testing monolish docker
```
make test
```
