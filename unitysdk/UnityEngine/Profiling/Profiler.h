#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_PROFILING_PROFILER_ENDTHREADPROFILING_OFFSET UNITYSDK_OFFSET(0x1D676AA0)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET UNITYSDK_OFFSET(0x1D676AC0)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET UNITYSDK_OFFSET(0x1D676AD0)
#define UNITYENGINE_PROFILING_PROFILER_GETNAPASSETMEMSTATS_OFFSET UNITYSDK_OFFSET(0x1D676B80)
#define UNITYENGINE_PROFILING_PROFILER_GETNAPENGINESTATS_OFFSET UNITYSDK_OFFSET(0x1D676B70)
#define UNITYENGINE_PROFILING_PROFILER_GETOBJECTMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1D676B90)
#define UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET UNITYSDK_OFFSET(0x1D676AB0)
#define UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_1_OFFSET UNITYSDK_OFFSET(0x1D676AF0)
#define UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_OFFSET UNITYSDK_OFFSET(0x1D676AE0)
#define UNITYENGINE_PROFILING_PROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D676BA0)
#define UNITYENGINE_PROFILING_PROFILER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D676A90)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Profiler_TypeDefinitionIndex = 5432;

	class Profiler : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_EnableSampleCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Profiler_TypeDefinitionIndex)->GetStaticField(0x2EC0);
		}
		static ::System::Int32* StaticGet_MainThreadID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Profiler_TypeDefinitionIndex)->GetStaticField(0x2EC4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER__CCTOR_OFFSET))();
		}

		static ::System::Void EndThreadProfiling()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_ENDTHREADPROFILING_OFFSET))();
		}

		static ::System::Int64 GetRuntimeMemorySizeLong(::UnityEngine::Object* o)
		{
			return ((::System::Int64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET))(o);
		}

		static ::System::Int64 GetMonoHeapSizeLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET))();
		}

		static ::System::Int64 GetMonoUsedSizeLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET))();
		}

		static ::System::Void GetSystemMemoryUsedAndTotalLongSize(::System::UInt64* values)
		{
			return ((::System::Void(*)(::System::UInt64*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_OFFSET))(values);
		}

		static ::System::Void GetSystemMemoryUsedAndTotalLongSize_1(::Il2CppArray<::System::UInt64>* values)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETSYSTEMMEMORYUSEDANDTOTALLONGSIZE_1_OFFSET))(values);
		}

		static ::System::String* GetNapEngineStats()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETNAPENGINESTATS_OFFSET))();
		}

		static ::System::String* GetNapAssetMemStats()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETNAPASSETMEMSTATS_OFFSET))();
		}

		static ::System::UInt32 GetObjectMemorySize(::System::Object* obj)
		{
			return ((::System::UInt32(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETOBJECTMEMORYSIZE_OFFSET))(obj);
		}
	};
}
