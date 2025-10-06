This repo contains a firmware and build files for esp32c3 supermini and llcc68 rf module based simple (radio only) meshtastic node.

This in my view is possibly the cheapest meshtastic node with just 2 components

LCC68 RF Module (868-915MHz) at < $3 : https://www.aliexpress.com/item/3256805528427908.html

ESP32-C3 SuperMini Plus at > $3 : https://www.aliexpress.com/item/3256807958665407.html

i.e. a meshtastic node for about $5.

Its cheap and there are drawbacks to this setup which you can read more about at my blog https://amoghdesai.com/

I have done a 3 part blog series on this:
1. Testing simple test LORA communication between 2 nodes using these cheap modules: https://amoghdesai.com/uncategorized/cheapest-lora-transceiver-with-the-llcc68-and-esp32%e2%80%91c3-supermini-plus/

   Also did a YoutTube video on this. [Watch it here](https://www.youtube.com/watch?v=OFPbiupgmm0)

2. More about Pro and Cons of the llcc68 module, what works and what not: https://amoghdesai.com/uncategorized/does-meshtastic-support-llcc68/

3. How to use this Repo, how to build the firmware, how to flash the firmware and testing the 2 Mshtastic Nodes: https://amoghdesai.com/technology/how-to-build-and-use-meshtastic-firmware-for-esp32-c3-supermini-and-llcc68-rf-module/


