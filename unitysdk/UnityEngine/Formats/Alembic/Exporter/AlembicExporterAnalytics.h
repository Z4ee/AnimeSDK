#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Exporter/AlembicExporterAnalytics_AlembicExporterAnalyticsEvent.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorderSettings; }

#define UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0x1B02E5F0)
#define UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_SENDANALYTICS_OFFSET UNITYSDK_OFFSET(0x1B02D410)

namespace UnityEngine::Formats::Alembic::Exporter
{
	inline static constexpr unsigned int AlembicExporterAnalytics_TypeDefinitionIndex = 41709;

	class AlembicExporterAnalytics : public ::System::Object
	{
	public:
		// static const ::System::String* VendorKey; // 0x0
		// static const ::System::String* EventName; // 0x0
		// static const ::System::Int32 MAXEventsPerHour = 0x3E8; // 0x0
		// static const ::System::Int32 MAXNumberOfElements = 0x3E8; // 0x0

		static ::System::Void SendAnalytics(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_SENDANALYTICS_OFFSET))(a1);
		}

		static ::UnityEngine::Formats::Alembic::Exporter::AlembicExporterAnalytics_AlembicExporterAnalyticsEvent CreateEvent(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* a1)
		{
			return ((::UnityEngine::Formats::Alembic::Exporter::AlembicExporterAnalytics_AlembicExporterAnalyticsEvent(*)(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_EXPORTER_ALEMBICEXPORTERANALYTICS_CREATEEVENT_OFFSET))(a1);
		}
	};
}
