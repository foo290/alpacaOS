# alpacaOS

This is a x86_64 bit operating system (underdev) which I am writing to understand computers at assembly level :D

## Setup:

### Docker setup :

**Making Image:**
```
docker build buildenv -t {tag for your image goes here...}
```

**Spinning up container:**
set your pwd to your cwd by ```export pwd=$PWD```
```
docker run --rm -it -v "$pwd":/root/env {tag of your image...}
```

**Inside Container:**

```
make build-x86_64
```

you will see build and dist folder after running above commands. These folder contains the kernel. You can emulate this by using emulator like qemu as :

```
qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso
```
