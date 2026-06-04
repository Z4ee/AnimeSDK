#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_MeshBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B04C4B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B04C6E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1B04C2A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B04C6F0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshCapturer_TypeDefinitionIndex = 41591;

	class AlembicRecorder_MeshCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* m_mbuf; // 0x30
		::UnityEngine::MeshRenderer* m_target; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_DISPOSE_OFFSET))(this);
		}
	};
}
