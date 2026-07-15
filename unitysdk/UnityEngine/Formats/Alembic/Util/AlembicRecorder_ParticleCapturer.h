#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePointsData.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Component; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedList_1; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B1A34F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1A3840)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1B1A33E0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A3880)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_ParticleCapturer_TypeDefinitionIndex = 42453;

	class AlembicRecorder_ParticleCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* m_bufParticles; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Quaternion>* m_bufRotations; // 0x38
		::UnityEngine::ParticleSystem* m_target; // 0x40
		::UnityEngine::Formats::Alembic::Sdk::PinnedList_1<::UnityEngine::Vector3>* m_bufPoints; // 0x48
		::UnityEngine::Formats::Alembic::Sdk::aePointsData m_data; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PARTICLECAPTURER_DISPOSE_OFFSET))(this);
		}
	};
}
