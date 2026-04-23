#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Xml::Linq { class XName; }
namespace System::Xml::Linq { template <typename T> class XHashtable_1; }

#define SYSTEM_XML_LINQ_XNAMESPACE_ENSURENAMESPACE_OFFSET UNITYSDK_OFFSET(0x19F99CB0)
#define SYSTEM_XML_LINQ_XNAMESPACE_EQUALS_OFFSET UNITYSDK_OFFSET(0x19F99E40)
#define SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTLOCALNAME_OFFSET UNITYSDK_OFFSET(0x19F99E70)
#define SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x19F99E90)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19F99E50)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_1_OFFSET UNITYSDK_OFFSET(0x19F99620)
#define SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET UNITYSDK_OFFSET(0x19F948A0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_1_OFFSET UNITYSDK_OFFSET(0x19F992A0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_NAMESPACENAME_OFFSET UNITYSDK_OFFSET(0x19F99C90)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_NONE_OFFSET UNITYSDK_OFFSET(0x19F99890)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET UNITYSDK_OFFSET(0x19F8FA10)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_XMLNS_OFFSET UNITYSDK_OFFSET(0x19F99DB0)
#define SYSTEM_XML_LINQ_XNAMESPACE_GET_XML_OFFSET UNITYSDK_OFFSET(0x19F99D70)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19F90270)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19F99DF0)
#define SYSTEM_XML_LINQ_XNAMESPACE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19F99E60)
#define SYSTEM_XML_LINQ_XNAMESPACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19F99CA0)
#define SYSTEM_XML_LINQ_XNAMESPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F99B80)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XNamespace_TypeDefinitionIndex = 4897;

	class XNamespace : public ::System::Object
	{
	public:
		static ::System::WeakReference** StaticGet_refXml()
		{
			return (::System::WeakReference**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x1B0);
		}
		static ::System::WeakReference** StaticGet_refNone()
		{
			return (::System::WeakReference**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x1B8);
		}
		static ::System::WeakReference** StaticGet_refXmlns()
		{
			return (::System::WeakReference**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x1C0);
		}
		static ::System::Xml::Linq::XHashtable_1<::System::WeakReference*>** StaticGet_namespaces()
		{
			return (::System::Xml::Linq::XHashtable_1<::System::WeakReference*>**)Il2CppClass::FromTypeDefinitionIndex(XNamespace_TypeDefinitionIndex)->GetStaticField(0x1C8);
		}
		::System::String* namespaceName; // 0x10
		::System::Xml::Linq::XHashtable_1<::System::Xml::Linq::XName*>* names; // 0x18
		::System::Int32 hashCode; // 0x20

		::System::Void _ctor(::System::String* namespaceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE__CTOR_OFFSET))(this, namespaceName);
		}

		::System::String* get_NamespaceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_NAMESPACENAME_OFFSET))(this);
		}

		::System::Xml::Linq::XName* GetName(::System::String* localName)
		{
			return ((::System::Xml::Linq::XName*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_OFFSET))(this, localName);
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

		static ::System::Xml::Linq::XNamespace* Get(::System::String* namespaceName)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_OFFSET))(namespaceName);
		}

		static ::System::Xml::Linq::XNamespace* op_Implicit(::System::String* namespaceName)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_IMPLICIT_OFFSET))(namespaceName);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Xml::Linq::XNamespace* left, ::System::Xml::Linq::XNamespace* right)
		{
			return ((::System::Boolean(*)(::System::Xml::Linq::XNamespace*, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::Xml::Linq::XNamespace* left, ::System::Xml::Linq::XNamespace* right)
		{
			return ((::System::Boolean(*)(::System::Xml::Linq::XNamespace*, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Xml::Linq::XName* GetName_1(::System::String* localName, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Xml::Linq::XName*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GETNAME_1_OFFSET))(this, localName, index, count);
		}

		static ::System::Xml::Linq::XNamespace* Get_1(::System::String* namespaceName, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_GET_1_OFFSET))(namespaceName, index, count);
		}

		static ::System::String* ExtractLocalName(::System::Xml::Linq::XName* n)
		{
			return ((::System::String*(*)(::System::Xml::Linq::XName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTLOCALNAME_OFFSET))(n);
		}

		static ::System::String* ExtractNamespace(::System::WeakReference* r)
		{
			return ((::System::String*(*)(::System::WeakReference*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_EXTRACTNAMESPACE_OFFSET))(r);
		}

		static ::System::Xml::Linq::XNamespace* EnsureNamespace(::System::WeakReference*& refNmsp, ::System::String* namespaceName)
		{
			return ((::System::Xml::Linq::XNamespace*(*)(::System::WeakReference*&, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XNAMESPACE_ENSURENAMESPACE_OFFSET))(refNmsp, namespaceName);
		}
	};
}
