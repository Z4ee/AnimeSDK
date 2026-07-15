#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTreeNode_2; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int KdTreeNode_2_TypeDefinitionIndex = 36569;

	template <typename TKey, typename TValue>
	class KdTreeNode_2 : public ::System::Object
	{
	public:
		::Il2CppArray<TKey>* Point; // 0x0
		TValue Value; // 0x0
		::System::Collections::Generic::List_1<TValue>* Duplicates; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* LeftChild; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* RightChild; // 0x0
	};
}
