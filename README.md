# Simple Shell Project

A Simple Shell implemented in C.

## Table of Contents

- [Description](#description)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Usage](#usage)
## Description

This project is a simple shell implemented in the C programming language. It provides a basic command-line interface that allows users to execute commands and interact with their operating system.

## Features

- Execute basic shell commands.
- Handle basic input/output redirection.
- Support command piping (e.g., `command1 | command2`).

## Prerequisites

Before you begin, ensure you have met the following requirements:

- A C compiler (e.g., GCC) installed on your system.
- A basic understanding of C programming.
- A Unix-like operating system (Linux, macOS) is recommended for full compatibility.

## Getting Started

To get a local copy up and running, follow these simple steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/seunrae/simple_shell.git

2. Change into the project directory:

   ```bash
   cd simple-shell

3. Compile the source code:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

4. Run the shell:

   ```bash
   ./hsh

## Usage

Once the shell is running, you can use it just like a regular command-line shell. Here are some basic commands to get you started:

- Run a command: "$ ls -l"
- Redirect input/output: "$ cat input.txt > output.txt"
- Use pipes to combine commands: "$ command1 | command2"

Feel free to explore more advanced features and commands as you become familiar with the shell.
