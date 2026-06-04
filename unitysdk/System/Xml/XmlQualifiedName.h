#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlQualifiedName_HashCodeOfStringDelegate; }

#define SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AED1F00)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1AED1CD0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x1AED2200)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AED1BA0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AECAA40)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AED1B80)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AED1B90)
#define SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET UNITYSDK_OFFSET(0x1AED2290)
#define SYSTEM_XML_XMLQUALIFIEDNAME_ISRANDOMIZEDHASHINGDISABLED_OFFSET UNITYSDK_OFFSET(0x1AED21F0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AED2170)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AED2090)
#define SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET UNITYSDK_OFFSET(0x1AED22A0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AED1EC0)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AED2460)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AED1B40)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AED1AF0)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1AED1AA0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlQualifiedName_TypeDefinitionIndex = 1956;

	class XmlQualifiedName : public ::System::Object
	{
	public:
		static ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate** StaticGet_hashCodeDelegate()
		{
			return (::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate**)Il2CppClass::FromTypeDefinitionIndex(XmlQualifiedName_TypeDefinitionIndex)->GetStaticField(0x14F70);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_Empty()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlQualifiedName_TypeDefinitionIndex)->GetStaticField(0x14F78);
		}
		::System::String* name; // 0x10
		::System::String* ns; // 0x18
		::System::Int32 hash; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_2_OFFSET))(this, a1, a2);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::System::Xml::XmlQualifiedName* a1, ::System::Xml::XmlQualifiedName* a2)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Xml::XmlQualifiedName* a1, ::System::Xml::XmlQualifiedName* a2)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return ((::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET))();
		}

		static ::System::Boolean IsRandomizedHashingDisabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_ISRANDOMIZEDHASHINGDISABLED_OFFSET))();
		}

		static ::System::Int32 GetHashCodeOfString(::System::String* a1, ::System::Int32 a2, ::System::Int64 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET))(a1, a2, a3);
		}

		::System::Void Init(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET))(this, a1, a2);
		}

		static ::System::Xml::XmlQualifiedName* Parse(::System::String* a1, ::System::Xml::IXmlNamespaceResolver* a2, ::System::String*& a3)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET))(a1, a2, a3);
		}
	};
}
