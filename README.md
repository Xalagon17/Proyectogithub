# Proyectogithub

This project contains two files:
1. setup.cpp
2. herramienta.cpp

The file to execute first is setup.cpp since it contains system upgrade and update, and also the incorporation of wireshark and tcpdump.

I am going to explain the herraminta.cpp file in several steps:

1. When running the program, only six options will appear, each of which are different, and it will also ask you which option you want to choose.

2. As there are only six options, if you enter a number greater than 6 or less than 1, the program will tell you that option does not exist and it will run again by itself.

3. If you enter number 1, all the network interfaces on your device will appear.

4. If you enter number 2, it will check connectivity with google.es

5. If you enter the number 3, it asks you if you are in a graphical environment and if you are, it opens the wireshark.

6. If you enter the number 4, it asks you if you are root and if you are, it asks you which protocol you are going to use and gives you two options to choose from and opens 
   the tcpdump with the chosen protocol, and if you choose a different one, it restarts the case, 
   and if you are not root it takes you out of the program and tells you to become root and run the program again.
   
7. If you enter the number 5, it will display the version of the linux kernel on the screen.

8. And finally if you enter the number 6, it shows you the name of the machine.
