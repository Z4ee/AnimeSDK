#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_QName.h"

namespace System { class String; }

#define SYSTEM_XML_XMLSQLBINARYREADER_SYMBOLTABLES_INIT_OFFSET UNITYSDK_OFFSET(0xA97210)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_SymbolTables_TypeDefinitionIndex = 1676;

	struct alignas(8) XmlSqlBinaryReader_SymbolTables
	{
		::Il2CppArray<::System::String*>* symtable; // 0x10
		::System::Int32 symCount; // 0x18
		::Il2CppArray<::System::Xml::XmlSqlBinaryReader_QName>* qnametable; // 0x20
		::System::Int32 qnameCount; // 0x28

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SYMBOLTABLES_INIT_OFFSET))(this);
		}
	};
}
