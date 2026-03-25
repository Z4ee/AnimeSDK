#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicCurves; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINEMESH_OFFSET UNITYSDK_OFFSET(0x187922D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATEPLANEMESH_OFFSET UNITYSDK_OFFSET(0x18792F90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18792180)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18792F20)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18792F80)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18791F20)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x18792270)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18793800)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurvesRenderer_TypeDefinitionIndex = 35043;

	class AlembicCurvesRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicCurves* curves; // 0x18
		::UnityEngine::Mesh* mesh; // 0x20
		::Unity::Profiling::ProfilerMarker setMeshProperties; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateMesh(::UnityEngine::Formats::Alembic::Importer::AlembicCurves* curves)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_UPDATEMESH_OFFSET))(this, curves);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void GeneratePlaneMesh(::UnityEngine::Mesh* theMesh, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* curveCounts, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* widths)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATEPLANEMESH_OFFSET))(this, theMesh, positions, curveCounts, widths);
		}

		::System::Void GenerateLineMesh(::UnityEngine::Mesh* theMesh, ::Il2CppArray<::UnityEngine::Vector3>* positionsM, ::Il2CppArray<::System::Int32>* curveOffsetM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINEMESH_OFFSET))(this, theMesh, positionsM, curveOffsetM);
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GETDEFAULTMATERIAL_OFFSET))();
		}
	};
}
