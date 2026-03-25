#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/WriteState.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x18654750)
#define SYSTEM_XML_XMLWRITER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x18654F70)
#define SYSTEM_XML_XMLWRITER_CREATE_OFFSET UNITYSDK_OFFSET(0x18654840)
#define SYSTEM_XML_XMLWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18654800)
#define SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186547E0)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_1_OFFSET UNITYSDK_OFFSET(0x186546B0)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_2_OFFSET UNITYSDK_OFFSET(0x18654700)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x18654660)
#define SYSTEM_XML_XMLWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x18652920)
#define SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x18654780)
#define SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x18654630)
#define SYSTEM_XML_XMLWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x18654760)
#define SYSTEM_XML_XMLWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x18641280)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWriter_TypeDefinitionIndex = 1873;

	class XmlWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER__CTOR_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET))(this, localName, ns);
		}

		::System::Void WriteAttributeString(::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET))(this, localName, ns, value);
		}

		::System::Void WriteAttributeString_1(::System::String* localName, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_1_OFFSET))(this, localName, value);
		}

		::System::Void WriteAttributeString_2(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_2_OFFSET))(this, prefix, localName, ns, value);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEBINHEX_OFFSET))(this, buffer, index, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void WriteElementString(::System::String* localName, ::System::String* ns, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET))(this, localName, ns, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_1_OFFSET))(this, disposing);
		}

		static ::System::Xml::XmlWriter* Create(::System::IO::Stream* output, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Xml::XmlWriter*(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CREATE_OFFSET))(output, settings);
		}

		static ::System::Xml::XmlWriter* Create_1(::System::IO::TextWriter* output, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Xml::XmlWriter*(*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CREATE_1_OFFSET))(output, settings);
		}
	};
}
