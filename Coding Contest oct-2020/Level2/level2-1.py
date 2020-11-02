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
    tasks = [(int(task_id), int(task_time)) for task_id, task_time in tasks]

    print(n_tasks)
    mins = {}
    for task_id, task_time in sorted(tasks):
        task_prices = []

        if task_time in mins:
            print(f'{task_id} {mins[task_time]}')
            continue

        for minute in price_per_min:
            if minute + task_time > len(prices):
                break

            prices_to_add = []
            for i in range(task_time):
                prices_to_add.append(price_per_min[minute+i])

            task_prices.append((sum(prices_to_add), minute))

        min_price, min_minute = min(task_prices)
        print(f'{task_id} {min_minute}')


if __name__ == "__main__":
    main(sys.argv[1:])