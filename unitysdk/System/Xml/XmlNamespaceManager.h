#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamespaceManager_NamespaceDeclaration.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLNAMESPACEMANAGER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x186220F0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18622980)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18621F80)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x18621F70)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACEDECL_OFFSET UNITYSDK_OFFSET(0x18622560)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x18622BC0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x18622C10)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x18621FD0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x18621FC0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_REMOVENAMESPACE_OFFSET UNITYSDK_OFFSET(0x186227F0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1861D570)
#define SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18621F40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamespaceManager_TypeDefinitionIndex = 1952;

	class XmlNamespaceManager : public ::System::Object
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::String* xmlNs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* hashTable; // 0x20
		::System::String* xml; // 0x28
		::Il2CppArray<::System::Xml::XmlNamespaceManager_NamespaceDeclaration>* nsdecls; // 0x30
		::System::Int32 scopeId; // 0x38
		::System::Int32 lastDecl; // 0x3C
		::System::Boolean useHashtable; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_1_OFFSET))(this, nameTable);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* get_DefaultNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET))(this);
		}

		::System::Void PushScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_PUSHSCOPE_OFFSET))(this);
		}

		::System::Boolean PopScope()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_POPSCOPE_OFFSET))(this);
		}

		::System::Void AddNamespace(::System::String* prefix, ::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_ADDNAMESPACE_OFFSET))(this, prefix, uri);
		}

		::System::Void RemoveNamespace(::System::String* prefix, ::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_REMOVENAMESPACE_OFFSET))(this, prefix, uri);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Int32 LookupNamespaceDecl(::System::String* prefix)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACEDECL_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* uri)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(this, uri);
		}
	};
}
