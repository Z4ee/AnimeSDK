#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace ToolBuddy::ThirdParty::VectorGraphics { class XmlReaderIterator_Node; }

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGStyleResolver_NodeData_TypeDefinitionIndex = 31137;

	struct alignas(8) SVGStyleResolver_NodeData
	{
		::ToolBuddy::ThirdParty::VectorGraphics::XmlReaderIterator_Node* node; // 0x10
		::System::String* name; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* classes; // 0x20
		::System::String* id; // 0x28
	};
}
