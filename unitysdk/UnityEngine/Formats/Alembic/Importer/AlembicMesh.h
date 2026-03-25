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

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x18794330)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSYNCDATABEGIN_OFFSET UNITYSDK_OFFSET(0x18794450)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x18795EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ADDMESHCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x187973B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_CLEARMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x18797690)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18793CE0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18797840)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x18793C80)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_SAMPLESUMMARY_OFFSET UNITYSDK_OFFSET(0x18793CC0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0x18793CA0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x18793C90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_UPDATESPLITS_OFFSET UNITYSDK_OFFSET(0x18794050)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x187978E0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_TypeDefinitionIndex = 35019;

	class AlembicMesh : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicMesh_Submesh*>* m_submeshes; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Importer::AlembicMesh_Split*>* m_splits; // 0x30
		::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>* m_PostProcessJobs; // 0x38
		::UnityEngine::Formats::Alembic::Sdk::aiMeshSummary m_summary; // 0x40
		::UnityEngine::Formats::Alembic::Sdk::aiMeshSampleSummary m_sampleSummary; // 0x58
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshData> m_submeshData; // 0x70
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiSubmeshSummary> m_submeshSummaries; // 0x80
		::Unity::Jobs::JobHandle fillVertexBufferHandle; // 0x90
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiMeshSplitSummary> m_splitSummaries; // 0xA0
		::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh m_abcSchema; // 0xB0
		::Unity::Collections::NativeArray_1<::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshData> m_splitData; // 0xB8

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

		::System::Void Dispose(::System::Boolean v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_DISPOSE_OFFSET))(this, v);
		}

		::System::Void UpdateSplits(::System::Int32 numSplits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_UPDATESPLITS_OFFSET))(this, numSplits);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject abcObj, ::UnityEngine::Formats::Alembic::Sdk::aiSchema abcSchema)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ABCSETUP_OFFSET))(this, abcObj, abcSchema);
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

		::UnityEngine::Mesh* AddMeshComponents(::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_ADDMESHCOMPONENTS_OFFSET))(this, go);
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_GETDEFAULTMATERIAL_OFFSET))();
		}
	};
}
