#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::Text { class Decoder; }
namespace System::Text { class Encoding; }
namespace System::Xml { class IDtdEntityInfo; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_PARSINGSTATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x930810)
#define SYSTEM_XML_XMLTEXTREADERIMPL_PARSINGSTATE_CLOSE_OFFSET UNITYSDK_OFFSET(0x930870)
#define SYSTEM_XML_XMLTEXTREADERIMPL_PARSINGSTATE_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x9308B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_ParsingState_TypeDefinitionIndex = 1723;

	struct alignas(8) XmlTextReaderImpl_ParsingState
	{
		::Il2CppArray<::System::Char>* chars; // 0x10
		::System::Int32 charPos; // 0x18
		::System::Int32 charsUsed; // 0x1C
		::System::Text::Encoding* encoding; // 0x20
		::System::Boolean appendMode; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::Text::Decoder* decoder; // 0x38
		::Il2CppArray<::System::Byte>* bytes; // 0x40
		::System::Int32 bytePos; // 0x48
		::System::Int32 bytesUsed; // 0x4C
		::System::IO::TextReader* textReader; // 0x50
		::System::Int32 lineNo; // 0x58
		::System::Int32 lineStartPos; // 0x5C
		::System::String* baseUriStr; // 0x60
		::System::Uri* baseUri; // 0x68
		::System::Boolean isEof; // 0x70
		::System::Boolean isStreamEof; // 0x71
		::System::Xml::IDtdEntityInfo* entity; // 0x78
		::System::Int32 entityId; // 0x80
		::System::Boolean eolNormalized; // 0x84
		::System::Boolean entityResolvedManually; // 0x85

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_PARSINGSTATE_CLEAR_OFFSET))(this);
		}

		::System::Void Close(::System::Boolean closeInput)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_PARSINGSTATE_CLOSE_OFFSET))(this, closeInput);
		}

		::System::Int32 get_LinePos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_PARSINGSTATE_GET_LINEPOS_OFFSET))(this);
		}
	};
}
