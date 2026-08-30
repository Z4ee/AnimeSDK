#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicElement.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXform.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXformData.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1EAB1700)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x1EAB1720)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x1EAB16E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1EAB16F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1F40)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicXform_TypeDefinitionIndex = 44736;

	class AlembicXform : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::aiXform m_abcSchema; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::aiXformData m_abcData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiSchema get_abcSchema()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_GET_ABCSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_visibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Sdk::aiSchema a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSETUP_OFFSET))(this, a1, a2);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSYNCDATAEND_OFFSET))(this);
		}
	};
}
