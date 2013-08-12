import serial
import sys
serial.Serial('/dev/tty.usbserial-A600bLTy').write(str(sys.argv))
