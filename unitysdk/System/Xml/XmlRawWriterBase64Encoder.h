#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Base64Encoder.h"

namespace System::Xml { class XmlRawWriter; }

#define SYSTEM_XML_XMLRAWWRITERBASE64ENCODER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x18626170)
#define SYSTEM_XML_XMLRAWWRITERBASE64ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x18625C60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRawWriterBase64Encoder_TypeDefinitionIndex = 1776;

	class XmlRawWriterBase64Encoder : public ::System::Xml::Base64Encoder
	{
	public:
		::System::Xml::XmlRawWriter* rawWriter; // 0x28

		::System::Void _ctor(::System::Xml::XmlRawWriter* rawWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlRawWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITERBASE64ENCODER__CTOR_OFFSET))(this, rawWriter);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* chars, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITERBASE64ENCODER_WRITECHARS_OFFSET))(this, chars, index, count);
		}
	};
}
