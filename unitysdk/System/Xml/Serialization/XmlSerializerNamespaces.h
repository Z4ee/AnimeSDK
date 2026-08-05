#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D575D10)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADD_OFFSET UNITYSDK_OFFSET(0x1D573790)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D576580)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x1D575F90)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x1D575DF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1D575EA0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D573780)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerNamespaces_TypeDefinitionIndex = 1852;

	class XmlSerializerNamespaces : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* namespaces; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADD_OFFSET))(this, prefix, ns);
		}

		::System::Void AddInternal(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADDINTERNAL_OFFSET))(this, prefix, ns);
		}

		::Il2CppArray<::System::Xml::XmlQualifiedName*>* ToArray()
		{
			return ((::Il2CppArray<::System::Xml::XmlQualifiedName*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_TOARRAY_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_NamespaceList()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACELIST_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_Namespaces()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACES_OFFSET))(this);
		}
	};
}
