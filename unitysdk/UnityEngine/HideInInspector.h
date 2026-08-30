#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_HIDEININSPECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED2B450)

namespace UnityEngine
{
	inline static constexpr unsigned int HideInInspector_TypeDefinitionIndex = 4306;

	class HideInInspector : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HIDEININSPECTOR__CTOR_OFFSET))(this);
		}
	};
}
