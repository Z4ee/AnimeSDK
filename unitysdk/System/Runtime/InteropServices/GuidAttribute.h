#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC01820)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int GuidAttribute_TypeDefinitionIndex = 1418;

	class GuidAttribute : public ::System::Attribute
	{
	public:
		::System::String* _val; // 0x10

		::System::Void _ctor(::System::String* guid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_GUIDATTRIBUTE__CTOR_OFFSET))(this, guid);
		}
	};
}
