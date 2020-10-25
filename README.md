# technica2Morse
An LED strip wired to an arduino takes power directly from my laptop, and follows the source code I wrote to flash Technica 2020! in morse code. In the source code, you can change it to flash any phrase you would like.
## Inspiration
I wanted to create a small and simple hack for Technica, because I am a _complete_ beginner, and I had these LED lights laying around my house. So, I thought, why not put them to use and have these lights represent Technica! I thought about how I could make these lights symbolize Technica, and this is what I came up with.
## What it does
The LED strip takes power directly from my laptop, and follows the source code I wrote to flash Technica 2020! in morse code. In the source code, you can change it to flash any phrase you would like.  
## How I built it
First, I installed a morse code library onto the Arduino IDE. Then, I wired the LED strip directly onto my Arduino, with the power section of the LED wired directly into the 5V pin, and the R,G, and B sections of the LED strip going onto the digital pins 3, 6, and 10. In my code, I only utilize pins 6 and 10 because those are connected to the red and blue stripes, and I wanted my lights to flash purple because of Technica's pink, blue, and purple theme. Coincidentally, the LED only takes 5V to power, and when you power using a laptop, it outputs 5V, so it was perfect! In my code, I set two functions that would serve as the dot and the dash in the morse code. Then, the handy dandy Morse Code library has a function that automatically turns any string into morse code as long as you have those functions assigned, so I ran it and it worked! 
## Challenges I ran into
Although the project seems simple, I ran into a LOT of challenges. In the beginning, I had absolutely no idea where to start, and had to have a very long session with a mentor in office hours. We did a lot of trial and error, and along the way spent about 1.5-2 hours on a section of the project that was completely unnecessary, but at the end of it, I had my streamlined finished product! Another challenge I ran into was that the male-female wires were not the perfect fit to my LED strips, so I had trouble keeping the LED strip connected to the Arduino. I managed to make it (kind of) work, and that's why my final project is completely blue, but I am still super proud and glad I made it work.
## Accomplishments that I'm proud of
I'm really proud of the project as a whole, because I am a complete hardware beginner and was honestly lost in the beginning. But, I persevered and learned what was needed in order to complete the project (thanks to our **lovely**) mentors), and am happy to have participated in Technica!
## What I learned
I learned how hardware circuits actually work and the logic behind them. I also learned how to persevere when the going gets tough, and to stick with something, because at the end of the day, if you put in the work, it usually works out! 
## What's next for Flashing "Technica 2020" in Morse Code!
This is kind of a one time project, but I'm super excited to see what else I can do with hardware!
## Other Notes!
The video attached is not the full cycle of the morse code, because it would be too long/would get a little redundant, but hopefully if you would like to see it at the demo you will be able to!
