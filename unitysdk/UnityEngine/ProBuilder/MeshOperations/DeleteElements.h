#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_1_OFFSET UNITYSDK_OFFSET(0x1883BAE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_OFFSET UNITYSDK_OFFSET(0x1882F410)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACE_OFFSET UNITYSDK_OFFSET(0x18823D50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEVERTICES_OFFSET UNITYSDK_OFFSET(0x18827420)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0x1883C4C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1883D390)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int DeleteElements_TypeDefinitionIndex = 34225;

	class DeleteElements : public ::System::Object
	{
	public:
		static ::System::Void DeleteVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* distinctIndexes)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEVERTICES_OFFSET))(mesh, distinctIndexes);
		}

		static ::Il2CppArray<::System::Int32>* DeleteFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACE_OFFSET))(mesh, face);
		}

		static ::Il2CppArray<::System::Int32>* DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_OFFSET))(mesh, faces);
		}

		static ::Il2CppArray<::System::Int32>* DeleteFaces_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::System::Int32>* faceIndexes)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_DELETEFACES_1_OFFSET))(mesh, faceIndexes);
		}

		static ::Il2CppArray<::System::Int32>* RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEDEGENERATETRIANGLES_OFFSET))(mesh);
		}

		static ::Il2CppArray<::System::Int32>* RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_DELETEELEMENTS_REMOVEUNUSEDVERTICES_OFFSET))(mesh);
		}
	};
}
