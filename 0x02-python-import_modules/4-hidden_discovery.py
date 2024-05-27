#!/usr/bin/python3
import dis

with open('hidden_4.pyc', 'rb') as file:
    code = file.read()


def print_names():
    names = []
    for instruction in dis.get_instructions(code):
        if instruction.opname == 'LOAD_NAME'
        and not instruction.arg.startswith('__'):
            names.append(instruction.arg)

    names.sort()  # Sort names alphabetically
    for name in names:
        print(name)


if __name__ == "__main__":
    print_names()
