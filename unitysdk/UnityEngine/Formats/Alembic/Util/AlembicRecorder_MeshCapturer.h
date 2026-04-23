#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_MeshBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1A1E7680)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1E78B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1A1E7470)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E78C0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_MeshCapturer_TypeDefinitionIndex = 40765;

	class AlembicRecorder_MeshCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::MeshRenderer* m_target; // 0x30
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* m_mbuf; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Component* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_MESHCAPTURER_SETUP_OFFSET))(this, c);
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
