# LaptopGestureControl
It is a laptop gesture control system created by combining the functionalities of arduino with python and establishing a connection between them using the serial communication.
as the user waves their hands in frond of the sensor a specific message is generated corresponding to each wave and captured by the arduino hardware which is then send to python for further processing. the python script on reciving the message first decrypts it and then search for the corresponding function type and other important details related to the function by performing a search algorithm into the excel sheets. 
if there is a match then the information is fetched from the excel sheet and corresponding function is performed at the computer.

Different categories in excel sheet (Laptop.xlsx)
1- Just go to the webpage
2- go to login page --> input email --> input password --> press login button
3- go to login page --> input email --> press next --> input password --> press login button
4- go to login page --> input username --> input password --> press login button
5- system shortcut (2 key combination)
6- system shortcut (3 key combination)      ie: screenshot = fn + win + prntscr
