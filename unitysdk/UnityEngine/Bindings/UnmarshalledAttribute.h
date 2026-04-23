#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3930)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int UnmarshalledAttribute_TypeDefinitionIndex = 3711;

	class UnmarshalledAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
