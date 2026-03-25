#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicElement.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXform.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiXformData.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x187A24A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x187A24C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x187A2480)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x187A2490)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x187A2C90)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicXform_TypeDefinitionIndex = 35040;

	class AlembicXform : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::aiXformData m_abcData; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::aiXform m_abcSchema; // 0x58

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

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject abcObj, ::UnityEngine::Formats::Alembic::Sdk::aiSchema abcSchema)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSETUP_OFFSET))(this, abcObj, abcSchema);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICXFORM_ABCSYNCDATAEND_OFFSET))(this);
		}
	};
}
