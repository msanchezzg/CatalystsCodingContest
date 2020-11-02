#!/usr/bin/python3
# -*- coding: utf-8 -*-

import argparse
import sys


def main(argv):

    parser = argparse.ArgumentParser()
    parser.add_argument("file", help="File to extract data from", type=str)
    args = parser.parse_args(argv)
    file = args.file

    with open(file, 'r') as f:
        lines = f.readlines()

    n_mins = int(lines.pop(0))
    prices = [int(x) for x in lines[:n_mins]]
    price_per_min = dict(enumerate(prices))
    n_tasks = int(lines[n_mins])
    tasks = [x.split() for x in lines[n_mins+1:]]
    tasks = [(int(task_id), int(task_power), int(task_st), int(task_end)) for
        task_id, task_power, task_st, task_end in tasks]

    print(n_tasks)
    for task_id, task_power, task_st, task_end in sorted(tasks):
        task_price_per_min = [(i, price_per_min[i]) for i in range(task_st, task_end+1)]
        task_price_per_min = sorted(task_price_per_min, key=lambda x: (x[1], x[0]))

        print(f'{task_id} {task_price_per_min[0][0]} {task_power}')


if __name__ == "__main__":
    main(sys.argv[1:])