#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_TransformCapturer; }
namespace UnityEngine::Formats::Alembic::Util { class ComponentCapturer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURENODE_CAPTURE_OFFSET UNITYSDK_OFFSET(0x187AA050)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURENODE_MARKFORCEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x187A9F50)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x187A90C0)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_CaptureNode_TypeDefinitionIndex = 34940;

	class AlembicRecorder_CaptureNode : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::UnityEngine::Formats::Alembic::Util::ComponentCapturer* componentCapturer; // 0x18
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_TransformCapturer* transformCapturer; // 0x20
		::System::Type* componentType; // 0x28
		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode* parent; // 0x30
		::System::Boolean setup; // 0x38
		::System::Int32 instanceID; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURENODE__CTOR_OFFSET))(this);
		}

		::System::Void MarkForceInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURENODE_MARKFORCEINVISIBLE_OFFSET))(this);
		}

		::System::Void Capture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CAPTURENODE_CAPTURE_OFFSET))(this);
		}
	};
}
