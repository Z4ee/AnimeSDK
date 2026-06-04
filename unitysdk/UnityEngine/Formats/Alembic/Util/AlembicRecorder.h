#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aeContext.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorderSettings; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_CaptureNode; }
namespace UnityEngine::Formats::Alembic::Util { class AlembicRecorder_CapturerRecord; }
namespace UnityEngine::Formats::Alembic::Util { class ComponentCapturer; }

#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_BEGINRECORDING_OFFSET UNITYSDK_OFFSET(0x1B02CB80)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CONSTRUCTTREE_OFFSET UNITYSDK_OFFSET(0x1B0475A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B02E290)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ENDRECORDING_OFFSET UNITYSDK_OFFSET(0x1B02D440)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GETCURRENTTIMESAMPLINGINDEX_OFFSET UNITYSDK_OFFSET(0x1B0474F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GETTARGETS_OFFSET UNITYSDK_OFFSET(0x1B0472C0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1B0472A0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_RECORDING_OFFSET UNITYSDK_OFFSET(0x1B047290)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1B0471B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_TARGETBRANCH_OFFSET UNITYSDK_OFFSET(0x1B0471D0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PROCESSRECORDING_OFFSET UNITYSDK_OFFSET(0x1B02D5F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SETUPCAPTURERTABLE_OFFSET UNITYSDK_OFFSET(0x1B0477B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SETUPCOMPONENTCAPTURER_OFFSET UNITYSDK_OFFSET(0x1B047DF0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1B0472B0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1B0471C0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SET_TARGETBRANCH_OFFSET UNITYSDK_OFFSET(0x1B047230)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_UPDATECAPTURENODES_OFFSET UNITYSDK_OFFSET(0x1B0484F0)
#define UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B02E370)

namespace UnityEngine::Formats::Alembic::Util
{
	inline static constexpr unsigned int AlembicRecorder_TypeDefinitionIndex = 41580;

	class AlembicRecorder : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* m_settings; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aeContext m_ctx; // 0x18
		::UnityEngine::Formats::Alembic::Util::ComponentCapturer* m_root; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode*>* m_nodes; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode*>* m_newNodes; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* m_iidToRemove; // 0x38
		::System::Int32 m_lastTimeSamplingIndex; // 0x40
		::System::Int32 m_startFrameOfLastTimeSampling; // 0x44
		::System::Boolean m_recording; // 0x48
		::System::Single m_time; // 0x4C
		::System::Single m_timePrev; // 0x50
		::System::Single m_elapsed; // 0x54
		::System::Int32 m_frameCount; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CapturerRecord*>* m_capturerTable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* get_Settings()
		{
			return ((::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_Settings(::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Util::AlembicRecorderSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SET_SETTINGS_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_TargetBranch()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_TARGETBRANCH_OFFSET))(this);
		}

		::System::Void set_TargetBranch(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SET_TARGETBRANCH_OFFSET))(this, a1);
		}

		::System::Boolean get_Recording()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_RECORDING_OFFSET))(this);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Void set_FrameCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SET_FRAMECOUNT_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Component*>* GetTargets(::System::Type* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Component*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GETTARGETS_OFFSET))(this, a1);
		}

		::System::Int32 GetCurrentTimeSamplingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_GETCURRENTTIMESAMPLINGINDEX_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode* ConstructTree(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_CONSTRUCTTREE_OFFSET))(this, a1);
		}

		::System::Void SetupCapturerTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SETUPCAPTURERTABLE_OFFSET))(this);
		}

		::System::Void SetupComponentCapturer(::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Util::AlembicRecorder_CaptureNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_SETUPCOMPONENTCAPTURER_OFFSET))(this, a1);
		}

		::System::Void UpdateCaptureNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_UPDATECAPTURENODES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean BeginRecording()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_BEGINRECORDING_OFFSET))(this);
		}

		::System::Void EndRecording()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_ENDRECORDING_OFFSET))(this);
		}

		::System::Void ProcessRecording()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_UTIL_ALEMBICRECORDER_PROCESSRECORDING_OFFSET))(this);
		}
	};
}
