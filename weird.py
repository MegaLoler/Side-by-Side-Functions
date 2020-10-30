#!/bin/env python3

import sys
import time

def cover_tracks():
    sys.stdout.write('\b\b  ')

def begin_comment():
    sys.stdout.write('/*')
    cover_tracks()

def end_comment():
    sys.stdout.write('*/')

def goto(row, col):
    sys.stdout.write(f'\x1b[{row};{col}H')

sys.stdout.write('//\b\b  \x1b[2J\n')
begin_comment()

row, col = 1, 1
for line in sys.stdin.readlines():
    if line.startswith('//@'):
        row, col = map(int, line[3:].split(';'))
    else:
        goto(row, col)
        end_comment()
        sys.stdout.write(line)
        last = row, col
        row += 1
        r, c = last
        begin_comment()
        goto(r, c + 2)
        cover_tracks()
goto(row, col)
end_comment()
sys.stdout.write('//\b\b\b\b    \n')
