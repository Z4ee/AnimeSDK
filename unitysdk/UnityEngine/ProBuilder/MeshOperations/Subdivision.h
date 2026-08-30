#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine::ProBuilder { class ActionResult; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_1_OFFSET UNITYSDK_OFFSET(0x1EB70230)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_OFFSET UNITYSDK_OFFSET(0x1EB701B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Subdivision_TypeDefinitionIndex = 43321;

	class Subdivision : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::ActionResult* Subdivide(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* Subdivide_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SUBDIVISION_SUBDIVIDE_1_OFFSET))(a1, a2);
		}
	};
}
