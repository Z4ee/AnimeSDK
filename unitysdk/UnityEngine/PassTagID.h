#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_PASSTAGID_INITPASSTAG_1_OFFSET UNITYSDK_OFFSET(0x18A29CF0)
#define UNITYENGINE_PASSTAGID_INITPASSTAG_OFFSET UNITYSDK_OFFSET(0x2112CC0)
#define UNITYENGINE_PASSTAGID__CTOR_OFFSET UNITYSDK_OFFSET(0x148E640)

namespace UnityEngine
{
	inline static constexpr unsigned int PassTagID_TypeDefinitionIndex = 4063;

	struct alignas(8) PassTagID
	{
		::System::String* name; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor(::System::String* n)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID__CTOR_OFFSET))(this, n);
		}

		::System::Void InitPassTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_INITPASSTAG_OFFSET))(this);
		}

		static ::System::Int32 InitPassTag_1(::System::String* name)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_INITPASSTAG_1_OFFSET))(name);
		}
	};
}
