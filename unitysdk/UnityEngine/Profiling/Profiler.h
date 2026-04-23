#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnyTuple2.h"
#include "unitysdk/UnityEngine/AnyTuple3.h"
#include "unitysdk/UnityEngine/AnyTuple4.h"
#include "unitysdk/UnityEngine/AnyType.h"
#include "unitysdk/UnityEngine/Profiling/RendererType.h"

namespace System { class String; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE2_OFFSET UNITYSDK_OFFSET(0x1A468570)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE3_OFFSET UNITYSDK_OFFSET(0x1A4685E0)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE4_OFFSET UNITYSDK_OFFSET(0x1A468670)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A468720)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_OFFSET UNITYSDK_OFFSET(0x1A4685D0)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A468730)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_OFFSET UNITYSDK_OFFSET(0x1A468660)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A468740)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_OFFSET UNITYSDK_OFFSET(0x1A468710)
#define UNITYENGINE_PROFILING_PROFILER_GETCURRENTTHREADNAME_OFFSET UNITYSDK_OFFSET(0x1A468870)
#define UNITYENGINE_PROFILING_PROFILER_GETGFXTEXMEMORYINFO_OFFSET UNITYSDK_OFFSET(0x1A468860)
#define UNITYENGINE_PROFILING_PROFILER_GETGFXTOTALBATCHCALLS_OFFSET UNITYSDK_OFFSET(0x1A468790)
#define UNITYENGINE_PROFILING_PROFILER_GETGFXTOTALTRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1A4687A0)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET UNITYSDK_OFFSET(0x1A468820)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET UNITYSDK_OFFSET(0x1A468830)
#define UNITYENGINE_PROFILING_PROFILER_GETRENDERERBATCHCALLS_OFFSET UNITYSDK_OFFSET(0x1A468760)
#define UNITYENGINE_PROFILING_PROFILER_GETRENDERERVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A468770)
#define UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET UNITYSDK_OFFSET(0x1A468750)
#define UNITYENGINE_PROFILING_PROFILER_GETTOTALALLOCATEDMEMORYLONG_OFFSET UNITYSDK_OFFSET(0x1A468840)
#define UNITYENGINE_PROFILING_PROFILER_GETTOTALRESERVEDMEMORYLONG_OFFSET UNITYSDK_OFFSET(0x1A468850)
#define UNITYENGINE_PROFILING_PROFILER_GETVISIBLERATIO_OFFSET UNITYSDK_OFFSET(0x1A468810)
#define UNITYENGINE_PROFILING_PROFILER_GETWAITCLIENTTIME_OFFSET UNITYSDK_OFFSET(0x1A468780)
#define UNITYENGINE_PROFILING_PROFILER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A468550)
#define UNITYENGINE_PROFILING_PROFILER_GET_SUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A468540)
#define UNITYENGINE_PROFILING_PROFILER_INITVISRATIO_OFFSET UNITYSDK_OFFSET(0x1A4687F0)
#define UNITYENGINE_PROFILING_PROFILER_SETDEFAULTPSPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1A4687D0)
#define UNITYENGINE_PROFILING_PROFILER_SETFILTERLAYERS_OFFSET UNITYSDK_OFFSET(0x1A4687E0)
#define UNITYENGINE_PROFILING_PROFILER_SETQUERYENABLE_OFFSET UNITYSDK_OFFSET(0x1A468800)
#define UNITYENGINE_PROFILING_PROFILER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A468560)
#define UNITYENGINE_PROFILING_PROFILER_STARTRUNTIMEPROFILER_OFFSET UNITYSDK_OFFSET(0x1A4687B0)
#define UNITYENGINE_PROFILING_PROFILER_STOPRUNTIMEPROFILER_OFFSET UNITYSDK_OFFSET(0x1A4687C0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Profiler_TypeDefinitionIndex = 4323;

	class Profiler : public ::System::Object
	{
	public:
		static ::System::Boolean get_supported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GET_SUPPORTED_OFFSET))();
		}

		static ::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GET_ENABLED_OFFSET))();
		}

		static ::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SET_ENABLED_OFFSET))(value);
		}

		static ::System::Void BeginSample2(::System::String* format, ::UnityEngine::AnyType arg1, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::AnyType, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE2_OFFSET))(format, arg1, targetObject);
		}

		static ::System::Void BeginSample3(::System::String* format, ::UnityEngine::AnyType arg1, ::UnityEngine::AnyType arg2, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE3_OFFSET))(format, arg1, arg2, targetObject);
		}

		static ::System::Void BeginSample4(::System::String* format, ::UnityEngine::AnyType arg1, ::UnityEngine::AnyType arg2, ::UnityEngine::AnyType arg3, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE4_OFFSET))(format, arg1, arg2, arg3, targetObject);
		}

		static ::System::Void BeginSampleWithTuple2Impl(::UnityEngine::AnyTuple2 name, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple2, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_OFFSET))(name, targetObject);
		}

		static ::System::Void BeginSampleWithTuple3Impl(::UnityEngine::AnyTuple3 name, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple3, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_OFFSET))(name, targetObject);
		}

		static ::System::Void BeginSampleWithTuple4Impl(::UnityEngine::AnyTuple4 name, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple4, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_OFFSET))(name, targetObject);
		}

		static ::System::Int64 GetRuntimeMemorySizeLong(::UnityEngine::Object* o)
		{
			return ((::System::Int64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET))(o);
		}

		static ::System::Int32 GetRendererBatchCalls(::UnityEngine::Profiling::RendererType renderType)
		{
			return ((::System::Int32(*)(::UnityEngine::Profiling::RendererType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRENDERERBATCHCALLS_OFFSET))(renderType);
		}

		static ::System::Int32 GetRendererVertexCount(::UnityEngine::Profiling::RendererType renderType)
		{
			return ((::System::Int32(*)(::UnityEngine::Profiling::RendererType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRENDERERVERTEXCOUNT_OFFSET))(renderType);
		}

		static ::System::Single GetWaitClientTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETWAITCLIENTTIME_OFFSET))();
		}

		static ::System::Int32 GetGfxTotalBatchCalls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETGFXTOTALBATCHCALLS_OFFSET))();
		}

		static ::System::Int32 GetGfxTotalTriangleCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETGFXTOTALTRIANGLECOUNT_OFFSET))();
		}

		static ::System::Void StartRuntimeProfiler()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_STARTRUNTIMEPROFILER_OFFSET))();
		}

		static ::System::Void StopRuntimeProfiler()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_STOPRUNTIMEPROFILER_OFFSET))();
		}

		static ::System::Void SetDefaultPSProfileType(::System::UInt32 profileType)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SETDEFAULTPSPROFILETYPE_OFFSET))(profileType);
		}

		static ::System::Void SetFilterLayers(::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SETFILTERLAYERS_OFFSET))(id);
		}

		static ::System::Void InitVisRatio(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_INITVISRATIO_OFFSET))(count);
		}

		static ::System::Void SetQueryEnable(::System::UInt32 type, ::System::Boolean enable, ::System::UInt32 queryEvent, ::System::Int32 cameraType)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SETQUERYENABLE_OFFSET))(type, enable, queryEvent, cameraType);
		}

		static ::System::Single GetVisibleRatio(::System::UInt32 type, ::System::Int32 cameraType)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETVISIBLERATIO_OFFSET))(type, cameraType);
		}

		static ::System::Int64 GetMonoHeapSizeLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET))();
		}

		static ::System::Int64 GetMonoUsedSizeLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET))();
		}

		static ::System::Int64 GetTotalAllocatedMemoryLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETTOTALALLOCATEDMEMORYLONG_OFFSET))();
		}

		static ::System::Int64 GetTotalReservedMemoryLong()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETTOTALRESERVEDMEMORYLONG_OFFSET))();
		}

		static ::System::String* GetGfxTexMemoryInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETGFXTEXMEMORYINFO_OFFSET))();
		}

		static ::System::String* GetCurrentThreadName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETCURRENTTHREADNAME_OFFSET))();
		}

		static ::System::Void BeginSampleWithTuple2Impl_Injected(::UnityEngine::AnyTuple2& name, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple2&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_INJECTED_OFFSET))(name, targetObject);
		}

		static ::System::Void BeginSampleWithTuple3Impl_Injected(::UnityEngine::AnyTuple3& name, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple3&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_INJECTED_OFFSET))(name, targetObject);
		}

		static ::System::Void BeginSampleWithTuple4Impl_Injected(::UnityEngine::AnyTuple4& name, ::UnityEngine::Object* targetObject)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple4&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_INJECTED_OFFSET))(name, targetObject);
		}
	};
}
