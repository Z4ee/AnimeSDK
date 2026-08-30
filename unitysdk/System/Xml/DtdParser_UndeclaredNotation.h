#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_DTDPARSER_UNDECLAREDNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D3ED0)

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_UndeclaredNotation_TypeDefinitionIndex = 1935;

	class DtdParser_UndeclaredNotation : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Xml::DtdParser_UndeclaredNotation* next; // 0x18
		::System::Int32 linePos; // 0x20
		::System::Int32 lineNo; // 0x24

		::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_UNDECLAREDNOTATION__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
