# Two-Pass-Macroprocessor-for-SIC-XE
A two-pass macroprocessor for SIC/XE developed using lex and yacc


Commonly used programming languages support the use macros. A macro is a single instruction that expands automatically into a set of instructions to perform a particular task. A macro instruction is simply a notational convenience for the programmer. A macro processor is responsible for replacing each macro instruction with the corresponding group of source language instructions. This should be done before assembling the program. Macro processors are often embedded in other programs, such as assemblers and compilers. Sometimes they are standalone programs that can be used to process any kind of text.
The basic functions of a macro processor as follows:
1) Identifying and processing macro definition.
2) Identifying macro invocation statements and expanding it into statements that form the body of the macro.
3) Providing arguments to the macro prototype from the macro invocation statement.

Macro processor can be designed having two passes:
Pass I : Processing of macro definition
Pass II : Expansion of macro invocation statements

This project implements a two pass macro processor for a SIC/XE machine that is able to process all macro definitions and substitute the macro invocations with the body of the macro.

The input to the macro processor is a program that may comprise macro definitions and invocations. The output from the macro processor is a program with no macro definitions but all macro invocations substituted with the body of the macro.
