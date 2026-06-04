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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_BEVELEDGES_OFFSET UNITYSDK_OFFSET(0x1B0C81E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETBRIDGEFACES_OFFSET UNITYSDK_OFFSET(0x1B0CC0E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETLEADINGEDGE_OFFSET UNITYSDK_OFFSET(0x1B0CDE50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_SLIDEEDGE_OFFSET UNITYSDK_OFFSET(0x1B0CBB80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0CDF10)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel_TypeDefinitionIndex = 40859;

	class Bevel : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_k_BridgeIndexesTri()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Bevel_TypeDefinitionIndex)->GetStaticField(0x52E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_BEVELEDGES_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* GetBridgeFaces(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::UnityEngine::ProBuilder::WingedEdge* a2, ::UnityEngine::ProBuilder::WingedEdge* a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>>*>* a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETBRIDGEFACES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::UnityEngine::ProBuilder::WingedEdge* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_SLIDEEDGE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Edge GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL_GETLEADINGEDGE_OFFSET))(a1, a2);
		}
	};
}
