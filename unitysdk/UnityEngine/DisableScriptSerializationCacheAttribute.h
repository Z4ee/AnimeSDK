#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_DISABLESCRIPTSERIALIZATIONCACHEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED6870)

namespace UnityEngine
{
	inline static constexpr unsigned int DisableScriptSerializationCacheAttribute_TypeDefinitionIndex = 4313;

	class DisableScriptSerializationCacheAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISABLESCRIPTSERIALIZATIONCACHEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
