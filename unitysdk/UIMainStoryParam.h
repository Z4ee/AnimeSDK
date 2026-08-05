#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UIMAINSTORYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A686AE0)

inline static constexpr unsigned int UIMainStoryParam_TypeDefinitionIndex = 64577;

class UIMainStoryParam : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Color SelectedColor1; // 0x18
	::UnityEngine::Color SelectedColor2; // 0x28
	::System::Single AlphaTiling; // 0x38
	::System::Single AlphaOffset; // 0x3C
	::System::Single ChangeTime; // 0x40
	::System::Single SubRootExpandTime; // 0x44
	::System::Single SubItemFadeTime; // 0x48
	::System::Single SubItemFixTime; // 0x4C
	::System::Single SubItemFadeInterval; // 0x50
	::System::Single SubItemExpandDelayTime; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMAINSTORYPARAM__CTOR_OFFSET))(this);
	}
};
