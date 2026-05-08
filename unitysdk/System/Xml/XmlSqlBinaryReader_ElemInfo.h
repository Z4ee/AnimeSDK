#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlSpace.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_QName.h"

namespace System { class String; }
namespace System::Xml { class XmlSqlBinaryReader_NamespaceDecl; }

#define SYSTEM_XML_XMLSQLBINARYREADER_ELEMINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x94C820)
#define SYSTEM_XML_XMLSQLBINARYREADER_ELEMINFO_SET_OFFSET UNITYSDK_OFFSET(0x94C7F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_ElemInfo_TypeDefinitionIndex = 1674;

	struct alignas(8) XmlSqlBinaryReader_ElemInfo
	{
		::System::Xml::XmlSqlBinaryReader_QName name; // 0x10
		::System::String* xmlLang; // 0x28
		::System::Xml::XmlSpace xmlSpace; // 0x30
		::System::Boolean xmlspacePreserve; // 0x34
		::System::Xml::XmlSqlBinaryReader_NamespaceDecl* nsdecls; // 0x38

		::System::Void Set(::System::Xml::XmlSqlBinaryReader_QName name, ::System::Boolean xmlspacePreserve)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlSqlBinaryReader_QName, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ELEMINFO_SET_OFFSET))(this, name, xmlspacePreserve);
		}

		::System::Xml::XmlSqlBinaryReader_NamespaceDecl* Clear()
		{
			return ((::System::Xml::XmlSqlBinaryReader_NamespaceDecl*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ELEMINFO_CLEAR_OFFSET))(this);
		}
	};
}
