#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SERIALIZEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A485090)

namespace UnityEngine
{
	inline static constexpr unsigned int SerializeField_TypeDefinitionIndex = 4181;

	class SerializeField : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEFIELD__CTOR_OFFSET))(this);
		}
	};
}
