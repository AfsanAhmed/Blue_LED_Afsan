#first install python-rpi.gpio using sudo api-get install python-rpi.gpio
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

GPIO.setup(13, GPIO.OUT)
GPIO.output(13, GPIO.HIGH)
time.sleep(10)
GPIO.output(13, GPIO.LOW)
GPIO.cleanup()