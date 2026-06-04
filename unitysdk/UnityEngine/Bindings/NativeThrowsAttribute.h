#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_SET_THROWSEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B3405E0)
#define UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3405F0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeThrowsAttribute_TypeDefinitionIndex = 3723;

	class NativeThrowsAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _ThrowsException_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_ThrowsException(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETHROWSATTRIBUTE_SET_THROWSEXCEPTION_OFFSET))(this, a1);
		}
	};
}
