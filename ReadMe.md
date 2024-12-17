# NYU ProcDesign Development Template

## What is a registry?
A registry holds the packages and information about version, source, for the package manager to access and link to.

## What is a package?
Packages hold the source or utilities for the specific function we need. It is basically a frozen source of code (C++, SV, etc.) that we base testing or build flow on using vcpkg.

## What is the difference between an interface library and a normal library/executable? Can you think of any uses for this besides SystemVerilog files? THink about source code for generic programming.

1. **Normal Library/Executable**:  
   - A **normal library** contains compiled code (e.g., object files) and can be directly linked to executables during the build process.  
   - A **normal executable** is a complete binary program that can be run directly on a system.  
   - Libraries (static or dynamic) provide implementation details that are hidden from the user but expose callable functions or classes via their API.

2. **Interface Library**:  
   - An **interface library** focuses solely on the **declarations and interfaces** without providing actual implementation.  
   - It often contains only **header files** or interfaces with abstract descriptions (e.g., prototypes, templates, or base classes).
   - Interface libraries are used during **compile-time** to specify the structure and behavior expected by the program but defer implementation to other components.  
   - They do not include actual compiled code but serve as a contract between modules or systems.
  Interfaces are helpful in C++ for template based programming based on certian function or class prototypes or base classes.


## What is a top module?

A top module is the high level verilog/systemverilog instantiation that contains all other submodules for design prototyping or testing. This is not inside of any thing else. In other words, it is the module that is being interacted with in test benches directly by controlling or observing IO.
