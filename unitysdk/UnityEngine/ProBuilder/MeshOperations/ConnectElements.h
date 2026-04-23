#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class ActionResult; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder { class WingedEdge; }
namespace UnityEngine::ProBuilder::MeshOperations { class ConnectFaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_1_OFFSET UNITYSDK_OFFSET(0x1A274810)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_OFFSET UNITYSDK_OFFSET(0x1A2750B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_1_OFFSET UNITYSDK_OFFSET(0x1A272F40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_OFFSET UNITYSDK_OFFSET(0x1A273940)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_1_OFFSET UNITYSDK_OFFSET(0x1A271B60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_2_OFFSET UNITYSDK_OFFSET(0x1A271BC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_3_OFFSET UNITYSDK_OFFSET(0x1A26FFB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_OFFSET UNITYSDK_OFFSET(0x1A26EFF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_INSERTVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2743A0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectElements_TypeDefinitionIndex = 40040;

	class ConnectElements : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* Connect(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_OFFSET))(mesh, faces);
		}

		static ::UnityEngine::ProBuilder::SimpleTuple_2<::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*> Connect_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::UnityEngine::ProBuilder::SimpleTuple_2<::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*>(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_1_OFFSET))(mesh, edges);
		}

		static ::Il2CppArray<::System::Int32>* Connect_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_2_OFFSET))(mesh, indexes);
		}

		static ::UnityEngine::ProBuilder::ActionResult* Connect_3(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*& addedFaces, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& connections, ::System::Boolean returnFaces, ::System::Boolean returnEdges, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faceMask)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*&, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_3_OFFSET))(mesh, edges, addedFaces, connections, returnFaces, returnEdges, faceMask);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* face, ::UnityEngine::ProBuilder::WingedEdge* a, ::UnityEngine::ProBuilder::WingedEdge* b, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_OFFSET))(face, a, b, vertices);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace_1(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_1_OFFSET))(face, edges, vertices);
		}

		static ::System::Boolean InsertVertices(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* edges, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*& data)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_INSERTVERTICES_OFFSET))(face, edges, vertices, data);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* face, ::System::Int32 a, ::System::Int32 b, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_OFFSET))(face, a, b, vertices, lookup);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace_1(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::System::Int32>* indexes, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup, ::System::Int32 sharedIndexOffset)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_1_OFFSET))(face, indexes, vertices, lookup, sharedIndexOffset);
		}
	};
}
