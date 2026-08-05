#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_CALVALUEBYEVALUATECURVE_OFFSET UNITYSDK_OFFSET(0x1EF05A30)
#define UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1EF05AA0)
#define UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF05B10)

inline static constexpr unsigned int UISnakeEndingAnimScriptParam_GrowAnimParams_TypeDefinitionIndex = 94977;

class UISnakeEndingAnimScriptParam_GrowAnimParams : public ::System::Object
{
public:
	::System::Single normalHeight; // 0x10
	::System::Single maxHeight; // 0x14
	::System::Single duration; // 0x18
	::UnityEngine::AnimationCurve* curve; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS__CTOR_OFFSET))(this);
	}

	::System::Single CalValueByEvaluateCurve(::System::Single ratio)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_CALVALUEBYEVALUATECURVE_OFFSET))(this, ratio);
	}

	::System::Single Evaluate(::System::Single ratio)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM_GROWANIMPARAMS_EVALUATE_OFFSET))(this, ratio);
	}
};
