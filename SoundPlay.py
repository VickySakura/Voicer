from pygame.mixer import init
from pygame.mixer import music as m

init()
m.load(".\\1.wav")
m.set_volume(1.0)
m.play(2)
while m.get_busy()==True:
    pass
