#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/WriteState.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::IO { class TextWriter; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF00070)
#define SYSTEM_XML_XMLWRITER_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1AF00750)
#define SYSTEM_XML_XMLWRITER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AF00160)
#define SYSTEM_XML_XMLWRITER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1AF00120)
#define SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF00100)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_1_OFFSET UNITYSDK_OFFSET(0x1AEFFFD0)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_2_OFFSET UNITYSDK_OFFSET(0x1AF00020)
#define SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET UNITYSDK_OFFSET(0x1AEFFF80)
#define SYSTEM_XML_XMLWRITER_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x1AEFE440)
#define SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1AF000A0)
#define SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1AEFFF50)
#define SYSTEM_XML_XMLWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1AF00080)
#define SYSTEM_XML_XMLWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEED330)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWriter_TypeDefinitionIndex = 1874;

	class XmlWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER__CTOR_OFFSET))(this);
		}

		::System::Void WriteStartElement(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITESTARTELEMENT_OFFSET))(this, a1, a2);
		}

		::System::Void WriteAttributeString(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteAttributeString_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteAttributeString_2(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEATTRIBUTESTRING_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEBINHEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void WriteValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEVALUE_OFFSET))(this, a1);
		}

		::System::Void WriteElementString(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_WRITEELEMENTSTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_DISPOSE_1_OFFSET))(this, a1);
		}

		static ::System::Xml::XmlWriter* Create(::System::IO::Stream* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Xml::XmlWriter*(*)(::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Xml::XmlWriter* Create_1(::System::IO::TextWriter* a1, ::System::Xml::XmlWriterSettings* a2)
		{
			return ((::System::Xml::XmlWriter*(*)(::System::IO::TextWriter*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWRITER_CREATE_1_OFFSET))(a1, a2);
		}
	};
}
