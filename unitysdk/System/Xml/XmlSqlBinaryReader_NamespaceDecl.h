#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_XMLSQLBINARYREADER_NAMESPACEDECL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D66ACF0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_NamespaceDecl_TypeDefinitionIndex = 1675;

	class XmlSqlBinaryReader_NamespaceDecl : public ::System::Object
	{
	public:
		::System::String* uri; // 0x10
		::System::String* prefix; // 0x18
		::System::Xml::XmlSqlBinaryReader_NamespaceDecl* scopeLink; // 0x20
		::System::Xml::XmlSqlBinaryReader_NamespaceDecl* prevLink; // 0x28
		::System::Int32 scope; // 0x30
		::System::Boolean implied; // 0x34

		::System::Void _ctor(::System::String* prefix, ::System::String* nsuri, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* nextInScope, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl* prevDecl, ::System::Int32 scope, ::System::Boolean implied)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*, ::System::Xml::XmlSqlBinaryReader_NamespaceDecl*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_NAMESPACEDECL__CTOR_OFFSET))(this, prefix, nsuri, nextInScope, prevDecl, scope, implied);
		}
	};
}
