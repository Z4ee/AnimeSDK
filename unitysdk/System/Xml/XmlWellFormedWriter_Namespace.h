#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_NamespaceKind.h"

namespace System { class String; }
namespace System::Xml { class XmlRawWriter; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACE_SET_OFFSET UNITYSDK_OFFSET(0x21005D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACE_WRITEDECL_OFFSET UNITYSDK_OFFSET(0x21005F0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_Namespace_TypeDefinitionIndex = 1865;

	struct alignas(8) XmlWellFormedWriter_Namespace
	{
		::System::String* prefix; // 0x10
		::System::String* namespaceUri; // 0x18
		::System::Xml::XmlWellFormedWriter_NamespaceKind kind; // 0x20
		::System::Int32 prevNsIndex; // 0x24

		::System::Void Set(::System::String* prefix, ::System::String* namespaceUri, ::System::Xml::XmlWellFormedWriter_NamespaceKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Xml::XmlWellFormedWriter_NamespaceKind))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACE_SET_OFFSET))(this, prefix, namespaceUri, kind);
		}

		::System::Void WriteDecl(::System::Xml::XmlWriter* writer, ::System::Xml::XmlRawWriter* rawWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*, ::System::Xml::XmlRawWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_NAMESPACE_WRITEDECL_OFFSET))(this, writer, rawWriter);
		}
	};
}
