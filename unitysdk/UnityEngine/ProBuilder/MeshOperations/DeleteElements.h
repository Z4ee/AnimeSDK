#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_1_OFFSET UNITYSDK_OFFSET(0xC0C5010)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_OFFSET UNITYSDK_OFFSET(0xC0B70B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACE_OFFSET UNITYSDK_OFFSET(0xC0AA7C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEVERTICES_OFFSET UNITYSDK_OFFSET(0xC0ADB00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0xC0C5AF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xC0C6A80)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int DeleteElements_TypeDefinitionIndex = 41686;

	class DeleteElements : public ::System::Object
	{
	public:
		static ::System::Void DeleteVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEVERTICES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* DeleteFace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* DeleteFaces_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEDEGENERATETRIANGLES_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEUNUSEDVERTICES_OFFSET))(a1);
		}
	};
}
