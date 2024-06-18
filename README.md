# valgrind-clone

Reimplementation of cachegrind and memcheck in C++

Executive Summary: (https://github.com/ivosh/valgrind/blob/master/README)

"Valgrind is a framework for building dynamic analysis tools. There are
Valgrind tools that can automatically detect many memory management
and threading bugs, and profile your programs in detail. You can also
use Valgrind to build new tools.

The Valgrind distribution currently includes six production-quality
tools: a memory error detector, two thread error detectors, a cache
and branch-prediction profiler, a call-graph generating cache abd
branch-prediction profiler, and a heap profiler. It also includes
three experimental tools: a heap/stack/global array overrun detector,
a different kind of heap profiler, and a SimPoint basic block vector
generator.

Valgrind is closely tied to details of the CPU, operating system and to
a lesser extent, compiler and basic C libraries. This makes it difficult
to make it portable.  Nonetheless, it is available for the following
platforms: 

- X86/Linux
- AMD64/Linux
- PPC32/Linux
- PPC64/Linux
- ARM/Linux
- x86/macOS
- AMD64/macOS
- S390X/Linux
- MIPS32/Linux
- MIPS64/Linux
- X86/Solaris
- AMD64/Solaris
