#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define UICURVEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x150A5C70)

inline static constexpr unsigned int UICurveParams_TypeDefinitionIndex = 39033;

class UICurveParams : public ::System::Object
{
public:
	::UnityEngine::Color color; // 0x10
	::UnityEngine::Color colorSub; // 0x20
	::System::Int32 waveFrequency; // 0x30
	::System::Single waveAmplitude; // 0x34
	::System::Single wavePhase; // 0x38
	::System::Single waveOffset; // 0x3C
	::System::Single waveSpeed; // 0x40
	::System::Single displacementIntensity; // 0x44
	::System::Boolean displacementReverse; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICURVEPARAMS__CTOR_OFFSET))(this);
	}
};
