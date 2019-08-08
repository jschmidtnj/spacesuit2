# Wifi network

There are 2 routers that are needed (currently). The first router goes on the space suit and connects to all the local ros nodes, while the second router is simulating the network on the ISS and is therefore off of the suit. The ISS router is called `spacesuit-home` for the ssid on 2.4ghz, and `spacesuit-home-5` for the 5ghz link. The local spacesuit ssid is just `spacesuit-local`, and it only has a 2.4ghz link.

## setup

First the ssid's need to be changed for both routers. Then the passwords need to be changed - in this case they were set to the same as the ssid but that can be changed. Additionally you can put the routers in hidden mode, if you don't want other people to connect to the router as easily. This will probably occur in production mode.

Then you need to set the ISS router to be in wireless bridge mode (WISP mode). For the generic `Wise Tiger` router currently being used (found [here](https://www.amazon.com/dp/B07MNNLYXN)), you go to `192.168.0.1` and configure it there. For the spacesuit wifi, connect to the ISS router also in bridge mode. In this case we used a [hootoo tripmate travel router](https://www.amazon.com/dp/B074LHG47K), and connected to it by going to `10.10.10.254`.

## static ip setup

TODO - get static ips and configure them
