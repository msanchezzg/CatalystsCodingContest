#!/usr/bin/python3
# -*- coding: utf-8 -*-

import argparse
import sys
import random


def main(argv):

    parser = argparse.ArgumentParser()
    parser.add_argument("file", help="File to extract data from", type=str)
    args = parser.parse_args(argv)
    file = args.file

    with open(file, 'r') as f:
        lines = f.readlines()

    max_power = int(lines.pop(0))
    max_bill = int(lines.pop(0))

    n_mins = int(lines.pop(0))
    prices = [int(x) for x in lines[:n_mins]]
    price_per_min = dict(enumerate(prices))
    
    n_tasks = int(lines[n_mins])
    tasks = [x.split() for x in lines[n_mins+1:]]
    tasks = [(int(task_id), int(task_power), int(task_st), int(task_end)) for
        task_id, task_power, task_st, task_end in tasks]

    mins_tasks = {}
    print(n_tasks)
    for task_id, task_power, task_st, task_end in tasks:
        power_ini = task_power
        task_price_per_min = [(i,price_per_min[i]) for i in range(task_st, task_end+1)]
        task_price_per_min = sorted(task_price_per_min, key=lambda x: (x[1], x[0]))
        task_mins_powers = []
        my_mins = {}

        while task_power > 0:
            cheap_min = task_price_per_min[0][0]
            left = max_power - mins_tasks.get(cheap_min, 0)
            
            if left > 0:
                if left == 1 or power_ini == 1 or task_power == 1:
                    power_drained = 1
                else:
                    power_drained = random.randint(1,min(left, task_power))
                
                if cheap_min in mins_tasks:
                    mins_tasks[cheap_min] += power_drained
                else:
                    mins_tasks[cheap_min] = power_drained

                task_mins_powers.append((cheap_min, power_drained))
                task_power -= power_drained
                my_mins[cheap_min] = power_drained
            
            # if not task_price_per_min:
            #     break

            task_price_per_min.pop(0)

        print(task_id, end=' ')
        for minute, power in task_mins_powers:
            if power != 0:
                print(f'{minute} {power}', end=' ')
        print()

        if cheap_min in mins_tasks:
            mins_tasks[cheap_min] += task_power
        else:
            mins_tasks[cheap_min] = task_power


    #Check_bill
    bill = 0
    for minute in price_per_min:
        bill += (price_per_min[minute]*mins_tasks.get(minute, 0))
    if bill > max_bill:
        print('ERROR')


if __name__ == "__main__":
    main(sys.argv[1:])