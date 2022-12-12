#!/usr/bin/env python

from sys import argv
from datetime import datetime
import re
import shutil


def format_name(file: str) -> str:
    file = re.sub(" ", "_", file)
    i = file.find("._")
    file = file[: i+1] + file[i + 2:]
    file = file.lower()
    i = file.find("___")
    if (i >= 0):
        file = file[:i] + "_" + file[i+3:]
    return file


def add_extension(file: str):
    ext = "cpp"
    if len(argv) >= 3:
        ext = argv[2]
    file = file + "." + ext
    return file, ext


def add_dir(file: str) -> str:
    if len(argv) >= 4:
        file = argv[3] + "/" + file
    return file


def get_current_time() -> str:
    now = datetime.now()
    time = now.strftime("%A, %B %d, %Y | %r (+6)")
    return time


def copy_template_file(dst: str, ext: str) -> None:
    template = "./template" + "." + ext
    shutil.copy(template, dst)


def append_time_file(file) -> None:
    file1 = open(file, "a")
    file1.write(f"// {time}")
    file1.close()


if __name__ == "__main__":

    file, ext = add_extension(add_dir(argv[1]))
    file = format_name(file)
    time = get_current_time()

    print(f"Creating the {file} file with leetcode template... Done.")

    copy_template_file(file, ext)
    append_time_file(file)

    print("Done! let's play")
