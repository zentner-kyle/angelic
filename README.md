Angelic
=======

Angelic is a programming language which I was developing for Pioneers in
Engineering for use in it's robotics control system known as Control System
Next / Project Tenshi. However, after spending a several months developing
Angelic, it was clear that Pioneers in Engineering would benefit more from
using an off-the-shelf programming language. At that time, I switched Control
System Next to use Lua, and stopped working on Anglic.

This repo exists to describe the language and document the work that has gone
into it.

### Overview

The Angelic language is designed to be used in an interactive environment.
Specifically, the language implementation is made up of two components: a
compiler and a virtual machine. The compiler is relatively heavyweight, and
runs on the programmers computer. In comparison, the virtual machine is very
small, and may reside on another computer, or even a microcontroller. The
virtual machine is capable of reloading a program while it is executing,
allowing interactive experimentation.

In order to ensure deterministic execution and meet real-time constraints,
Angelic uses a system of linear types, similar to owned values in Rust.
It also uses reference counting for immutable values. The language ensures that
immutable values can never form a reference cycle, so reference counting can
never create a memory leak.

Currently, the compiler is implemented (poorly) in JavaScript. Originally, it
could be run in node.js or Mozilla's XULRunner.

The virtual machine is implemented in C99, and is relatively stable.

### Status

The Angelic compiler is currently capable of compiling some simple programs.
It is able to parse, perform type inference, and generate a virtual machine
package.

The virtual machine is able to load and execute packages. Details of how it
works are described in angelic_instruction_set.md.

### Limitations

 - The parser has basically no error handling.
 - The parser has a lot of bugs.
 - The type inferencer does not provide useable error messages.
 - The type inferencer does not handle linear or reference counted types.
 - The package format is extremely limiting.
 - The language is missing a lot of desired features, like tuples, arrays,
   maps, objects, and methods.
 - There's no standard library.
