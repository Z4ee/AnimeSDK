#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/KdTree/AddDuplicateBehavior.h"
#include "unitysdk/UnityEngine/ProBuilder/KdTree/HyperRect_1.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class KdTreeNode_2; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T1, typename T2> class NearestNeighbourList_2; }
namespace UnityEngine::ProBuilder::KdTree { template <typename T> class ITypeMath_1; }

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int KdTree_2_TypeDefinitionIndex = 36566;

	template <typename TKey, typename TValue>
	class KdTree_2 : public ::System::Object
	{
	public:
		::System::Int32 dimensions; // 0x0
		::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath; // 0x0
		::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* root; // 0x0
		::UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _AddDuplicateBehavior_k__BackingField; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
	};
}
