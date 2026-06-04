#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNamespaceManager.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_ADDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEEC8E0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AEEC900)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GET_DEFAULTNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEEC8B0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEEC910)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEEC920)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x1AEEC8D0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x1AEEC8C0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_REMOVENAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEEC8F0)
#define SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEEC8A0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_NoNamespaceManager_TypeDefinitionIndex = 1845;

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

		::System::Void AddNamespace(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_ADDNAMESPACE_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveNamespace(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_REMOVENAMESPACE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXTREADERIMPL_NONAMESPACEMANAGER_LOOKUPPREFIX_OFFSET))(this, a1);
		}
	};
}
