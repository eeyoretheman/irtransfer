import serial
import sys
from time import sleep

s = serial.Serial("COM3", 9600, timeout=5)

with open(sys.argv[1], "rb") as file:
    sleep(2)

    for byte in file.read():
        s.write(bytes([byte]))
        sleep(0.1)
    s.write(b"\xde")

print(s.read(4096))