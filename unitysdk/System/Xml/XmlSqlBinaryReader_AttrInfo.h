#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlSqlBinaryReader_QName.h"

namespace System { class String; }
namespace System::Xml { class SecureStringHasher; }

#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_ADJUSTPOSITION_OFFSET UNITYSDK_OFFSET(0x9307E0)
#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_GETLOCALNAMEANDNAMESPACEURIANDHASH_OFFSET UNITYSDK_OFFSET(0x930730)
#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_GETLOCALNAMEANDNAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x930720)
#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_MATCHHASHNS_OFFSET UNITYSDK_OFFSET(0x930760)
#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_MATCHNS_OFFSET UNITYSDK_OFFSET(0x887210)
#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x9306F0)
#define SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_SET_OFFSET UNITYSDK_OFFSET(0x9306C0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_AttrInfo_TypeDefinitionIndex = 1675;

	struct alignas(8) XmlSqlBinaryReader_AttrInfo
	{
		::System::Xml::XmlSqlBinaryReader_QName name; // 0x10
		::System::String* val; // 0x28
		::System::Int32 contentPos; // 0x30
		::System::Int32 hashCode; // 0x34
		::System::Int32 prevHash; // 0x38

		::System::Void Set(::System::Xml::XmlSqlBinaryReader_QName n, ::System::String* v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlSqlBinaryReader_QName, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_SET_OFFSET))(this, n, v);
		}

		::System::Void Set_1(::System::Xml::XmlSqlBinaryReader_QName n, ::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlSqlBinaryReader_QName, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_SET_1_OFFSET))(this, n, pos);
		}

		::System::Void GetLocalnameAndNamespaceUri(::System::String*& localname, ::System::String*& namespaceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_GETLOCALNAMEANDNAMESPACEURI_OFFSET))(this, localname, namespaceUri);
		}

		::System::Int32 GetLocalnameAndNamespaceUriAndHash(::System::Xml::SecureStringHasher* hasher, ::System::String*& localname, ::System::String*& namespaceUri)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::SecureStringHasher*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_GETLOCALNAMEANDNAMESPACEURIANDHASH_OFFSET))(this, hasher, localname, namespaceUri);
		}

		::System::Boolean MatchNS(::System::String* localname, ::System::String* namespaceUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_MATCHNS_OFFSET))(this, localname, namespaceUri);
		}

		::System::Boolean MatchHashNS(::System::Int32 hash, ::System::String* localname, ::System::String* namespaceUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_MATCHHASHNS_OFFSET))(this, hash, localname, namespaceUri);
		}

		::System::Void AdjustPosition(::System::Int32 adj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_ATTRINFO_ADJUSTPOSITION_OFFSET))(this, adj);
		}
	};
}
