#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class UISnakeEndingAnimScriptParam_GrowAnimParams;
class UISnakeEndingAnimScriptParam_ScaleAnimParams;

#define UISNAKEENDINGANIMSCRIPTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC24690)

inline static constexpr unsigned int UISnakeEndingAnimScriptParam_TypeDefinitionIndex = 94975;

class UISnakeEndingAnimScriptParam : public ::UnityEngine::MonoBehaviour
{
public:
	::UISnakeEndingAnimScriptParam_GrowAnimParams* growParams; // 0x18
	::UISnakeEndingAnimScriptParam_ScaleAnimParams* scaleParams; // 0x20
	::UnityEngine::Color hostPlayerColor; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISNAKEENDINGANIMSCRIPTPARAM__CTOR_OFFSET))(this);
	}
};
