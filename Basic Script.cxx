string name="Basic Script";
string description="You can build any Plug'n Script script on top of this basic script.";

array<string> inputParametersNames = {};
array<string> inputParametersUnits = {};
array<string> inputParametersEnums = {};
array<double> inputParameters( inputParametersNames.length );
array<int> inputParametersSteps = {};
array<double> inputParametersMin = {};
array<double> inputParametersMax = {};

void processBlock(BlockData& data)
{
	for(uint ch = 0; ch < audioOutputsCount; ch ++)
	{
		for(uint s = 0; s < data.samplesToProcess; s ++)
		{
			data.samples[ch][s] = data.samples[ch][s];
		}
	}
}

void updateInputParametersForBlock(const TransportInfo@ info){}

