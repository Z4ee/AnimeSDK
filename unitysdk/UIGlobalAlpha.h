#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Canvas; }

#define UIGLOBALALPHA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1DE8E430)
#define UIGLOBALALPHA_START_OFFSET UNITYSDK_OFFSET(0x1DE8E3A0)
#define UIGLOBALALPHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E4E0)

inline static constexpr unsigned int UIGlobalAlpha_TypeDefinitionIndex = 81455;

class UIGlobalAlpha : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single alpha; // 0x18
	::System::Single lastAlpha; // 0x1C
	::UnityEngine::Canvas* m_RootCanvas; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALALPHA__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALALPHA_START_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGLOBALALPHA_LATEUPDATE_OFFSET))(this);
	}
};
