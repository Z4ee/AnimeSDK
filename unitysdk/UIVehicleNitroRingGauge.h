#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class ShaderAniHelp;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define UIVEHICLENITRORINGGAUGE_SETPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1D5D43D0)
#define UIVEHICLENITRORINGGAUGE_UPDATEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D5D3F50)
#define UIVEHICLENITRORINGGAUGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D44F0)

inline static constexpr unsigned int UIVehicleNitroRingGauge_TypeDefinitionIndex = 79417;

class UIVehicleNitroRingGauge : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single consumePercent; // 0x18
	::System::Single percentage; // 0x1C
	::UnityEngine::Quaternion RotationAtShaderAngle0; // 0x20
	::UnityEngine::Quaternion RotationAtShaderAngle90; // 0x30
	::System::Single GaugeEmptyAngle; // 0x40
	::System::Single GaugeFullAngle; // 0x44
	::UnityEngine::RectTransform* divider; // 0x48
	::ShaderAniHelp* other; // 0x50
	::ShaderAniHelp* consume; // 0x58
	::System::String* replaceIcon; // 0x60
	::System::Single RecoverLerpDuration; // 0x68
	::System::Single startLerpPercentage; // 0x6C
	::System::Single startLerpTime; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVEHICLENITRORINGGAUGE__CTOR_OFFSET))(this);
	}

	::System::Void UpdateDisplay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVEHICLENITRORINGGAUGE_UPDATEDISPLAY_OFFSET))(this);
	}

	::System::Void SetPercentage(::System::Single consumePer, ::System::Single percent, ::System::Boolean triggerRecover)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UIVEHICLENITRORINGGAUGE_SETPERCENTAGE_OFFSET))(this, consumePer, percent, triggerRecover);
	}
};
