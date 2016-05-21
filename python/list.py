database = [
    ['Tom', '12345'],
    ['Thomas', '45678'],
    ['Mike', '1357']
]

username = raw_input("User name: ")
pin = raw_input("User PIN: ")

if [username, pin] in database : print "Access granted"