#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_SET_THROWSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x18AB7CE0)
#define UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB7CF0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeThrowsAttribute_TypeDefinitionIndex = 3714;

	class NativeThrowsAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ThrowsException_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_ThrowsException(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_SET_THROWSEXCEPTION_OFFSET))(this, value);
		}
	};
}
