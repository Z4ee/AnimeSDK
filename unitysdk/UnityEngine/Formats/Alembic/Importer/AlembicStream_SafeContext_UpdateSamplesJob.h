#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiContext.h"

#define UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_UPDATESAMPLESJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3872D70)

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStream_SafeContext_UpdateSamplesJob_TypeDefinitionIndex = 41683;

	struct alignas(8) AlembicStream_SafeContext_UpdateSamplesJob
	{
		::UnityEngine::Formats::Alembic::Sdk::aiContext context; // 0x10
		::System::Double time; // 0x18

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_IMPORTER_ALEMBICSTREAM_SAFECONTEXT_UPDATESAMPLESJOB_EXECUTE_OFFSET))(this);
		}
	};
}
