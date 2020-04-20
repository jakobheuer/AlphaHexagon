[Drag&Drop]
Measure=Plugin
Plugin=Drag&Drop
Action=Move
Path="#Path#"
OnDroppedAction=[!CommandMeasure Fader "Stop 2"][!CommandMeasure Fader "Execute 1"]
OnLeaveAction=[!CommandMeasure Fader "Stop 1"][!CommandMeasure Fader "Execute 2"]
ProcessAllFiles=1
