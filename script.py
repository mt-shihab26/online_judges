#!/usr/bin/env python

from sys import argv
from datetime import datetime
import re
import shutil


def format_name(file: str) -> str:
    file = re.sub(" ", "_", file)
    i = file.find("._")
    file = file[: i+1] + file[i + 2:]
    return file


def add_extension(file: str) -> str:
    if len(argv) >= 3:
        ext = argv[2]
        file = file + "." + ext
    else:
        file = file + ".cpp"
    return file


def add_dir(file: str) -> str:
    if len(argv) >= 4:
        dir = argv[3]
        file = dir + "/" + file
    return file


def get_current_time() -> str:
    now = datetime.now()
    time = now.strftime("%A, %B %d, %Y | %r (+6)")
    return time


def copy_file(src: str, dst: str) -> None:
    shutil.copy(src, dst)


def append_time_file(file) -> None:
    file1 = open(file, "a")
    file1.write(f"// {time}")
    file1.close()


if __name__ == "__main__":
    template = "./template.cpp"

    file = format_name(add_extension(add_dir(argv[1])))
    time = get_current_time()

    print(f"Creating the {file} file with leetcode template... Done.")

    copy_file(template, file)
    append_time_file(file)

    print("Done! let's play")
