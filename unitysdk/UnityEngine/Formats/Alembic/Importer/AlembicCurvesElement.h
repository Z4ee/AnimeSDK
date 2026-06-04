#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Importer/AlembicElement.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurves.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSampleSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiCurvesSummary.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_ABCSETUP_OFFSET UNITYSDK_OFFSET(0x1B02F300)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_ABCSYNCDATABEGIN_OFFSET UNITYSDK_OFFSET(0x1B02F420)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_ABCSYNCDATAEND_OFFSET UNITYSDK_OFFSET(0x1B02FB90)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_GET_ABCSCHEMA_OFFSET UNITYSDK_OFFSET(0x1B02F2B0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_GET_CREATERENDERINGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B02F290)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x1B02F2C0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_SET_CREATERENDERINGCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B02F2A0)
#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02FF40)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicCurvesElement_TypeDefinitionIndex = 41671;

	class AlembicCurvesElement : public ::UnityEngine::Formats::Alembic::Importer::AlembicElement
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Formats::Alembic::Sdk::aiCurvesData>* m_abcData; // 0x28
		::UnityEngine::Formats::Alembic::Sdk::aiCurves m_abcSchema; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::aiCurvesSampleSummary m_sampleSummary; // 0x38
		::System::Boolean _CreateRenderingComponent_k__BackingField; // 0x40
		::UnityEngine::Formats::Alembic::Sdk::aiCurvesSummary m_summary; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_CreateRenderingComponent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_GET_CREATERENDERINGCOMPONENT_OFFSET))(this);
		}

		::System::Void set_CreateRenderingComponent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_SET_CREATERENDERINGCOMPONENT_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiSchema get_abcSchema()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_GET_ABCSCHEMA_OFFSET))(this);
		}

		::System::Boolean get_visibility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void AbcSetup(::UnityEngine::Formats::Alembic::Sdk::aiObject a1, ::UnityEngine::Formats::Alembic::Sdk::aiSchema a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiObject, ::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_ABCSETUP_OFFSET))(this, a1, a2);
		}

		::System::Void AbcSyncDataBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_ABCSYNCDATABEGIN_OFFSET))(this);
		}

		::System::Void AbcSyncDataEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICCURVESELEMENT_ABCSYNCDATAEND_OFFSET))(this);
		}
	};
}
