#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NATIVEASSTRUCTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB7980)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeAsStructAttribute_TypeDefinitionIndex = 3706;

	class NativeAsStructAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEASSTRUCTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
