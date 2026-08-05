#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_SymbolTables.h"

#define SYSTEM_XML_XMLSQLBINARYREADER_NESTEDBINXML__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA366D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_NestedBinXml_TypeDefinitionIndex = 1677;

	class XmlSqlBinaryReader_NestedBinXml : public ::System::Object
	{
	public:
		::System::Xml::XmlSqlBinaryReader_NestedBinXml* next; // 0x10
		::System::Xml::XmlSqlBinaryReader_SymbolTables symbolTables; // 0x18
		::System::Int32 docState; // 0x38

		::System::Void _ctor(::System::Xml::XmlSqlBinaryReader_SymbolTables symbolTables, ::System::Int32 docState, ::System::Xml::XmlSqlBinaryReader_NestedBinXml* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlSqlBinaryReader_SymbolTables, ::System::Int32, ::System::Xml::XmlSqlBinaryReader_NestedBinXml*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_NESTEDBINXML__CTOR_OFFSET))(this, symbolTables, docState, next);
		}
	};
}
