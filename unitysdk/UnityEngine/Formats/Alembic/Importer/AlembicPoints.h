#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicElement.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPoints.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCPREPARESAMPLE_OFFSET UNITYSDK_OFFSET(0x1B18C5A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1B18C480)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCSYNCDATABEGIN_OFFSET UNITYSDK_OFFSET(0x1B18C8F0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x1B18D040)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B18C430)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1B18C440)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B18D460)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicPoints_TypeDefinitionIndex = 42538;

	class AlembicPoints : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiPointsData>* m_abcData; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::aiPoints m_abcSchema; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary m_summary; // 0x38
		::UnityEngine::Formats::Alembic::Sdk::aiPointsSampleSummary m_sampleSummary; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiSchema get_abcSchema()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_GET_ABCSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_visibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Sdk::aiSchema a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCSETUP_OFFSET))(this, a1, a2);
		}

		::System::Void AbcPrepareSample()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCPREPARESAMPLE_OFFSET))(this);
		}

		::System::Void AbcSyncDataBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCSYNCDATABEGIN_OFFSET))(this);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICPOINTS_ABCSYNCDATAEND_OFFSET))(this);
		}
	};
}
