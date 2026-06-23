#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_PROFILING_RECORDER_DISPOSENATIVE_OFFSET UNITYSDK_OFFSET(0x1DA9B2D0)
#define UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DA9B220)
#define UNITYENGINE_PROFILING_RECORDER_GETELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x1DA9B310)
#define UNITYENGINE_PROFILING_RECORDER_GETSAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA9B340)
#define UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x1DA9B2F0)
#define UNITYENGINE_PROFILING_RECORDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DA9B2E0)
#define UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1DA9B320)
#define UNITYENGINE_PROFILING_RECORDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA9B350)
#define UNITYENGINE_PROFILING_RECORDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DA9B210)
#define UNITYENGINE_PROFILING_RECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9B200)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Recorder_TypeDefinitionIndex = 5433;

	class Recorder : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::Recorder** StaticGet_s_InvalidRecorder()
		{
			return (::UnityEngine::Profiling::Recorder**)Il2CppClass::FromTypeDefinitionIndex(Recorder_TypeDefinitionIndex)->GetStaticField(0x5460);
		}
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER__CTOR_1_OFFSET))(this, ptr);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET))(this);
		}

		::System::Boolean get_isValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_ISVALID_OFFSET))(this);
		}

		static ::System::Void DisposeNative(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_DISPOSENATIVE_OFFSET))(ptr);
		}

		::System::Int64 get_elapsedNanoseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET))(this);
		}

		::System::Int64 GetElapsedNanoseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GETELAPSEDNANOSECONDS_OFFSET))(this);
		}

		::System::Int32 get_sampleBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET))(this);
		}

		::System::Int32 GetSampleBlockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GETSAMPLEBLOCKCOUNT_OFFSET))(this);
		}
	};
}
