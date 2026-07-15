#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B1A3900)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1B1A38F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19F8E0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_RootCapturer_TypeDefinitionIndex = 42448;

	class AlembicRecorder_RootCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::System::Void _ctor(::UnityEngine::Formats::Alembic::Util::AlembicRecorder* a1, ::UnityEngine::Formats::Alembic::Sdk::aeObject a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder*, ::UnityEngine::Formats::Alembic::Sdk::aeObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_CAPTURE_OFFSET))(this);
		}
	};
}
