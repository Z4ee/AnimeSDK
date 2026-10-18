#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EF0C550)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADD_OFFSET UNITYSDK_OFFSET(0x1EEF9F40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EF0BFF0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x1EF0C640)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x1EEFFD40)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1EEFD860)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9F30)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializerNamespaces_TypeDefinitionIndex = 1980;

	class XmlSerializerNamespaces : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* namespaces; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES__CTOR_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void AddInternal(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZERNAMESPACES_ADDINTERNAL_OFFSET))(this, a1, a2);
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
