#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicElement.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/CameraData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCamera.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1A1CA100)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x1A1CA2D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x1A1CA0D0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1A1CA0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1CA880)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCamera_TypeDefinitionIndex = 40844;

	class AlembicCamera : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::UnityEngine::Camera* m_camera; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::CameraData m_abcData; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::aiCamera m_abcSchema; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiSchema get_abcSchema()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_GET_ABCSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_visibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject abcObj, ::UnityEngine::Formats::Alembic::Sdk::aiSchema abcSchema)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_ABCSETUP_OFFSET))(this, abcObj, abcSchema);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCAMERA_ABCSYNCDATAEND_OFFSET))(this);
		}
	};
}
