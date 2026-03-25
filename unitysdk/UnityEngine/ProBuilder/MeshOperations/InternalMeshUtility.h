#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class SharedVertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_AVERAGENORMALWITHINDEXES_OFFSET UNITYSDK_OFFSET(0x1884E6F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_CREATEMESHWITHTRANSFORM_OFFSET UNITYSDK_OFFSET(0x188500A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_FILTERUNUSEDSUBMESHINDEXES_OFFSET UNITYSDK_OFFSET(0x18833F00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_RESETPBOBJECTWITHMESHFILTER_OFFSET UNITYSDK_OFFSET(0x18852700)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int InternalMeshUtility_TypeDefinitionIndex = 34235;

	class InternalMeshUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 AverageNormalWithIndexes(::UnityEngine::ProBuilder::SharedVertex* shared, ::Il2CppArray<::System::Int32>* all, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* norm)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::SharedVertex*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_AVERAGENORMALWITHINDEXES_OFFSET))(shared, all, norm);
		}

		static ::UnityEngine::ProBuilder::ProBuilderMesh* CreateMeshWithTransform(::UnityEngine::Transform* t, ::System::Boolean preserveFaces)
		{
			return ((::UnityEngine::ProBuilder::ProBuilderMesh*(*)(::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_CREATEMESHWITHTRANSFORM_OFFSET))(t, preserveFaces);
		}

		static ::System::Boolean ResetPbObjectWithMeshFilter(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Boolean preserveFaces)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_RESETPBOBJECTWITHMESHFILTER_OFFSET))(pb, preserveFaces);
		}

		static ::System::Void FilterUnusedSubmeshIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY_FILTERUNUSEDSUBMESHINDEXES_OFFSET))(mesh);
		}
	};
}
