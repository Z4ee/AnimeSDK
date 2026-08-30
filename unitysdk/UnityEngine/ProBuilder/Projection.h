#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings.h"
#include "unitysdk/UnityEngine/ProBuilder/ProjectionAxis.h"
#include "unitysdk/UnityEngine/ProBuilder/SortMethod.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_1_OFFSET UNITYSDK_OFFSET(0x1EB98AC0)
#define UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_OFFSET UNITYSDK_OFFSET(0x1EB94CD0)
#define UNITYENGINE_PROBUILDER_PROJECTION_GETTANGENTTOAXIS_OFFSET UNITYSDK_OFFSET(0x1EB96C40)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_1_OFFSET UNITYSDK_OFFSET(0x1EB95B60)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_2_OFFSET UNITYSDK_OFFSET(0x1EB95E80)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_3_OFFSET UNITYSDK_OFFSET(0x1EB96CA0)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_4_OFFSET UNITYSDK_OFFSET(0x1EB974D0)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_OFFSET UNITYSDK_OFFSET(0x1EB94C80)
#define UNITYENGINE_PROBUILDER_PROJECTION_PROJECTIONAXISTOVECTOR_OFFSET UNITYSDK_OFFSET(0x1EB989C0)
#define UNITYENGINE_PROBUILDER_PROJECTION_SORT_OFFSET UNITYSDK_OFFSET(0x1EB980F0)
#define UNITYENGINE_PROBUILDER_PROJECTION_SPHERICALPROJECT_OFFSET UNITYSDK_OFFSET(0x1EB97AE0)
#define UNITYENGINE_PROBUILDER_PROJECTION_VECTORTOPROJECTIONAXIS_OFFSET UNITYSDK_OFFSET(0x1EB96B60)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Projection_TypeDefinitionIndex = 43221;

	class Projection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>* PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* PlanarProject_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PlanarProject_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void PlanarProject_3(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2, ::UnityEngine::ProBuilder::AutoUnwrapSettings a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PlanarProject_4(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_4_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_SPHERICALPROJECT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1, ::UnityEngine::ProBuilder::SortMethod a2)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::UnityEngine::ProBuilder::SortMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_SORT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProjectionAxis))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_GETTANGENTTOAXIS_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProjectionAxis))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PROJECTIONAXISTOVECTOR_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::ProBuilder::ProjectionAxis(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_VECTORTOPROJECTIONAXIS_OFFSET))(a1);
		}

		static ::UnityEngine::Plane FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Plane(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Plane FindBestPlane_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Plane(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_1_OFFSET))(a1, a2);
		}
	};
}
