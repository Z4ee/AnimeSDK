#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicMesh.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSubD.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSUBD_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1CE3F070)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSUBD_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x1CE3F060)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSUBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3F210)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicSubD_TypeDefinitionIndex = 44734;

	class AlembicSubD : public ::UnityEngine::Formats::Alembic::Importer::AlembicMesh
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::aiSubD m_abcSchema; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSUBD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiSchema get_abcSchema()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSUBD_GET_ABCSCHEMA_OFFSET))(this);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Sdk::aiSchema a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSUBD_ABCSETUP_OFFSET))(this, a1, a2);
		}
	};
}
