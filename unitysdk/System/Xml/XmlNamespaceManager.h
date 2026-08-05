#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamespaceManager_NamespaceDeclaration.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class XmlNameTable; }

#define SYSTEM_XML_XMLNAMESPACEMANAGER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F10EA70)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F10F170)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1F10F3B0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F10E900)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACEDECL_OFFSET UNITYSDK_OFFSET(0x1F10EEE0)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1F10F740)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1F10F790)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x1F10E950)
#define SYSTEM_XML_XMLNAMESPACEMANAGER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x1F10E940)
#define SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F10E780)
#define SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F10B540)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamespaceManager_TypeDefinitionIndex = 1834;

	class XmlNamespaceManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* hashTable; // 0x10
		::Il2CppArray<::System::Xml::XmlNamespaceManager_NamespaceDeclaration>* nsdecls; // 0x18
		::System::String* xml; // 0x20
		::System::Xml::XmlNameTable* nameTable; // 0x28
		::System::String* xmlNs; // 0x30
		::System::Int32 lastDecl; // 0x38
		::System::Boolean useHashtable; // 0x3C
		::System::Int32 scopeId; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER__CTOR_1_OFFSET))(this, nameTable);
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

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
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
