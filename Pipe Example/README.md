🔗 Basic Pipe Demonstration (Linux) :

This folder contains simple programs demonstrating the basic concept of pipes in Linux using standard input and output redirection.

These examples help understand how data flows between processes using pipes (|) in the shell.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

📄 Files Included :

PipeWriter.c → Writes data to standard output

printf("Jay Ganesh...\n");

PipeReader.c → Reads data from standard input and prints it

fgets(Arr, sizeof(Arr), stdin);
printf("Data received : %s\n", Arr);

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ How It Works :

These programs do not explicitly use pipe() system call.
Instead, they demonstrate shell-level piping:

./writer | ./reader

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔄 Flow :
PipeWriter sends output → stdout
Shell redirects output using |
PipeReader receives input → stdin
Reader prints the received data

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🚀 Build & Run :

🔧 Compile :
gcc PipeWriter.c -o writer
gcc PipeReader.c -o reader

▶️ Execute with Pipe :
./writer | ./reader

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧠 Concept Explained :
Pipe (|) connects stdout of one process → stdin of another
Data is transferred in stream format
Reading from pipe removes the data
No random access allowed

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🌍 Real-World Example :
ls | grep ".c"
ls → produces output
grep → consumes filtered input

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🎯 Learning Outcome :
Understand basic IPC using pipes
Learn difference between:
Shell pipe (|)
System call pipe (pipe())
Foundation for advanced IPC mechanisms

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Notes :
These are introductory examples
Actual unnamed pipes use pipe() + fork()
Buffer size is limited (~10KB in pipes conceptually)

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
