#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamespaceManager.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A789DC0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A789DD0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1A789DE0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A789D90)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A789DF0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1A789E00)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x1A789DB0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x1A789DA0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A789D80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_NoNamespaceManager_TypeDefinitionIndex = 1725;

	class XmlTextReaderImpl_NoNamespaceManager : public ::System::Xml::XmlNamespaceManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER__CTOR_OFFSET))(this);
		}

		::System::String* get_DefaultNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET))(this);
		}

		::System::Void PushScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_PUSHSCOPE_OFFSET))(this);
		}

		::System::Boolean PopScope()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_POPSCOPE_OFFSET))(this);
		}

		::System::Void AddNamespace(::System::String* prefix, ::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_ADDNAMESPACE_OFFSET))(this, prefix, uri);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* uri)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(this, uri);
		}
	};
}
