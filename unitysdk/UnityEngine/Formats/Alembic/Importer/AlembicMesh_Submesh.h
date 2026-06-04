#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SUBMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B035F50)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0341C0)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicMesh_Submesh_TypeDefinitionIndex = 41674;

	class AlembicMesh_Submesh : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Char>* facesetName; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::System::Int32>* indexes; // 0x18
		::System::Boolean update; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SUBMESH__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICMESH_SUBMESH_DISPOSE_OFFSET))(this);
		}
	};
}
