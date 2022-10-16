from pygame import mixer
mixer.init()
mixer.music.load(".\\1.wav")
mixer.music.set_volume(1.0)
mixer.music.play(2)
while mixer.music.get_busy()==True:
    pass
