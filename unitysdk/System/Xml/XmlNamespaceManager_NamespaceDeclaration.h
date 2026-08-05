#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define SYSTEM_XML_XMLNAMESPACEMANAGER_NAMESPACEDECLARATION_SET_OFFSET UNITYSDK_OFFSET(0xA91720)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamespaceManager_NamespaceDeclaration_TypeDefinitionIndex = 1835;

	struct alignas(8) XmlNamespaceManager_NamespaceDeclaration
	{
		::System::String* prefix; // 0x10
		::System::String* uri; // 0x18
		::System::Int32 scopeId; // 0x20
		::System::Int32 previousNsIndex; // 0x24

		::System::Void Set(::System::String* prefix, ::System::String* uri, ::System::Int32 scopeId, ::System::Int32 previousNsIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMESPACEMANAGER_NAMESPACEDECLARATION_SET_OFFSET))(this, prefix, uri, scopeId, previousNsIndex);
		}
	};
}
