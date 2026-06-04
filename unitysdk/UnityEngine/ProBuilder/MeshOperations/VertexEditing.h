#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_ALIGNEDGEWITHDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B103AF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_EXPLODEVERTEX_OFFSET UNITYSDK_OFFSET(0x1B0CC9A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_MERGEVERTICES_OFFSET UNITYSDK_OFFSET(0x1B1025F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1B1029F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_OFFSET UNITYSDK_OFFSET(0x1B102990)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_WELDVERTICES_OFFSET UNITYSDK_OFFSET(0x1B102E30)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int VertexEditing_TypeDefinitionIndex = 40905;

	class VertexEditing : public ::System::Object
	{
	public:
		static ::System::Int32 MergeVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_MERGEVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_OFFSET))(a1, a2);
		}

		static ::System::Void SplitVertices_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* WeldVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::System::Single a3)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_WELDVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::FaceRebuildData* ExplodeVertex(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32>>* a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*& a4)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32>>*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_EXPLODEVERTEX_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::Edge AlignEdgeWithDirection(::UnityEngine::ProBuilder::EdgeLookup a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::EdgeLookup, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_ALIGNEDGEWITHDIRECTION_OFFSET))(a1, a2);
		}
	};
}
