#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_XML_LINEINFO_SET_OFFSET UNITYSDK_OFFSET(0x293FB0)
#define SYSTEM_XML_LINEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace System::Xml
{
	inline static constexpr unsigned int LineInfo_TypeDefinitionIndex = 1797;

	struct alignas(4) LineInfo
	{
		::System::Int32 lineNo; // 0x10
		::System::Int32 linePos; // 0x14

		::System::Void _ctor(::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINEINFO__CTOR_OFFSET))(this, lineNo, linePos);
		}

		::System::Void Set(::System::Int32 lineNo, ::System::Int32 linePos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINEINFO_SET_OFFSET))(this, lineNo, linePos);
		}
	};
}
