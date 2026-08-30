#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_PASSTAGID_INITPASSTAG_1_OFFSET UNITYSDK_OFFSET(0x1ECC5DB0)
#define UNITYENGINE_PASSTAGID_INITPASSTAG_OFFSET UNITYSDK_OFFSET(0x3C6BDA0)
#define UNITYENGINE_PASSTAGID__CTOR_OFFSET UNITYSDK_OFFSET(0x3AA5BD0)

namespace UnityEngine
{
	inline static constexpr unsigned int PassTagID_TypeDefinitionIndex = 4254;

	struct alignas(8) PassTagID
	{
		::System::String* name; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID__CTOR_OFFSET))(this, a1);
		}

		::System::Void InitPassTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_INITPASSTAG_OFFSET))(this);
		}

		static ::System::Int32 InitPassTag_1(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PASSTAGID_INITPASSTAG_1_OFFSET))(a1);
		}
	};
}
