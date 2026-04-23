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

#define UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_1_OFFSET UNITYSDK_OFFSET(0x1A2BB3A0)
#define UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_OFFSET UNITYSDK_OFFSET(0x1A2B80B0)
#define UNITYENGINE_PROBUILDER_PROJECTION_GETTANGENTTOAXIS_OFFSET UNITYSDK_OFFSET(0x1A2B9710)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_1_OFFSET UNITYSDK_OFFSET(0x1A2B8AD0)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_2_OFFSET UNITYSDK_OFFSET(0x1A2B8CE0)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_3_OFFSET UNITYSDK_OFFSET(0x1A2B9770)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_4_OFFSET UNITYSDK_OFFSET(0x1A2BA020)
#define UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_OFFSET UNITYSDK_OFFSET(0x1A2B8060)
#define UNITYENGINE_PROBUILDER_PROJECTION_PROJECTIONAXISTOVECTOR_OFFSET UNITYSDK_OFFSET(0x1A2BB2A0)
#define UNITYENGINE_PROBUILDER_PROJECTION_SORT_OFFSET UNITYSDK_OFFSET(0x1A2BABC0)
#define UNITYENGINE_PROBUILDER_PROJECTION_SPHERICALPROJECT_OFFSET UNITYSDK_OFFSET(0x1A2BA690)
#define UNITYENGINE_PROBUILDER_PROJECTION_VECTORTOPROJECTIONAXIS_OFFSET UNITYSDK_OFFSET(0x1A2B9630)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Projection_TypeDefinitionIndex = 39968;

	class Projection : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector2>* PlanarProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_OFFSET))(positions, indexes);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* PlanarProject_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::Vector3 direction)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_1_OFFSET))(positions, indexes, direction);
		}

		static ::System::Void PlanarProject_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::Vector3 direction, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* results)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_2_OFFSET))(positions, indexes, direction, results);
		}

		static ::System::Void PlanarProject_3(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 textureGroup, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_3_OFFSET))(mesh, textureGroup, unwrapSettings);
		}

		static ::System::Void PlanarProject_4(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 projection)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PLANARPROJECT_4_OFFSET))(mesh, face, projection);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* SphericalProject(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_SPHERICALPROJECT_OFFSET))(vertices, indexes);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* Sort(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* verts, ::UnityEngine::ProBuilder::SortMethod method)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*, ::UnityEngine::ProBuilder::SortMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_SORT_OFFSET))(verts, method);
		}

		static ::UnityEngine::Vector3 GetTangentToAxis(::UnityEngine::ProBuilder::ProjectionAxis axis)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProjectionAxis))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_GETTANGENTTOAXIS_OFFSET))(axis);
		}

		static ::UnityEngine::Vector3 ProjectionAxisToVector(::UnityEngine::ProBuilder::ProjectionAxis axis)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProjectionAxis))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_PROJECTIONAXISTOVECTOR_OFFSET))(axis);
		}

		static ::UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::ProBuilder::ProjectionAxis(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_VECTORTOPROJECTIONAXIS_OFFSET))(direction);
		}

		static ::UnityEngine::Plane FindBestPlane(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::Plane(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_OFFSET))(points, indexes);
		}

		static ::UnityEngine::Plane FindBestPlane_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 textureGroup)
		{
			return ((::UnityEngine::Plane(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROJECTION_FINDBESTPLANE_1_OFFSET))(mesh, textureGroup);
		}
	};
}
