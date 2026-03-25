#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_NAMESPACEDECLARATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18555480)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int NamespaceResolver_NamespaceDeclaration_TypeDefinitionIndex = 4912;

	class NamespaceResolver_NamespaceDeclaration : public ::System::Object
	{
	public:
		::System::String* prefix; // 0x10
		::System::Xml::Linq::XNamespace* ns; // 0x18
		::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* prev; // 0x20
		::System::Int32 scope; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_NAMESPACEDECLARATION__CTOR_OFFSET))(this);
		}
	};
}
