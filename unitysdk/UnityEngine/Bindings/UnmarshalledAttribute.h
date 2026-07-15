#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3004F0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int UnmarshalledAttribute_TypeDefinitionIndex = 3722;

	class UnmarshalledAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_UNMARSHALLEDATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
