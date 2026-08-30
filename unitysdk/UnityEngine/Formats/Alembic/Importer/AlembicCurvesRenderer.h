#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicCurves; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINEMESH_OFFSET UNITYSDK_OFFSET(0x1CE2DCD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATEPLANEMESH_OFFSET UNITYSDK_OFFSET(0x1CE2E990)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CE2DAF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CE2E920)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CE2E980)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CE2D890)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_UPDATEMESH_OFFSET UNITYSDK_OFFSET(0x1CE2DC70)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2F700)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurvesRenderer_TypeDefinitionIndex = 44739;

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

		::System::Void UpdateMesh(::UnityEngine::Formats::Alembic::Importer::AlembicCurves* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Importer::AlembicCurves*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_UPDATEMESH_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void GeneratePlaneMesh(::UnityEngine::Mesh* a1, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>* a2, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* a3, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATEPLANEMESH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GenerateLineMesh(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GENERATELINEMESH_OFFSET))(this, a1, a2, a3);
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESRENDERER_GETDEFAULTMATERIAL_OFFSET))();
		}
	};
}
