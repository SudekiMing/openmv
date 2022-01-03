static const char fresh_main_py[] =
"# main.py -- put your code here!\n"
"import pyb, time\n"
"led = pyb.LED(3)\n"
"usb = pyb.USB_VCP()\n"
"while (usb.isconnected()==False):\n"
"   led.on()\n"
"   time.sleep_ms(150)\n"
"   led.off()\n"
"   time.sleep_ms(100)\n"
"   led.on()\n"
"   time.sleep_ms(150)\n"
"   led.off()\n"
"   time.sleep_ms(600)\n"
;