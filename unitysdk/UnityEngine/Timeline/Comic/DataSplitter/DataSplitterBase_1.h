#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/Comic/DataSplitter/DataSplitterBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace UnityEngine::Timeline::Comic::DataSplitter
{
	inline static constexpr unsigned int DataSplitterBase_1_TypeDefinitionIndex = 33093;

	template <typename T>
	class DataSplitterBase_1 : public ::UnityEngine::Timeline::Comic::DataSplitter::DataSplitterBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, T>* guidToData; // 0x0
	};
}
