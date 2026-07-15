#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Linq/XHashtable_1_XHashtableState_Entry.h"

namespace System { class String; }
namespace System::Xml::Linq { template <typename T> class XHashtable_1_ExtractKeyDelegate; }
namespace System::Xml::Linq { template <typename T> class XHashtable_1_XHashtableState; }

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XHashtable_1_XHashtableState_TypeDefinitionIndex = 3871;

	template <typename TValue>
	class XHashtable_1_XHashtableState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::Il2CppArray<::System::Xml::Linq::XHashtable_1_XHashtableState_Entry<TValue>>* entries; // 0x0
		::System::Int32 numEntries; // 0x0
		::System::Xml::Linq::XHashtable_1_ExtractKeyDelegate<TValue>* extractKey; // 0x0
	};
}
