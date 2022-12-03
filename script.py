#!/usr/bin/env python

import re
from os import system, rename
from sys import argv


def root_command() -> None:
    filename = argv[1]

    is_open_in_code = True
    if len(argv) == 3:
        is_open_in_code = argv[2]

    print(f"Creating the {filename} file...")
    system(f"cp template.cpp {filename}")
    system(f"date '+%A, %B %d, %Y | %r (%Z)' >> {filename}")
    print("Done! let's play")

    if is_open_in_code:
        system(f"code {filename}")

def status_command() -> None:
    numeric_series = argv[2]
    alphabetical_series = argv[3]
    selected_browser = "google-chrome"
    command = f'{selected_browser} "https://codeforces.com/problemset/status/{numeric_series}' + \
        f'/problem/{alphabetical_series}?friends=on" &'
    system(command)


def rename_command() -> None:
    old_file_name = argv[2]
    numeric_series = argv[3]
    file_name = re.sub("_", ".", old_file_name, 1)
    file_name = str(numeric_series) + file_name

    if len(argv) == 5:
        system(f"mv -v {old_file_name} difficulty-{argv[4]}/{file_name}")
    else:
        system(f"mv -v {old_file_name} {file_name}")

def commit_command() -> None:
    number_part = argv[2]
    difficulty_part = argv[3]

    s = 's' if int(number_part) > 1 else ''

    system("git add .")
    system(f"git commit -m 'Solved {number_part} problem{s} of {difficulty_part} difficulty'")

    if argv[4] == "push":
        system("git push")

def help_command() -> None:
    print("""sp

Automation script for Codeforces users

commands:
-------------
<file name>  ----------------------------------------  Create file with ./template.cpp
status  <numeric series> <alphabetical series> ------  Problem submission status
rename <file name> <problem numeric series>  --------  Rename codeforces with specific formatting
commit <number of problems> <difficulty> push/""  -----------  Git commit code with  general message
help  ---------------------------------------  For help
    """)


def is_arg_valid(logic: dict, arg: str) -> bool:
    for k in logic:
        if k == arg:
            return True
    return False


if __name__ == "__main__":
    logic = {
        "status": status_command,
        "rename": rename_command,
        "commit": commit_command,
        "help": help_command
    }

    if len(argv) <= 1:
        help_command()
    elif is_arg_valid(logic, argv[1]) == False:
        root_command()
    else:
        logic[argv[1]]()
