⚡ Signals (Event-Based IPC) :

Signals are used for asynchronous communication between processes, mainly for event notification.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🧠 Concept :
Each signal has a unique number
Kernel handles signal delivery
Used for interrupting or controlling processes

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚙️ System Calls Used :
signal() → Define handler
kill() → Send signal
raise() → Send signal to itself

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🔄 Workflow :
Process defines handler using signal()
Another process sends signal using kill()
Kernel delivers signal
Process executes handler

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

🌍 Use Cases :
Process termination (SIGKILL)
Interrupt handling (SIGINT)
Process synchronization

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

⚠️ Notes :
Default action may terminate process
User-defined signals behave differently
Lightweight but limited data transfer

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
