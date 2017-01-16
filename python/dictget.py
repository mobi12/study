labels = {
    'phone' : 'phone',
    'addr' : 'address'
}

people = {
    'Alice' : {
        'phone' : '2341',
        'addr' : 'Foo drive 23'
    },
    'Beth' : {
        'phone' : '9102',
        'addr' : 'Bar street 42'
    },
    'Cecil': {
        'phone' : '3158',
        'addr' : 'Baz avenue 90'
    }
}

name = raw_input('Name: ')
request = raw_input('Phone number (p) or address (a)?')
key = request
if request == 'p' : key = 'phone'
if request == 'a' : key = 'adress'

person = people.get(name, {})
label = labels.get(key, key)
result = person.get(key, 'not available')

print "%s's %s is %s." %(name, label, result)