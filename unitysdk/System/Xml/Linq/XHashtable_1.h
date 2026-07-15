#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Linq { template <typename T> class XHashtable_1_ExtractKeyDelegate; }
namespace System::Xml::Linq { template <typename T> class XHashtable_1_XHashtableState; }

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XHashtable_1_TypeDefinitionIndex = 3869;

	template <typename TValue>
	class XHashtable_1 : public ::System::Object
	{
	public:
		::System::Xml::Linq::XHashtable_1_XHashtableState<TValue>* state; // 0x0
	};
}
