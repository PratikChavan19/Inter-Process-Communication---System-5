📁 Named Pipe (FIFO) :

Named Pipes (FIFO) enable communication between unrelated processes using a file-like interface.

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧠 Concept :
Stored as a special file on disk
Only the name is stored, not the data
Data is removed after reading

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ System Calls Used :
mkfifo() → Create FIFO
open() → Open pipe
read() / write() → Data transfer
unlink() → Delete pipe

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔄 Workflow :
Create FIFO using mkfifo()
One process writes
Another reads
Data gets removed after reading

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🌍 Use Cases :
Communication between unrelated processes
Shell pipelines
Producer-consumer systems

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Notes :
No random access allowed
Works like file I/O
Limited buffer (~10KB)

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
