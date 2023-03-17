#!/usr/bin/env python

from sys import argv
import re
import shutil


def format_name(file: str) -> str:
    file = re.sub(" ", "_", file)
    file = re.sub("-", "_", file)
    file = file.lower()
    i = file.find("___")
    if i >= 0:
        file = file[:i] + "_" + file[i+3:]
    # i = file.find(".")
    # if i >= 0:
    #     file = file[:i] + "_" + file[i+1:]
    return file


def mv_file(src: str, dst: str) -> None:
    shutil.move(src, dst)


if __name__ == "__main__":
    file = argv[1]
    formatted_file = format_name(argv[2] + "_" + file)
    mv_file(file, formatted_file)
    print(formatted_file)
