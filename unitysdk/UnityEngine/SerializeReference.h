#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SERIALIZEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED63E90)

namespace UnityEngine
{
	inline static constexpr unsigned int SerializeReference_TypeDefinitionIndex = 4371;

	class SerializeReference : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZEREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
