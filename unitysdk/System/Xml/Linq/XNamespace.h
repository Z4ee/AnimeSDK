#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Xml::Linq { class XName; }
namespace System::Xml::Linq { template <typename T> class XHashtable_1; }

#define SYSTEM_XML_LINQ_XNAMESPACE_ENSURENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E7C63F0)
#define SYSTEM_XML_LINQ_XNAMESPACE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C65F0)
#define SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTLOCALNAME_OFFSET UNITYSDK_OFFSET(0x1E7C6620)
#define SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E7C6640)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C6600)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x1E7C5E80)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET UNITYSDK_OFFSET(0x1E7BF3E0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_1_OFFSET UNITYSDK_OFFSET(0x1E7C5A80)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_NAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x1E7C63D0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1E7C5FC0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET UNITYSDK_OFFSET(0x1E7B9360)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_XMLNS_OFFSET UNITYSDK_OFFSET(0x1E7C6560)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_XML_OFFSET UNITYSDK_OFFSET(0x1E7C6520)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E7B9BE0)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E7C65A0)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E7C6610)
#define SYSTEM_XML_LINQ_XNAMESPACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C63E0)
#define SYSTEM_XML_LINQ_XNAMESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C62A0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XNamespace_TypeDefinitionIndex = 3876;

	class XNamespace : public ::System::Object
	{
	public:
		static ::System::Xml::Linq::XHashtable_1<::System::WeakReference*>** StaticGet_namespaces()
		{
			return (::System::Xml::Linq::XHashtable_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x140);
		}
		static ::System::WeakReference** StaticGet_refXml()
		{
			return (::System::WeakReference**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x148);
		}
		static ::System::WeakReference** StaticGet_refXmlns()
		{
			return (::System::WeakReference**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x150);
		}
		static ::System::WeakReference** StaticGet_refNone()
		{
			return (::System::WeakReference**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x158);
		}
		::System::String* namespaceName; // 0x10
		::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>* names; // 0x18
		::System::Int32 hashCode; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_NamespaceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_NAMESPACENAME_OFFSET))(this);
		}

		::System::Xml::Linq::XName* GetName(::System::String* a1)
		{
			return ((::System::Xml::Linq::XName*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_TOSTRING_OFFSET))(this);
		}

		static ::System::Xml::Linq::XNamespace* get_None()
		{
			return ((::System::Xml::Linq::XNamespace*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_NONE_OFFSET))();
		}

		static ::System::Xml::Linq::XNamespace* get_Xml()
		{
			return ((::System::Xml::Linq::XNamespace*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_XML_OFFSET))();
		}

		static ::System::Xml::Linq::XNamespace* get_Xmlns()
		{
			return ((::System::Xml::Linq::XNamespace*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_XMLNS_OFFSET))();
		}

		static ::System::Xml::Linq::XNamespace* Get(::System::String* a1)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET))(a1);
		}

		static ::System::Xml::Linq::XNamespace* op_Implicit(::System::String* a1)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Xml::Linq::XNamespace* a1, ::System::Xml::Linq::XNamespace* a2)
		{
			return ((::System::Boolean(*)(::System::Xml::Linq::XNamespace*, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::Xml::Linq::XNamespace* a1, ::System::Xml::Linq::XNamespace* a2)
		{
			return ((::System::Boolean(*)(::System::Xml::Linq::XNamespace*, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Xml::Linq::XName* GetName_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Xml::Linq::XName*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Xml::Linq::XNamespace* Get_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_1_OFFSET))(a1, a2, a3);
		}

		static ::System::String* ExtractLocalName(::System::Xml::Linq::XName* a1)
		{
			return ((::System::String*(*)(::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTLOCALNAME_OFFSET))(a1);
		}

		static ::System::String* ExtractNamespace(::System::WeakReference* a1)
		{
			return ((::System::String*(*)(::System::WeakReference*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTNAMESPACE_OFFSET))(a1);
		}

		static ::System::Xml::Linq::XNamespace* EnsureNamespace(::System::WeakReference*& a1, ::System::String* a2)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::WeakReference*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_ENSURENAMESPACE_OFFSET))(a1, a2);
		}
	};
}
