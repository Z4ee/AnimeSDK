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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETBESTQUADCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A294D20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETQUADSCORE_OFFSET UNITYSDK_OFFSET(0x1A2943A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_TOQUADS_OFFSET UNITYSDK_OFFSET(0x1A291AB0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int QuadUtility_TypeDefinitionIndex = 40067;

	class QuadUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* ToQuads(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Boolean smoothing)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_TOQUADS_OFFSET))(mesh, faces, smoothing);
		}

		static ::UnityEngine::ProBuilder::Face* GetBestQuadConnection(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::System::Single>* connections)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETBESTQUADCONNECTION_OFFSET))(wing, connections);
		}

		static ::System::Single GetQuadScore(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right, ::System::Single normalThreshold)
		{
			return ((::System::Single(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_QUADUTILITY_GETQUADSCORE_OFFSET))(mesh, left, right, normalThreshold);
		}
	};
}
