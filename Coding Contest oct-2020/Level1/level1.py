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
        prices = f.readlines()

    prices = prices[1:]
    min_price = min(prices)
    min_minute = prices.index(min_price)
    print(min_minute)


if __name__ == "__main__":
    main(sys.argv[1:])