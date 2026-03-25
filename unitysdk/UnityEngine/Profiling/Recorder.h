#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_PROFILING_RECORDER_DISPOSENATIVE_OFFSET UNITYSDK_OFFSET(0x18A2EA40)
#define UNITYENGINE_PROFILING_RECORDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18A2E9B0)
#define UNITYENGINE_PROFILING_RECORDER_GETELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x18A2EB00)
#define UNITYENGINE_PROFILING_RECORDER_GETINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A2EAC0)
#define UNITYENGINE_PROFILING_RECORDER_GETSAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x18A2EB30)
#define UNITYENGINE_PROFILING_RECORDER_GET_ELAPSEDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x18A2EAE0)
#define UNITYENGINE_PROFILING_RECORDER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18A2EAD0)
#define UNITYENGINE_PROFILING_RECORDER_GET_OFFSET UNITYSDK_OFFSET(0x18A2EA50)
#define UNITYENGINE_PROFILING_RECORDER_GET_SAMPLEBLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x18A2EB10)
#define UNITYENGINE_PROFILING_RECORDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A2EB40)
#define UNITYENGINE_PROFILING_RECORDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A2E9A0)
#define UNITYENGINE_PROFILING_RECORDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2E990)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Recorder_TypeDefinitionIndex = 4322;

	class Recorder : public ::System::Object
	{
	public:
		static ::UnityEngine::Profiling::Recorder** StaticGet_s_InvalidRecorder()
		{
			return (::UnityEngine::Profiling::Recorder**)Il2CppClass::FromTypeDefinitionIndex(Recorder_TypeDefinitionIndex)->GetStaticField(0x12EF0);
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

		static ::UnityEngine::Profiling::Recorder* Get(::System::String* samplerName)
		{
			return ((::UnityEngine::Profiling::Recorder*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GET_OFFSET))(samplerName);
		}

		static ::System::IntPtr GetInternal(::System::String* samplerName)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_RECORDER_GETINTERNAL_OFFSET))(samplerName);
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
