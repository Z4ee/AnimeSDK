#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0x1A4F3440)
#define UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3450)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeHeaderAttribute_TypeDefinitionIndex = 3701;

	class NativeHeaderAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Header_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* header)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE__CTOR_OFFSET))(this, header);
		}

		::System::Void set_Header(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEHEADERATTRIBUTE_SET_HEADER_OFFSET))(this, value);
		}
	};
}
