#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeXformData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_1_OFFSET UNITYSDK_OFFSET(0x187AE9B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x187AA5D0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x187A9980)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREPOSITION_OFFSET UNITYSDK_OFFSET(0x187AE980)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREROTATION_OFFSET UNITYSDK_OFFSET(0x187AE990)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTURESCALE_OFFSET UNITYSDK_OFFSET(0x187AE9A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INHERITS_OFFSET UNITYSDK_OFFSET(0x187AE960)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INVERTFORWARD_OFFSET UNITYSDK_OFFSET(0x187AE970)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x187A9970)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_TransformCapturer_TypeDefinitionIndex = 34935;

	class AlembicRecorder_TransformCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::Transform* m_target; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::aeXformData m_data; // 0x38
		::System::Boolean m_invertForward; // 0x68
		::System::Boolean m_captureScale; // 0x69
		::System::Boolean m_inherits; // 0x6A
		::System::Boolean m_captureRotation; // 0x6B
		::System::Boolean m_capturePosition; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void set_inherits(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INHERITS_OFFSET))(this, value);
		}

		::System::Void set_invertForward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_INVERTFORWARD_OFFSET))(this, value);
		}

		::System::Void set_capturePosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREPOSITION_OFFSET))(this, value);
		}

		::System::Void set_captureRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTUREROTATION_OFFSET))(this, value);
		}

		::System::Void set_captureScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SET_CAPTURESCALE_OFFSET))(this, value);
		}

		::System::Void Setup(::UnityEngine::Component* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_SETUP_OFFSET))(this, c);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Capture_1(::UnityEngine::Formats::Alembic::Sdk::aeXformData& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_TRANSFORMCAPTURER_CAPTURE_1_OFFSET))(this, dst);
		}
	};
}
