# FrenchTyper by Julius Guthunz

__This is a small and lightweight programm allowing users to copy all of the special french symbols to
the clipboard. Then you can paste it into any word processor / text editor that supports unicode 
(that is pretty much anyone out there) with Ctrl+C.__

It was written in plain C with GTK+ 3.0. Feel free to distribute it under the terms of the GNU
General Public License 3.0 or higher.

## windows
Instructions to use under windows with an Intel or AMD 64 bit processor:
- Download FrenchTyperWin64.zip. 
- You should be able to just open it in your file manager and run the programm by double clicking on the "FrenchTyperWin64" link.
- If this does not work try extracting the folder first.

## linux
Instructions to user under Linux with an Intel or AMD 64 bit processor:
- Download the precompiled FrenchTyper (the one without the ".c" file extension)
- try double clicking it and click execute if you have to
- if this does not work try installing gtk 3.0
- under Debian this would be: `sudo apt install libgtk-3-0`
- double click the file

## Compile from source
Dependencies are libgtk-3-0  
`(sudo apt install libgtk-3-0)`  
The C File can be compiled on Linux with  
cd [Directory of the File]  
gcc FrenchTyper.c -o FrenchTyper \`pkg-config --libs --cflags gtk+-3.0\`  

This idea came when I had to write a french text on a German Keyboard.
Hope it will be usefull.

this is the first project I hosted so please let me know about any
mistakes or if you would like a license change. (I am fine with changing it
to e.g. MIT Licence on request)

ToDo:
  - Add more comments make program more comprehensible

Best Regards, Julius
