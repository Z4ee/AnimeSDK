#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_XML_LINEINFO_SET_OFFSET UNITYSDK_OFFSET(0x7DC40)
#define SYSTEM_XML_LINEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x7DC40)

namespace System::Xml
{
	inline static constexpr unsigned int LineInfo_TypeDefinitionIndex = 1927;

	struct alignas(4) LineInfo
	{
		::System::Int32 lineNo; // 0x10
		::System::Int32 linePos; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINEINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Set(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINEINFO_SET_OFFSET))(this, a1, a2);
		}
	};
}
