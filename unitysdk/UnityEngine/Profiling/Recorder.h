#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_PROFILING_RECORDER_DISPOSENATIVE_OFFSET UNITYSDK_OFFSET(0x1B746C10)
#define UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B746B60)
#define UNITYENGINE_PROFILING_RECORDER_GETELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x1B746C50)
#define UNITYENGINE_PROFILING_RECORDER_GETSAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B746C80)
#define UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x1B746C30)
#define UNITYENGINE_PROFILING_RECORDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1B746C20)
#define UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B746C60)
#define UNITYENGINE_PROFILING_RECORDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B746C90)
#define UNITYENGINE_PROFILING_RECORDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B746B50)
#define UNITYENGINE_PROFILING_RECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B746B40)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Recorder_TypeDefinitionIndex = 5433;

	class Recorder : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::Recorder** StaticGet_s_InvalidRecorder()
		{
			return (::UnityEngine::Profiling::Recorder**)Il2CppClass::FromTypeDefinitionIndex(Recorder_TypeDefinitionIndex)->GetStaticField(0x5440);
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
