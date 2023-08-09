A file descriptor is a process unique identifier for a file otr other inut output resources

Creating file descriptors
open()
creat()[5]
socket()
accept()
socketpair()
pipe()
epoll_create() (Linux) ,etc.

Deriving file descriptors
dirfd()
fileno()


Operations on a single file descriptor
read(), write()
readv(), writev()
pread(), pwrite()
recv(), send()
recvfrom(), sendto()
