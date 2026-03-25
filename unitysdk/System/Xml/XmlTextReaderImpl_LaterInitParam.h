#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlTextReaderImpl_InitInputType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlResolver; }

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_LaterInitParam_TypeDefinitionIndex = 1840;

	class XmlTextReaderImpl_LaterInitParam : public ::System::Object
	{
	public:
		::System::String* inputUriStr; // 0x10
		::System::IO::TextReader* inputTextReader; // 0x18
		::System::Xml::XmlParserContext* inputContext; // 0x20
		::Il2CppArray<::System::Byte>* inputBytes; // 0x28
		::System::Uri* inputbaseUri; // 0x30
		::System::Xml::XmlResolver* inputUriResolver; // 0x38
		::System::IO::Stream* inputStream; // 0x40
		::System::Boolean useAsync; // 0x48
		::System::Int32 inputByteCount; // 0x4C
		::System::Xml::XmlTextReaderImpl_InitInputType initType; // 0x50
	};
}
