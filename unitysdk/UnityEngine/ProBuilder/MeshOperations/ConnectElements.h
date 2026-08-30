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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_1_OFFSET UNITYSDK_OFFSET(0xCFD37F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_OFFSET UNITYSDK_OFFSET(0xCFD4520)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_1_OFFSET UNITYSDK_OFFSET(0xCFD1760)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_OFFSET UNITYSDK_OFFSET(0xCFD2620)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_1_OFFSET UNITYSDK_OFFSET(0xCFD0530)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_2_OFFSET UNITYSDK_OFFSET(0xCFD0590)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_3_OFFSET UNITYSDK_OFFSET(0xCFCE740)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_OFFSET UNITYSDK_OFFSET(0xCFCD810)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_INSERTVERTICES_OFFSET UNITYSDK_OFFSET(0xCFD3150)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ConnectElements_TypeDefinitionIndex = 43293;

	class ConnectElements : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* Connect(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::SimpleTuple_2<::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*> Connect_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::UnityEngine::ProBuilder::SimpleTuple_2<::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*>(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_1_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* Connect_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_2_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ActionResult* Connect_3(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*& a3, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a7)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*&, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECT_3_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace(::UnityEngine::ProBuilder::Face* a1, ::UnityEngine::ProBuilder::WingedEdge* a2, ::UnityEngine::ProBuilder::WingedEdge* a3, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectEdgesInFace_1(::UnityEngine::ProBuilder::Face* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTEDGESINFACE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean InsertVertices(::UnityEngine::ProBuilder::Face* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a3, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_INSERTVERTICES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace(::UnityEngine::ProBuilder::Face* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a4, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* ConnectIndexesPerFace_1(::UnityEngine::ProBuilder::Face* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4, ::System::Int32 a5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_CONNECTELEMENTS_CONNECTINDEXESPERFACE_1_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
