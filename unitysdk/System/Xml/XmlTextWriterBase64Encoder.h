#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Base64Encoder.h"

namespace System::Xml { class XmlTextEncoder; }

#define SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1CFC5D70)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriterBase64Encoder_TypeDefinitionIndex = 1663;

	class XmlTextWriterBase64Encoder : public ::System::Xml::Base64Encoder
	{
	public:
		::System::Xml::XmlTextEncoder* xmlTextEncoder; // 0x28

		::System::Void WriteChars(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTWRITERBASE64ENCODER_WRITECHARS_OFFSET))(this, chars, index, count);
		}
	};
}
