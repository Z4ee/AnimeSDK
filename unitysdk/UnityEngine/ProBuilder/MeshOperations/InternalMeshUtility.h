#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class SharedVertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_AVERAGENORMALWITHINDEXES_OFFSET UNITYSDK_OFFSET(0xCFE6FE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_CREATEMESHWITHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xCFE88D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_FILTERUNUSEDSUBMESHINDEXES_OFFSET UNITYSDK_OFFSET(0xCFCC730)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_RESETPBOBJECTWITHMESHFILTER_OFFSET UNITYSDK_OFFSET(0xCFEACC0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int InternalMeshUtility_TypeDefinitionIndex = 43307;

	class InternalMeshUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 AverageNormalWithIndexes(::UnityEngine::ProBuilder::SharedVertex* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::SharedVertex*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_AVERAGENORMALWITHINDEXES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshWithTransform(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_CREATEMESHWITHTRANSFORM_OFFSET))(a1, a2);
		}

		static ::System::Boolean ResetPbObjectWithMeshFilter(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_RESETPBOBJECTWITHMESHFILTER_OFFSET))(a1, a2);
		}

		static ::System::Void FilterUnusedSubmeshIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_FILTERUNUSEDSUBMESHINDEXES_OFFSET))(a1);
		}
	};
}
