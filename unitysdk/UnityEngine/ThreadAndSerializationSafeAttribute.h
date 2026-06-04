#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_THREADANDSERIALIZATIONSAFEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3408D0)

namespace UnityEngine
{
	inline static constexpr unsigned int ThreadAndSerializationSafeAttribute_TypeDefinitionIndex = 3700;

	class ThreadAndSerializationSafeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_THREADANDSERIALIZATIONSAFEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
