#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_UI_EXTENSION_TERMID_GET_ID_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_UI_EXTENSION_TERMID__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TermID_TypeDefinitionIndex = 63594;

	struct alignas(4) TermID
	{
		::System::Int32 _ID_k__BackingField; // 0x10

		::System::Void _ctor(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMID__CTOR_OFFSET))(this, id);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TERMID_GET_ID_OFFSET))(this);
		}
	};
}
