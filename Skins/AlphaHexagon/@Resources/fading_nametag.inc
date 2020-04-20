[Variables]
FadingMeter=MeterColorIcon,MeterNametag

[MeterNametag]
Meter=String
Text=#Nametag#
MeterStyle=StyleNametag
FontSize=(14 * #Scaling#)
FontColor=#White#, (#Fade# * 255)
X=(#IconWidth# / 2)
Y=(#IconHeight# - 42 * #Scaling#)
DynamicVariables=1
