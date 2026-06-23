#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Xml { class SecureStringHasher; }

#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_CHECKPREFIXNS_OFFSET UNITYSDK_OFFSET(0x935980)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_CLEAR_OFFSET UNITYSDK_OFFSET(0x935870)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x935B80)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x935990)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_GETNSHASHCODE_OFFSET UNITYSDK_OFFSET(0x935AB0)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_MATCHNS_OFFSET UNITYSDK_OFFSET(0x935890)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_MATCHPREFIX_OFFSET UNITYSDK_OFFSET(0x935910)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD04B10)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_SET_OFFSET UNITYSDK_OFFSET(0x4973D0)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x935B90)
#define SYSTEM_XML_XMLSQLBINARYREADER_QNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x4973D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_QName_TypeDefinitionIndex = 1672;

	struct alignas(8) XmlSqlBinaryReader_QName
	{
		::System::String* prefix; // 0x10
		::System::String* localname; // 0x18
		::System::String* namespaceUri; // 0x20

		::System::Void _ctor(::System::String* prefix, ::System::String* lname, ::System::String* nsUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME__CTOR_OFFSET))(this, prefix, lname, nsUri);
		}

		::System::Void Set(::System::String* prefix, ::System::String* lname, ::System::String* nsUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_SET_OFFSET))(this, prefix, lname, nsUri);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_CLEAR_OFFSET))(this);
		}

		::System::Boolean MatchNs(::System::String* lname, ::System::String* nsUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_MATCHNS_OFFSET))(this, lname, nsUri);
		}

		::System::Boolean MatchPrefix(::System::String* prefix, ::System::String* lname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_MATCHPREFIX_OFFSET))(this, prefix, lname);
		}

		::System::Void CheckPrefixNS(::System::String* prefix, ::System::String* namespaceUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_CHECKPREFIXNS_OFFSET))(this, prefix, namespaceUri);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetNSHashCode(::System::Xml::SecureStringHasher* hasher)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::SecureStringHasher*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_GETNSHASHCODE_OFFSET))(this, hasher);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Xml::XmlSqlBinaryReader_QName a, ::System::Xml::XmlSqlBinaryReader_QName b)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlSqlBinaryReader_QName, ::System::Xml::XmlSqlBinaryReader_QName))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_QNAME_OP_EQUALITY_OFFSET))(a, b);
		}
	};
}
