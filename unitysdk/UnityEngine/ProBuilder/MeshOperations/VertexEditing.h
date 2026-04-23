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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_ALIGNEDGEWITHDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A2A0D00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_EXPLODEVERTEX_OFFSET UNITYSDK_OFFSET(0x1A268950)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_MERGEVERTICES_OFFSET UNITYSDK_OFFSET(0x1A29F330)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_1_OFFSET UNITYSDK_OFFSET(0x1A29F780)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_OFFSET UNITYSDK_OFFSET(0x1A29F710)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_WELDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A29FBC0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int VertexEditing_TypeDefinitionIndex = 40078;

	class VertexEditing : public ::System::Object
	{
	public:
		static ::System::Int32 MergeVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes, ::System::Boolean collapseToFirst)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_MERGEVERTICES_OFFSET))(mesh, indexes, collapseToFirst);
		}

		static ::System::Void SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_OFFSET))(mesh, edge);
		}

		static ::System::Void SplitVertices_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_SPLITVERTICES_1_OFFSET))(mesh, vertices);
		}

		static ::Il2CppArray<::System::Int32>* WeldVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes, ::System::Single neighborRadius)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_WELDVERTICES_OFFSET))(mesh, indexes, neighborRadius);
		}

		static ::UnityEngine::ProBuilder::FaceRebuildData* ExplodeVertex(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32>>* edgeAndCommonIndex, ::System::Single distance, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*& appendedVertices)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32>>*, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_EXPLODEVERTEX_OFFSET))(vertices, edgeAndCommonIndex, distance, appendedVertices);
		}

		static ::UnityEngine::ProBuilder::Edge AlignEdgeWithDirection(::UnityEngine::ProBuilder::EdgeLookup edge, ::System::Int32 commonIndex)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::EdgeLookup, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_VERTEXEDITING_ALIGNEDGEWITHDIRECTION_OFFSET))(edge, commonIndex);
		}
	};
}
