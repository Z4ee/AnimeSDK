#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicElement.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSplitSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiMeshSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMesh.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPolyMeshData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSubmeshData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSubmeshSummary.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicMesh_Split; }
namespace UnityEngine::Formats::Alembic::Importer { class AlembicMesh_Submesh; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1EAA25D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSYNCDATABEGIN_OFFSET UNITYSDK_OFFSET(0x1EAA26F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x1EAA42B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ADDMESHCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1EAA5870)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_CLEARMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x1EAA5AD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EAA1E30)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1EAA5C90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x1EAA1DD0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_SAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1EAA1E10)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x1EAA1DF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1EAA1DE0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_UPDATESPLITS_OFFSET UNITYSDK_OFFSET(0x1EAA21D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5D90)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_TypeDefinitionIndex = 44715;

	class AlembicMesh : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicMesh_Split*>* m_splits; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicMesh_Submesh*>* m_submeshes; // 0x30
		::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>* m_PostProcessJobs; // 0x38
		::Unity::Jobs::JobHandle fillVertexBufferHandle; // 0x40
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData> m_submeshData; // 0x50
		::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary m_summary; // 0x60
		::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary m_sampleSummary; // 0x78
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData> m_splitData; // 0x90
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshSummary> m_submeshSummaries; // 0xA0
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiMeshSplitSummary> m_splitSummaries; // 0xB0
		::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh m_abcSchema; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiSchema get_abcSchema()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_ABCSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_visibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_VISIBILITY_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary get_summary()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_SUMMARY_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary get_sampleSummary()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_SAMPLESUMMARY_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void UpdateSplits(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_UPDATESPLITS_OFFSET))(this, a1);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Sdk::aiSchema a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSETUP_OFFSET))(this, a1, a2);
		}

		::System::Void AbcSyncDataBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSYNCDATABEGIN_OFFSET))(this);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSYNCDATAEND_OFFSET))(this);
		}

		::System::Void ClearMotionVectors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_CLEARMOTIONVECTORS_OFFSET))(this);
		}

		::UnityEngine::Mesh* AddMeshComponents(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ADDMESHCOMPONENTS_OFFSET))(this, a1);
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GETDEFAULTMATERIAL_OFFSET))();
		}
	};
}
