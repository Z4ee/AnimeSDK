#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURERRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E34B0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_CapturerRecord_TypeDefinitionIndex = 40769;

	class AlembicRecorder_CapturerRecord : public ::System::Object
	{
	public:
		::System::Type* type; // 0x10
		::System::Boolean enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURERRECORD__CTOR_OFFSET))(this);
		}
	};
}
