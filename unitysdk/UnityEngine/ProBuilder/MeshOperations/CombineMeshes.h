#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class SharedVertex; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_ACCUMULATEMESHESINFO_OFFSET UNITYSDK_OFFSET(0x1A26B4B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINETONEWMESHES_OFFSET UNITYSDK_OFFSET(0x1A26A080)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x1A26A570)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_OFFSET UNITYSDK_OFFSET(0x1A26A070)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_CREATEMESHFROMSPLIT_OFFSET UNITYSDK_OFFSET(0x1A26E9B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_SPLITBYMAXVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A26CDD0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int CombineMeshes_TypeDefinitionIndex = 40037;

	class CombineMeshes : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* Combine(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_OFFSET))(meshes);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* Combine_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, ::UnityEngine::ProBuilder::ProBuilderMesh* meshTarget)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_1_OFFSET))(meshes, meshTarget);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* CombineToNewMeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINETONEWMESHES_OFFSET))(meshes);
		}

		static ::System::Void AccumulateMeshesInfo(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* meshes, ::System::Int32 offset, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*& vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& faces, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& autoUvFaces, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*& sharedVertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*& sharedTextures, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& materialMap, ::UnityEngine::Transform* targetTransform)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_ACCUMULATEMESHESINFO_OFFSET))(meshes, offset, vertices, faces, autoUvFaces, sharedVertices, sharedTextures, materialMap, targetTransform);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshFromSplit(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* sharedVertexLookup, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* sharedTextureLookup, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* remap, ::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_CREATEMESHFROMSPLIT_OFFSET))(vertices, faces, sharedVertexLookup, sharedTextureLookup, remap, materials);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* SplitByMaxVertexCount(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedTextures, ::System::UInt32 maxVertexCount)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_SPLITBYMAXVERTEXCOUNT_OFFSET))(vertices, faces, sharedVertices, sharedTextures, maxVertexCount);
		}
	};
}
