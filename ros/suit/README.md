# Suit

suit computation local

## raspberry pi

### pi 3b+

For raspberry pi 3b+, you need to follow [these instructions](https://ubuntu.com/download/iot/raspberry-pi-2-3), downloading the preinstalled version of ubuntu 18.04 server edition. Then you need to configure your pi to have the correct network interfaces, such as the wifi network with internet connection, so that you can install ros.

### pi 4

The first thing you need to do is get a 64 bit version of linux. I just got the raspberry pi 4 because it is faster, and more supported for 64 bit stuff. You can grab manjaro, but I decided to grab ubuntu because I also want to use this board for a ROS project that requires ubuntu 18.04. Anyway I followed [these instructions](https://jamesachambers.com/raspberry-pi-ubuntu-server-18-04-2-installation-guide/) and installed ubuntu on an ssd and on the sd card [this](https://github.com/TheRemote/Ubuntu-Server-raspi4-unofficial/releases). Boot the sd card and change `/etc/netplan/*.yaml` to make ethernet optional. Then I edited the `cmdline.txt` file on the sd card to point to the ssd (`root=/dev/sda2`). Then make the ssd the same way as the sd card and copy the boot partition over. Then boot and run `sudo apt-mark hold flash-kernel && sudo apt-get update && sudo apt-get upgrade` to update without changing modified firmware (very important). Then I used [these instructions](https://raspberrypi.stackexchange.com/a/98636) to get the wifi working.

Follow these instructions for installing melodic: `http://wiki.ros.org/melodic/Installation/Ubuntu`
