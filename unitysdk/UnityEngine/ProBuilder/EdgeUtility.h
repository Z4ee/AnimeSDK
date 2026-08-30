#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_EDGEUTILITY_ALLTRIANGLES_OFFSET UNITYSDK_OFFSET(0xCF943E0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0xCF93E50)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_OFFSET UNITYSDK_OFFSET(0xCF93DE0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETEDGEWITHSHAREDVERTEXHANDLES_OFFSET UNITYSDK_OFFSET(0xCF934F0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETFACE_OFFSET UNITYSDK_OFFSET(0xCF94510)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGES_OFFSET UNITYSDK_OFFSET(0xCF93130)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGE_OFFSET UNITYSDK_OFFSET(0xCF931F0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_INDEXOF_OFFSET UNITYSDK_OFFSET(0xCF93EE0)
#define UNITYENGINE_PROBUILDER_EDGEUTILITY_VALIDATEEDGE_OFFSET UNITYSDK_OFFSET(0xCF93580)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int EdgeUtility_TypeDefinitionIndex = 43162;

	class EdgeUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetSharedVertexHandleEdges(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGES_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Edge GetSharedVertexHandleEdge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETSHAREDVERTEXHANDLEEDGE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Edge GetEdgeWithSharedVertexHandles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETEDGEWITHSHAREDVERTEXHANDLES_OFFSET))(a1, a2);
		}

		static ::System::Boolean ValidateEdge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_VALIDATEEDGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean Contains(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_OFFSET))(a1, a2);
		}

		static ::System::Boolean Contains_1(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::ProBuilder::Edge>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_CONTAINS_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 IndexOf(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* a2, ::UnityEngine::ProBuilder::Edge a3)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_INDEXOF_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Int32>* AllTriangles(::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_ALLTRIANGLES_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::Face* GetFace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_EDGEUTILITY_GETFACE_OFFSET))(a1, a2);
		}
	};
}
