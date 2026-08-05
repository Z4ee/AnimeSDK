#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_SERIALIZATIONCACHE_SET_ENABLELAZYCREATE_OFFSET UNITYSDK_OFFSET(0x1E956120)

namespace UnityEngine
{
	inline static constexpr unsigned int SerializationCache_TypeDefinitionIndex = 5385;

	class SerializationCache : public ::System::Object
	{
	public:
		static ::System::Void set_enableLazyCreate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SERIALIZATIONCACHE_SET_ENABLELAZYCREATE_OFFSET))(value);
		}
	};
}
