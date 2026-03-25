#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Xml::Linq { class NamespaceResolver_NamespaceDeclaration; }
namespace System::Xml::Linq { class XNamespace; }

#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x20FDF70)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADD_OFFSET UNITYSDK_OFFSET(0x20FDEE0)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x20FE010)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_POPSCOPE_OFFSET UNITYSDK_OFFSET(0x20FDE70)
#define SYSTEM_XML_LINQ_NAMESPACERESOLVER_PUSHSCOPE_OFFSET UNITYSDK_OFFSET(0x20FDE60)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int NamespaceResolver_TypeDefinitionIndex = 4911;

	struct alignas(8) NamespaceResolver
	{
		::System::Int32 scope; // 0x10
		::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* declaration; // 0x18
		::System::Xml::Linq::NamespaceResolver_NamespaceDeclaration* rover; // 0x20

		::System::Void PushScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_PUSHSCOPE_OFFSET))(this);
		}

		::System::Void PopScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_POPSCOPE_OFFSET))(this);
		}

		::System::Void Add(::System::String* prefix, ::System::Xml::Linq::XNamespace* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADD_OFFSET))(this, prefix, ns);
		}

		::System::Void AddFirst(::System::String* prefix, ::System::Xml::Linq::XNamespace* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::Linq::XNamespace*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_ADDFIRST_OFFSET))(this, prefix, ns);
		}

		::System::String* GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns, ::System::Boolean allowDefaultNamespace)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::Linq::XNamespace*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_NAMESPACERESOLVER_GETPREFIXOFNAMESPACE_OFFSET))(this, ns, allowDefaultNamespace);
		}
	};
}
