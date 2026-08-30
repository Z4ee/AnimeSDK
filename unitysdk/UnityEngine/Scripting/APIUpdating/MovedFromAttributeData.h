#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTEDATA_SET_OFFSET UNITYSDK_OFFSET(0x3C03730)

namespace UnityEngine::Scripting::APIUpdating
{
	inline static constexpr unsigned int MovedFromAttributeData_TypeDefinitionIndex = 4502;

	struct alignas(8) MovedFromAttributeData
	{
		::System::String* className; // 0x10
		::System::String* nameSpace; // 0x18
		::System::String* assembly; // 0x20
		::System::Boolean classHasChanged; // 0x28
		::System::Boolean nameSpaceHasChanged; // 0x29
		::System::Boolean assemblyHasChanged; // 0x2A
		::System::Boolean autoUdpateAPI; // 0x2B

		::System::Void Set(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTEDATA_SET_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
