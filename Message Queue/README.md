📬 Message Queue (System V IPC) :

Message Queues provide a safe and structured way for processes to communicate by exchanging messages through the kernel.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧠 Concept :
Kernel acts as a mediator, ensuring controlled communication
Messages are stored in a queue and read in FIFO or priority order
Once a message is read, it is removed from the queue

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ System Calls Used :
msgget() → Create/access message queue
msgsnd() → Send message
msgrcv() → Receive message
msgctl() → Control operations (delete, status)

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔄 Workflow :
Create queue using unique key
Sender sends message
Receiver reads message
Message gets deleted after reading

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🌍 Use Cases :
Task scheduling systems
Producer-consumer models
Inter-process event communication

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Notes :
Safe but slower than shared memory due to kernel involvement
Supports structured communication (message types)

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
