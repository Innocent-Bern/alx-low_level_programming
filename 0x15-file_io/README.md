# File Input / Output

## File Descriptiors
* Process-unique identifiers or handles for various input/output resources.

## Open()
Intializes access to the requested file and returns a handle to its associated resources.
Open call takes three arguments:
* Path to the requested file
* Kind of access requested eg read or write
* Mode / File permision of the associated file: Read, write or execute. Mode is optional.

```
int open(filename, o-flag, mode)
```

It returns the file descriptor used or -1 if an error occurred.
## Read()
System call used to access data stored in a file.

It takes 3 arguments:

* File descriptor of the file.
* Buffer where read data is to be stored.
* Number of bytes to be read from the file

```
int read(fd/filename, buffer, number of bytes)
```
It returns the number of bytes read or -1 when an error occurs.

## Write()
Writes data from a buffer provided by the user to a file descriptor.

Takes 3 arguments:
* File descriptor.
* Buffer where the data is store.
* Number of bytes to be written.

```
int write(fd/filename, buffer, number of bytes
```
Returns the number of bytes written or -1 if an error occurred.

## Close()
A system call that closes access to a file descriptor.

It  terminates/flushes buffers, updates the files metadata, de-allocates the resources used by the file and updates the system wide table of files.

Returns 0 to indicate file was closed successfully or -1 if an error occurred.

### Resurces Used
* Mask computing --> https://en.wikipedia.org/wiki/Mask_(computing)#Arguments_to_functions
* File descriptors ---> https://en.wikipedia.org/wiki/File_descriptor
* Open --> https://en.wikipedia.org/wiki/Open_(system_call)#C_library_POSIX_definition
* Close ---> https://en.wikipedia.org/wiki/Close_(system_call)
