#!/usr/bin/python

#little python terminal, lol

ErrorCounter = 0

while 1 :
    command = raw_input("input a command: ")
    if command != "" and command != "quit" :
        exec command
    elif command == "":
        print "Some mistake, Enter a command, don't space again: "
        ErrorCounter += 1
        if ErrorCounter == 5 :
            print "Fuck you!"
    elif command == "quit":
        break
