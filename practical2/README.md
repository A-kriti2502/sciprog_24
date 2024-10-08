# Practical 2: Floating Point Arithmetic and UNIX/Linux Overview

## Objective
In this practical, we will explore floating point arithmetic and gain a foundational understanding of UNIX/Linux commands, particularly focusing on file transfer and compilation.

## File Transfer using SCP
We used `scp` (secure copy protocol) to transfer files from Brightspace to my local computer, and then to the SCIPROG virtual machine (VM). The commands used for transferring the files are as follows:

```bash
scp Conversion.c sp51@sciprog.training.ichec.ie:~/.
scp Sum.c sp51@sciprog.training.ichec.ie:~/.
```

These commands copy the `Conversion.c` and `Sum.c` files into my `practical2` directory on the SCIPROG VM.

## Compilation of C Files
To compile the `Conversion.c` and `Sum.c` files, I opened the terminal and executed the following commands:

```bash
gcc Conversion.c -o conversion -lm
```
- The `-lm` flag links the math library, which is necessary for using mathematical functions like `logf`.

```bash
gcc -o Sum Sum.c
```

## Running Executables
After successfully compiling the files, I ran the executables using the following commands:

```bash
./conversion
./Sum
```

## Conclusion
This practical provided valuable insights into floating point arithmetic and the basics of using UNIX/Linux for file management and C programming. I gained hands-on experience in transferring files, compiling code, and executing programs in a Linux environment.
