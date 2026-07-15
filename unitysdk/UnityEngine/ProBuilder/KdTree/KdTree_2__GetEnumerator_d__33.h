#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTreeNode_2; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTree_2; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTree_2___c__DisplayClass33_0; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int KdTree_2__GetEnumerator_d__33_TypeDefinitionIndex = 36568;

	template <typename TKey, typename TValue>
	class KdTree_2__GetEnumerator_d__33 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* __2__current; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* __4__this; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTree_2___c__DisplayClass33_0<TKey, TValue>* __8__1; // 0x0
		::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* _addLeft_5__2; // 0x0
		::System::Action_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* _addRight_5__3; // 0x0
	};
}
