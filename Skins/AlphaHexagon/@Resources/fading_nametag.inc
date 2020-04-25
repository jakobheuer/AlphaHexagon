[Variables]
U=[!UpdateMeasure Fader][!UpdateMeter MeterActiveColor][!UpdateMeter MeterNametag][!Redraw]

[MeterNametag]
Meter=String
Text=#Nametag#
MeterStyle=StyleNametag
FontSize=(14 * #Scaling#)
FontColor=#White#,#FadingAlpha#
X=(#IconWidth# / 2)
Y=(#IconHeight# - 42 * #Scaling#)
DynamicVariables=1
