#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Util/ComponentCapturer.h"

namespace UnityEngine { class Cloth; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_ClothBuffer; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_MeshBuffer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x1B1A3CA0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B1A40B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER_SETUP_OFFSET UNITYSDK_OFFSET(0x1B1A3910)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1A4110)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_SkinnedMeshCapturer_TypeDefinitionIndex = 42452;

	class AlembicRecorder_SkinnedMeshCapturer : public ::UnityEngine::Formats::Alembic::Util::ComponentCapturer
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* m_target; // 0x30
		::UnityEngine::Mesh* m_meshSrc; // 0x38
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_MeshBuffer* m_mbuf; // 0x40
		::UnityEngine::Cloth* m_cloth; // 0x48
		::UnityEngine::Mesh* m_meshBake; // 0x50
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_ClothBuffer* m_cbuf; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER_SETUP_OFFSET))(this, a1);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER_CAPTURE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SKINNEDMESHCAPTURER_DISPOSE_OFFSET))(this);
		}
	};
}
