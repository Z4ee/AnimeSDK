#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlQualifiedName_HashCodeOfStringDelegate; }

#define SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A05FE20)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1A05F630)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x1A060130)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A05F510)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A0587B0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A05F4F0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A05F500)
#define SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET UNITYSDK_OFFSET(0x1A0601C0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_ISRANDOMIZEDHASHINGDISABLED_OFFSET UNITYSDK_OFFSET(0x1A060100)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A060080)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A05FFA0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET UNITYSDK_OFFSET(0x1A0601D0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A05FDE0)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A060390)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A05F4B0)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A05F460)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05F410)

namespace System::Xml
{
	inline static constexpr unsigned int XmlQualifiedName_TypeDefinitionIndex = 1956;

	class XmlQualifiedName : public ::System::Object
	{
	public:
		static ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate** StaticGet_hashCodeDelegate()
		{
			return (::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate**)Il2CppClass::FromTypeDefinitionIndex(XmlQualifiedName_TypeDefinitionIndex)->GetStaticField(0xC8F0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_Empty()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlQualifiedName_TypeDefinitionIndex)->GetStaticField(0xC8F8);
		}
		::System::String* name; // 0x10
		::System::String* ns; // 0x18
		::System::Int32 hash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_2_OFFSET))(this, name, ns);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CCTOR_OFFSET))();
		}

		::System::String* get_Namespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAMESPACE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAME_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GET_ISEMPTY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::System::Xml::XmlQualifiedName* a, ::System::Xml::XmlQualifiedName* b)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return ((::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET))();
		}

		static ::System::Boolean IsRandomizedHashingDisabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_ISRANDOMIZEDHASHINGDISABLED_OFFSET))();
		}

		static ::System::Int32 GetHashCodeOfString(::System::String* s, ::System::Int32 length, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET))(s, length, additionalEntropy);
		}

		::System::Void Init(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET))(this, name, ns);
		}

		static ::System::Xml::XmlQualifiedName* Parse(::System::String* s, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::String*& prefix)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET))(s, nsmgr, prefix);
		}
	};
}
