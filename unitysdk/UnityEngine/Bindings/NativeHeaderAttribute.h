#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x1B3402C0)
#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3402D0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeHeaderAttribute_TypeDefinitionIndex = 3708;

	class NativeHeaderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Header_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_Header(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET))(this, a1);
		}
	};
}
