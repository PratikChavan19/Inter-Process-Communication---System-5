📌 Repository Description :

This repository contains a comprehensive collection of Linux-based System V Inter-Process Communication (IPC) programs, demonstrating core concepts used for communication between processes in Unix/Linux environments.

It covers multiple IPC mechanisms, including:

Named Pipes (FIFOs) – Communication between unrelated processes
Unnamed Pipes – Parent-child process communication
Message Queues – Structured message-based communication
Signals – Process synchronization and event handling
Shared Memory – High-performance data sharing between processes

Each implementation is written with a focus on clarity, modularity, and practical understanding of low-level system programming.

Additionally, Socket-based IPC is explored in a separate repository:
👉 [FTP Concurrent Server](https://github.com/PratikChavan19/Linux-based-Concurrent-FTP-Server) — which demonstrates client-server communication using sockets for concurrent connections.

This repository is ideal for:

Understanding core System V IPC concepts
Practicing Linux system programming
Preparing for interviews and OS-related subjects
Building a strong foundation in process communication mechanisms

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🐧 Linux System V IPC Programs :

A comprehensive implementation of System V Inter-Process Communication (IPC) mechanisms in Linux, designed to provide both theoretical clarity and hands-on system-level understanding.

This repository demonstrates how independent processes communicate, synchronize, and share data efficiently using low-level OS primitives.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🚀 Key Highlights :

✔️ Covers all major System V IPC mechanisms
✔️ Clean, modular, and well-structured C implementations
✔️ Focus on real-world usage & interview preparation
✔️ Includes process synchronization & communication patterns
✔️ Beginner → Intermediate friendly progression

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

📌 IPC Mechanisms Covered :

🔹 1. Named Pipes (FIFO)
File-based communication between unrelated processes
Persistent IPC mechanism using mkfifo()
Useful for producer-consumer scenarios

🔹 2. Unnamed Pipes
Fast communication between parent-child processes
Half-duplex communication using pipe()
Demonstrates process forking & file descriptor handling

🔹 3. Message Queues
Structured communication using messages
Supports priority-based message handling
Implemented using msgget(), msgsnd(), msgrcv()

🔹 4. Signals
Lightweight communication for event notification
Covers signal handling, masking, and custom handlers
Demonstrates process control using kill(), signal()

🔹 5. Shared Memory
Fastest IPC mechanism (memory-level sharing)
Demonstrates synchronization challenges
Implemented using shmget(), shmat(), shmdt()

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔗 Related Work :

🌐 Socket-Based IPC (Client-Server Model)
Advanced IPC using sockets is implemented in a separate repository:
👉 [FTP Concurrent Server](https://github.com/PratikChavan19/Linux-based-Concurrent-FTP-Server)

Concurrent client handling
TCP socket programming
Real-world client-server architecture

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧠 IPC Conceptual Overview :

+-------------+       +-------------+
|  Process A  | <---> |  Process B  |
+-------------+       +-------------+
        |                    |
        |------ IPC --------|
               |
   ---------------------------------
   |   Pipe | Msg Queue | Shared Mem |
   |   FIFO | Signals   | Sockets    |
   ---------------------------------

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ Tech Stack :

Language: C
Platform: Linux / Unix
Concepts:
System Programming
Process Management
Synchronization
Memory Management

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ Build & Run Instructions :

🔧 Compile
gcc program.c -o program

▶️ Execute
./program

⚠️ Some programs may require running multiple terminals (e.g., sender/receiver).

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧪 Example Workflow :

Named Pipe Example:
Run receiver process
Run sender process
Observe real-time data transfer via FIFO
Shared Memory Example:
Create shared memory segment
Write data from Process A
Read data from Process B

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🎯 Learning Outcomes :

Deep understanding of process communication models
Hands-on experience with System V IPC APIs
Ability to design efficient multi-process systems
Strong foundation for:
Operating Systems
System Design
Backend/Low-level Interviews

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Important Notes :

Ensure proper cleanup of IPC resources:
ipcrm for message queues & shared memory
Handle synchronization carefully in shared memory
Use wait() where required to avoid zombie processes

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

📚 Prerequisites :

C Programming
Linux Basics (commands, terminal usage)
Operating System fundamentals

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  💼 Interview Questions :
  
🔸 Basic
What is IPC and why is it needed?
Difference between process and thread?
What are different IPC mechanisms in Linux?

🔸 Intermediate
Difference between Named Pipe vs Unnamed Pipe
Message Queue vs Shared Memory
What are signals? How are they handled?

🔸 Advanced
Why is shared memory fastest IPC?
How do you handle synchronization in shared memory?
Difference between System V IPC and POSIX IPC
When would you prefer sockets over other IPC?

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧩 Challenges & Learnings :

Synchronization issues in shared memory
Handling multiple processes concurrently
Managing IPC resource cleanup
Debugging low-level system calls

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

👨‍💻 Author :

Pratik Chavan

System Programming Enthusiast
Passionate about OS, C++, and Low-Level Design

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
