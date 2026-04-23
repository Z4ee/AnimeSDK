#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeObject.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1A1E7EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1A1E7EE0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E3E30)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_RootCapturer_TypeDefinitionIndex = 40762;

	class AlembicRecorder_RootCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::System::Void _ctor(::UnityEngine::Formats::Alembic::Util::AlembicRecorder* rec, ::UnityEngine::Formats::Alembic::Sdk::aeObject abc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder*, ::UnityEngine::Formats::Alembic::Sdk::aeObject))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER__CTOR_OFFSET))(this, rec, abc);
		}

		::System::Void Setup(::UnityEngine::Component* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_SETUP_OFFSET))(this, c);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ROOTCAPTURER_CAPTURE_OFFSET))(this);
		}
	};
}
