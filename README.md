# VSCode debug active file (macOS)

Demo build and debug C/C++ active file with console input.

## Prerequisites

Open a terminal to ensure clang is installed.  

```
xcode-select --install
```

## CodeLLDB

Click "Run and debug" button on left side panel and choose "CodeLLDB: ..."  

Setup breakpoint and click "Start Debugging".  

It will run the program on terminal window.

## C/C++ for Visual Studio Code

Click "Run and debug" button on left side panel and choose "CodeLC/C++: ..."  

Setup breakpoint and click "Start Debugging".  

It will open a additional terminal to run the program.

## LLDB Debug Commands

In the debug windows, type 'help' to show the avaiable commands.  

* Set breakpoint

    ```
    b show_value
    ```

* Print variable

    ```
    p v
    ```

* Modify variable

    ```
    expr v=10
    ```

## Reference

* [Using Clang in Visual Studio Code](https://code.visualstudio.com/docs/cpp/config-clang-mac)
