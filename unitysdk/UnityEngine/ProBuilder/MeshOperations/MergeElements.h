#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_COLLAPSECOINCIDENTVERTICES_OFFSET UNITYSDK_OFFSET(0xC0DD280)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGEPAIRS_OFFSET UNITYSDK_OFFSET(0xC0DC8F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGE_OFFSET UNITYSDK_OFFSET(0xC0DDA30)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MergeElements_TypeDefinitionIndex = 41698;

	class MergeElements : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* MergePairs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>>* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGEPAIRS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Face* Merge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGE_OFFSET))(a1, a2);
		}

		static ::System::Void CollapseCoincidentVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_COLLAPSECOINCIDENTVERTICES_OFFSET))(a1, a2);
		}
	};
}
