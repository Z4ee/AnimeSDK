#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define UIMOVEANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE9900E0)
#define UIMOVEANIMATION_START_OFFSET UNITYSDK_OFFSET(0xE98FF00)
#define UIMOVEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xE990370)

inline static constexpr unsigned int UIMoveAnimation_TypeDefinitionIndex = 47743;

class UIMoveAnimation : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 IKDPLPEAHDD; // 0x18
	::UnityEngine::RectTransform* IGLNACMFMHF; // 0x28
	::System::Single BPBAOFEOGOM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMOVEANIMATION__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMOVEANIMATION_START_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMOVEANIMATION_LATEUPDATE_OFFSET))(this);
	}
};
