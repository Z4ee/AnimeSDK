#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Timeline/IntervalTreeNode.h"
#include "unitysdk/UnityEngine/Timeline/IntervalTree_1_Entry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IntervalTree_1_TypeDefinitionIndex = 36664;

	template <typename T>
	class IntervalTree_1 : public ::System::Object
	{
	public:
		// static const ::System::Int32 kMinNodeSize = 0xA; // 0x0
		// static const ::System::Int32 kInvalidNode = 0xFFFFFFFF; // 0x0
		// static const ::System::Int64 kCenterUnknown = 0x7FFFFFFFFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTree_1_Entry<T>>* m_Entries; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::IntervalTreeNode>* m_Nodes; // 0x0
		::System::Boolean _dirty_k__BackingField; // 0x0
	};
}
