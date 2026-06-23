#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define UISNAKEENDINGANIMSCRIPTPARAM_SCALEANIMPARAMS_CALVALUEBYEVALUATECURVE_OFFSET UNITYSDK_OFFSET(0x1C760D30)
#define UISNAKEENDINGANIMSCRIPTPARAM_SCALEANIMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C760DE0)

inline static constexpr unsigned int UISnakeEndingAnimScriptParam_ScaleAnimParams_TypeDefinitionIndex = 91030;

class UISnakeEndingAnimScriptParam_ScaleAnimParams : public ::System::Object
{
public:
	::System::Single verticalMaxDeltaValue; // 0x10
	::System::Single horizontalMaxDeltaValue; // 0x14
	::System::Single playerScaleDeltaValue; // 0x18
	::UnityEngine::AnimationCurve* curve; // 0x20
	::System::Single scaleLimitRectHeight; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_SCALEANIMPARAMS__CTOR_OFFSET))(this);
	}

	::System::Void CalValueByEvaluateCurve(::System::Single ratio, ::System::Single& horizontalValue, ::System::Single& vertialValue, ::System::Single& playerScaleDelta)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_SCALEANIMPARAMS_CALVALUEBYEVALUATECURVE_OFFSET))(this, ratio, horizontalValue, vertialValue, playerScaleDelta);
	}
};
