#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class ActionResult; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_1_OFFSET UNITYSDK_OFFSET(0x1885AD90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_OFFSET UNITYSDK_OFFSET(0x1885AD10)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Subdivision_TypeDefinitionIndex = 34249;

	class Subdivision : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ActionResult* Subdivide(::UnityEngine::ProBuilder::ProBuilderMesh* pb)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_OFFSET))(pb);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* Subdivide_1(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_1_OFFSET))(pb, faces);
		}
	};
}
