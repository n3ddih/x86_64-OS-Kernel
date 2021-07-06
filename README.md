# x86_64 OS kernel from scratch

All the code is originally from [Youtube](https://www.youtube.com/playlist?list=PLZQftyCk7_SeZRitx5MjBKzTtvk0pHMtp)
and from this [Github](https://github.com/davidcallanan/os-series) repo

# Setup a docker environment

Building a kernel building environment docker:
- `$ docker build ./buildenv -t kernel-buildenv`

Running the docker:
- Linux: `$ docker run --rm -it -v "$pwd":/root/env myos-buildenv`
- MacOS: `$ docker run --rm -it -v "$PWD":/root/env myos-buildenv`
- Windows (CMD): `$ docker run --rm -it -v "%cd%":/root/env myos-buildenv`
- Windows (PowerShell): `$ docker run --rm -it -v "${pwd}:/root/env" myos-buildenv`

# Make the kernel

`$ make build-x86_64`

# Emulate the kernel

You need to install [Qemu](https://www.qemu.org/) first.

`$ qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
