#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETBESTQUADCONNECTION_OFFSET UNITYSDK_OFFSET(0x1B0F7F00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETQUADSCORE_OFFSET UNITYSDK_OFFSET(0x1B0F7690)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_TOQUADS_OFFSET UNITYSDK_OFFSET(0x1B0F4C40)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int QuadUtility_TypeDefinitionIndex = 40894;

	class QuadUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* ToQuads(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_TOQUADS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Face* GetBestQuadConnection(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::System::Single>* a2)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETBESTQUADCONNECTION_OFFSET))(a1, a2);
		}

		static ::System::Single GetQuadScore(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::WingedEdge* a2, ::UnityEngine::ProBuilder::WingedEdge* a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETQUADSCORE_OFFSET))(a1, a2, a3, a4);
		}
	};
}
