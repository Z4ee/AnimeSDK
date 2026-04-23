#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_COLLAPSECOINCIDENTVERTICES_OFFSET UNITYSDK_OFFSET(0x1A28F030)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGEPAIRS_OFFSET UNITYSDK_OFFSET(0x1A28E870)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGE_OFFSET UNITYSDK_OFFSET(0x1A28F750)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MergeElements_TypeDefinitionIndex = 40056;

	class MergeElements : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* MergePairs(::UnityEngine::ProBuilder::ProBuilderMesh* target, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>>* pairs, ::System::Boolean collapseCoincidentVertices)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*>>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGEPAIRS_OFFSET))(target, pairs, collapseCoincidentVertices);
		}

		static ::UnityEngine::ProBuilder::Face* Merge(::UnityEngine::ProBuilder::ProBuilderMesh* target, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_MERGE_OFFSET))(target, faces);
		}

		static ::System::Void CollapseCoincidentVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MERGEELEMENTS_COLLAPSECOINCIDENTVERTICES_OFFSET))(mesh, faces);
		}
	};
}
