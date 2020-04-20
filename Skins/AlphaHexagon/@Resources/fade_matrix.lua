function Initialize()
	FadingVariable = SELF:GetOption('FadingVariable', '')
	FadingMeter = SELF:GetOption('FadingMeter', '')
	TintBeginString = SELF:GetOption('TintBegin', '')
	FadeInStep = SELF:GetNumberOption('FadeInStep', '')
	FadeOutStep = SELF:GetNumberOption('FadeOutStep', '')

	TintBegin = {}
	for part in string.gmatch(TintBeginString, '[^,]+') do
		table.insert(TintBegin, tonumber(part))
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
		end

		WriteOut(Fade)
	end
end

function FadeOut()
	State = 2

	while State == 2 do
		Fade = Fade - FadeOutStep

		if Fade < 0 then
			Fade = 0
			State = 0
		end

		WriteOut(Fade)
	end
end

function WriteOut(Fade)
	local tint = {}
	for i = 1, 3 do
		tint[i] = TintBegin[i] / 255 * (1 - Fade)
	end

	SKIN:Bang('!SetVariable', FadingVariable, Fade)

	SKIN:Bang('!SetOption', FadingMeter, 'ColorMatrix1', Fade..'; 0; 0; 0; 0')
	SKIN:Bang('!SetOption', FadingMeter, 'ColorMatrix2', '0; '..Fade..'; 0; 0; 0')
	SKIN:Bang('!SetOption', FadingMeter, 'ColorMatrix3', '0; 0; '..Fade..'; 0; 0')
	SKIN:Bang('!SetOption', FadingMeter, 'ColorMatrix4', '0; 0; 0; 1; 0')
	SKIN:Bang('!SetOption', FadingMeter, 'ColorMatrix5', tint[1]..'; '..tint[2]..'; '..tint[3]..'; 0; 1')

	SKIN:Bang('!UpdateMeter', FadingMeter)
	SKIN:Bang('!Redraw')
end
