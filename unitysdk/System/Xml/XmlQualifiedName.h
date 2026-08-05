#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName_HashCodeOfStringDelegate; }

#define SYSTEM_XML_XMLQUALIFIEDNAME_ATOMIZE_OFFSET UNITYSDK_OFFSET(0x1F259E30)
#define SYSTEM_XML_XMLQUALIFIEDNAME_CLONE_OFFSET UNITYSDK_OFFSET(0x1F25A040)
#define SYSTEM_XML_XMLQUALIFIEDNAME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F250DA0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1F259930)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET UNITYSDK_OFFSET(0x1F259C70)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F259830)
#define SYSTEM_XML_XMLQUALIFIEDNAME_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F259AF0)
#define SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET UNITYSDK_OFFSET(0x1F259D00)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1F254230)
#define SYSTEM_XML_XMLQUALIFIEDNAME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1F259B30)
#define SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET UNITYSDK_OFFSET(0x1F259E70)
#define SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1F259C10)
#define SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F250B30)
#define SYSTEM_XML_XMLQUALIFIEDNAME_VERIFY_OFFSET UNITYSDK_OFFSET(0x1F259D10)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F25A140)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2597F0)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F2597A0)
#define SYSTEM_XML_XMLQUALIFIEDNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F259750)

namespace System::Xml
{
	inline static constexpr unsigned int XmlQualifiedName_TypeDefinitionIndex = 1837;

	class XmlQualifiedName : public ::System::Object
	{
	public:
		static ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate** StaticGet_hashCodeDelegate()
		{
			return (::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate**)Il2CppClass::FromTypeDefinitionIndex(XmlQualifiedName_TypeDefinitionIndex)->GetStaticField(0x1860);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_Empty()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(XmlQualifiedName_TypeDefinitionIndex)->GetStaticField(0x1868);
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

		static ::System::String* ToString_1(::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_TOSTRING_1_OFFSET))(name, ns);
		}

		static ::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate* GetHashCodeDelegate()
		{
			return ((::System::Xml::XmlQualifiedName_HashCodeOfStringDelegate*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEDELEGATE_OFFSET))();
		}

		static ::System::Int32 GetHashCodeOfString(::System::String* s, ::System::Int32 length, ::System::Int64 additionalEntropy)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_GETHASHCODEOFSTRING_OFFSET))(s, length, additionalEntropy);
		}

		::System::Void Init(::System::String* name, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_INIT_OFFSET))(this, name, ns);
		}

		::System::Void Verify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_VERIFY_OFFSET))(this);
		}

		::System::Void Atomize(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_ATOMIZE_OFFSET))(this, nameTable);
		}

		static ::System::Xml::XmlQualifiedName* Parse(::System::String* s, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::System::String*& prefix)
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_PARSE_OFFSET))(s, nsmgr, prefix);
		}

		::System::Xml::XmlQualifiedName* Clone()
		{
			return ((::System::Xml::XmlQualifiedName*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLQUALIFIEDNAME_CLONE_OFFSET))(this);
		}
	};
}
