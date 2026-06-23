#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class InteriorNode; }
namespace System::Xml::Schema { class Positions; }
namespace System::Xml::Schema { class SymbolsDictionary; }

#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET UNITYSDK_OFFSET(0x1D2D1850)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D1860)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SyntaxTreeNode_TypeDefinitionIndex = 1963;

	class SyntaxTreeNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRangeNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET))(this);
		}
	};
}
