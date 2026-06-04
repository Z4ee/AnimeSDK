#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeXformData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x1B04D740)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B048EA0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1B0482A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREPOSITION_OFFSET UNITYSDK_OFFSET(0x1B04D710)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREROTATION_OFFSET UNITYSDK_OFFSET(0x1B04D720)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTURESCALE_OFFSET UNITYSDK_OFFSET(0x1B04D730)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INHERITS_OFFSET UNITYSDK_OFFSET(0x1B04D6F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INVERTFORWARD_OFFSET UNITYSDK_OFFSET(0x1B04D700)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B048290)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_TransformCapturer_TypeDefinitionIndex = 41589;

	class AlembicRecorder_TransformCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::Transform* m_target; // 0x30
		::System::Boolean m_capturePosition; // 0x38
		::System::Boolean m_captureScale; // 0x39
		::UnityEngine::Formats::Alembic::Sdk::aeXformData m_data; // 0x3C
		::System::Boolean m_inherits; // 0x6C
		::System::Boolean m_captureRotation; // 0x6D
		::System::Boolean m_invertForward; // 0x6E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void set_inherits(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INHERITS_OFFSET))(this, a1);
		}

		::System::Void set_invertForward(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INVERTFORWARD_OFFSET))(this, a1);
		}

		::System::Void set_capturePosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_captureRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREROTATION_OFFSET))(this, a1);
		}

		::System::Void set_captureScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTURESCALE_OFFSET))(this, a1);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Capture_1(::UnityEngine::Formats::Alembic::Sdk::aeXformData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_1_OFFSET))(this, a1);
		}
	};
}
