#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define UIMOVEANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0E8470)
#define UIMOVEANIMATION_START_OFFSET UNITYSDK_OFFSET(0xD0E82B0)
#define UIMOVEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E8700)

inline static constexpr unsigned int UIMoveAnimation_TypeDefinitionIndex = 44621;

class UIMoveAnimation : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 Field_5_0; // 0x18
	::UnityEngine::RectTransform* Field_5_1; // 0x28
	::System::Single Field_5_2; // 0x30

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
