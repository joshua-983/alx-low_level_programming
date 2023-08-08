In Unix-like computer operating system a flie descriptor is a process unique identifier for a file or other input/output resource, such as a pipe or network socket. and a file descriptor usually have non negative integer values with negative value.
Creating file descriptors
open()
creat()[5]
socket()
accept()
socketpair()
pipe()
epoll_create() (Linux)
signalfd() (Linux)
eventfd() (Linux)
timerfd_c, etc.

Deriving file descriptors
dirfd()
fileno()

Operations on a single file descriptor
read(), write()
readv(), writev()
pread(), pwrite()
recv(), send()
recvfrom(), sendto()
recvmsg(), sendmsg() (also used for sending FDs to other processes over a Unix domain socket)
recvmmsg(), sendmmsg()
lseek(), llseek(), etc.

PROJECT: 0x15. C - File I/O

There is the n eed to create the following prototypes
1 ssize_t read_textfile(const char *filename, size_t letters);
2 int create_file(const char *filename, char *text_content);
3 int append_text_to_file(const char *filename, char *text_content);

