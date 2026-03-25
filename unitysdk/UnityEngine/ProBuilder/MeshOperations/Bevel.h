#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_BEVELEDGES_OFFSET UNITYSDK_OFFSET(0x1882A440)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETBRIDGEFACES_OFFSET UNITYSDK_OFFSET(0x1882E0F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETLEADINGEDGE_OFFSET UNITYSDK_OFFSET(0x1882F9F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_SLIDEEDGE_OFFSET UNITYSDK_OFFSET(0x1882DBA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1882FAB0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel_TypeDefinitionIndex = 34213;

	class Bevel : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_k_BridgeIndexesTri()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Bevel_TypeDefinitionIndex)->GetStaticField(0x28420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Single amount)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_BEVELEDGES_OFFSET))(mesh, edges, amount);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>>*>* holes)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETBRIDGEFACES_OFFSET))(vertices, left, right, holes);
		}

		static ::System::Void SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* we, ::System::Single amount)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_SLIDEEDGE_OFFSET))(vertices, we, amount);
		}

		static ::UnityEngine::ProBuilder::Edge GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Int32 common)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETLEADINGEDGE_OFFSET))(wing, common);
		}
	};
}
