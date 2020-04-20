function Initialize()
	FadingVariable = SELF:GetOption('FadingVariable', '')
	FadingMeterString = SELF:GetOption('FadingMeter', '')
	BackgroundMeter = SELF:GetOption('BackgroundMeter', '')
	FadeInStep = SELF:GetNumberOption('FadeInStep', '')
	FadeOutStep = SELF:GetNumberOption('FadeOutStep', '')

	FadingMeters = {}
	for part in string.gmatch(FadingMeterString, '[^,]+') do
		table.insert(FadingMeters, part)
	end

	Fade = 0
	State = 0

	WriteOut(Fade)
end

function FadeIn()
	State = 1

	while State == 1 do
		Fade = Fade + FadeInStep

		if Fade > 1 then
			Fade = 1
			State = 0

			if BackgroundMeter ~= '' then
				HideBackground()
			end
		end

		WriteOut(Fade)
	end
end

function FadeOut()
	State = 2

	if BackgroundMeter ~= '' then
		ShowBackground()
	end

	while State == 2 do
		Fade = Fade - FadeOutStep

		if Fade < 0 then
			Fade = 0
			State = 0
		end

		WriteOut(Fade)
	end
end

function ShowBackground()
	SKIN:Bang('!ShowMeter', BackgroundMeter)
	SKIN:Bang('!UpdateMeter', BackgroundMeter)
end

function HideBackground()
	SKIN:Bang('!HideMeter', BackgroundMeter)
	SKIN:Bang('!UpdateMeter', BackgroundMeter)
end

function WriteOut(Fade)
	SKIN:Bang('!SetVariable', FadingVariable, Fade)

	for i, meter in ipairs(FadingMeters) do
		SKIN:Bang('!UpdateMeter', meter)
	end

	SKIN:Bang('!Redraw')
end
