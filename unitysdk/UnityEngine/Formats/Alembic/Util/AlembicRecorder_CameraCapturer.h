#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/CameraData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x1EAB9A60)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1EAB99A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1EAB9830)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB9BA0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_CameraCapturer_TypeDefinitionIndex = 44632;

	class AlembicRecorder_CameraCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::Camera* m_target; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::CameraData m_data; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Capture_1(::UnityEngine::Formats::Alembic::Sdk::CameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAMERACAPTURER_CAPTURE_1_OFFSET))(this, a1);
		}
	};
}
