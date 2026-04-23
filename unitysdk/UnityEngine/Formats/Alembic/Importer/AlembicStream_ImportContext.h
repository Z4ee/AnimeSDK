#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSampleSelector.h"

namespace UnityEngine::Formats::Alembic::Importer { class AlembicTreeNode; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1D7570)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream_ImportContext_TypeDefinitionIndex = 40858;

	class AlembicStream_ImportContext : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Importer::AlembicTreeNode* alembicTreeNode; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector ss; // 0x18
		::System::Boolean createMissingNodes; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_IMPORTCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
