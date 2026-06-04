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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_ACCUMULATEMESHESINFO_OFFSET UNITYSDK_OFFSET(0x1B0CF770)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINETONEWMESHES_OFFSET UNITYSDK_OFFSET(0x1B0CE360)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_1_OFFSET UNITYSDK_OFFSET(0x1B0CE7D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_OFFSET UNITYSDK_OFFSET(0x1B0CE350)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_CREATEMESHFROMSPLIT_OFFSET UNITYSDK_OFFSET(0x1B0D2A20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_SPLITBYMAXVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B0D0E10)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int CombineMeshes_TypeDefinitionIndex = 40864;

	class CombineMeshes : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* Combine(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* Combine_1(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINE_1_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* CombineToNewMeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_COMBINETONEWMESHES_OFFSET))(a1);
		}

		static ::System::Void AccumulateMeshesInfo(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*& a3, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& a4, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*& a5, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*& a6, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*& a7, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a8, ::UnityEngine::Transform* a9)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*&, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SharedVertex*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_ACCUMULATEMESHESINFO_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshFromSplit(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a5, ::Il2CppArray<::UnityEngine::Material*>* a6)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_CREATEMESHFROMSPLIT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>* SplitByMaxVertexCount(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a3, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* a4, ::System::UInt32 a5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ProBuilderMesh*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES_SPLITBYMAXVERTEXCOUNT_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
