#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_EDGEUTILITY_ALLTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1A239110)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1A238D70)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A238D00)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETEDGEWITHSHAREDVERTEXHANDLES_OFFSET UNITYSDK_OFFSET(0x1A2381C0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETFACE_OFFSET UNITYSDK_OFFSET(0x1A239260)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGES_OFFSET UNITYSDK_OFFSET(0x1A237EF0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGE_OFFSET UNITYSDK_OFFSET(0x1A237F90)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A238E00)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_VALIDATEEDGE_OFFSET UNITYSDK_OFFSET(0x1A238290)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeUtility_TypeDefinitionIndex = 39909;

	class EdgeUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetSharedVertexHandleEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGES_OFFSET))(mesh, edges);
		}

		static ::UnityEngine::ProBuilder::Edge GetSharedVertexHandleEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGE_OFFSET))(mesh, edge);
		}

		static ::UnityEngine::ProBuilder::Edge GetEdgeWithSharedVertexHandles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETEDGEWITHSHAREDVERTEXHANDLES_OFFSET))(mesh, edge);
		}

		static ::System::Boolean ValidateEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>& validEdge)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_VALIDATEEDGE_OFFSET))(mesh, edge, validEdge);
		}

		static ::System::Boolean Contains(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_OFFSET))(edges, edge);
		}

		static ::System::Boolean Contains_1(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_1_OFFSET))(edges, x, y);
		}

		static ::System::Int32 IndexOf(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_INDEXOF_OFFSET))(mesh, edges, edge);
		}

		static ::Il2CppArray<::System::Int32>* AllTriangles(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_ALLTRIANGLES_OFFSET))(edges);
		}

		static ::UnityEngine::ProBuilder::Face* GetFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETFACE_OFFSET))(mesh, edge);
		}
	};
}
