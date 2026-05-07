🧩 Shared Memory (Fastest IPC) :

Shared Memory is the fastest IPC mechanism where multiple processes access a common memory segment directly.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧠 Concept :
No kernel mediation during data access → high performance
Data remains in memory even after reading (unlike pipes)
Requires synchronization (e.g., semaphores)

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ System Calls Used :
shmget() → Create shared memory
shmat() → Attach memory to process
shmdt() → Detach memory
shmctl() → Control operations

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔄 Workflow :
Server creates shared memory (IPC_CREAT)
Processes attach using shmat()
Read/write directly
Detach using shmdt()

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🌍 Use Cases :
High-performance applications
Databases & caching systems
Real-time systems

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Notes :
Fastest IPC but not safe by default
Needs manual synchronization
Memory removed when process terminates

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
