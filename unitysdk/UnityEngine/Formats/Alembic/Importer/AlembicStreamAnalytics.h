#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMANALYTICS_SENDANALYTICS_OFFSET UNITYSDK_OFFSET(0x1B194F10)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStreamAnalytics_TypeDefinitionIndex = 42528;

	class AlembicStreamAnalytics : public ::System::Object
	{
	public:
		// static const ::System::String* VendorKey; // 0x0
		// static const ::System::String* EventName; // 0x0
		// static const ::System::Int32 MAXEventsPerHour = 0x3E8; // 0x0
		// static const ::System::Int32 MAXNumberOfElements = 0x3E8; // 0x0

		static ::System::Void SendAnalytics()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAMANALYTICS_SENDANALYTICS_OFFSET))();
		}
	};
}
