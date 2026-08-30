#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/DtdParser_Token.h"

#define SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_LOCALFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D3460)

namespace System::Xml
{
	inline static constexpr unsigned int DtdParser_ParseElementOnlyContent_LocalFrame_TypeDefinitionIndex = 1936;

	class DtdParser_ParseElementOnlyContent_LocalFrame : public ::System::Object
	{
	public:
		::System::Xml::DtdParser_Token parsingSchema; // 0x10
		::System::Int32 startParenEntityId; // 0x14

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_DTDPARSER_PARSEELEMENTONLYCONTENT_LOCALFRAME__CTOR_OFFSET))(this, a1);
		}
	};
}
