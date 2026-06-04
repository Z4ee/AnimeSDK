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

#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE2_OFFSET UNITYSDK_OFFSET(0x1B2B8250)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE3_OFFSET UNITYSDK_OFFSET(0x1B2B82C0)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE4_OFFSET UNITYSDK_OFFSET(0x1B2B8350)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B8400)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_OFFSET UNITYSDK_OFFSET(0x1B2B82B0)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B8410)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_OFFSET UNITYSDK_OFFSET(0x1B2B8340)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2B8420)
#define UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_OFFSET UNITYSDK_OFFSET(0x1B2B83F0)
#define UNITYENGINE_PROFILING_PROFILER_GETCURRENTTHREADNAME_OFFSET UNITYSDK_OFFSET(0x1B2B8550)
#define UNITYENGINE_PROFILING_PROFILER_GETGFXTEXMEMORYINFO_OFFSET UNITYSDK_OFFSET(0x1B2B8540)
#define UNITYENGINE_PROFILING_PROFILER_GETGFXTOTALBATCHCALLS_OFFSET UNITYSDK_OFFSET(0x1B2B8470)
#define UNITYENGINE_PROFILING_PROFILER_GETGFXTOTALTRIANGLECOUNT_OFFSET UNITYSDK_OFFSET(0x1B2B8480)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOHEAPSIZELONG_OFFSET UNITYSDK_OFFSET(0x1B2B8500)
#define UNITYENGINE_PROFILING_PROFILER_GETMONOUSEDSIZELONG_OFFSET UNITYSDK_OFFSET(0x1B2B8510)
#define UNITYENGINE_PROFILING_PROFILER_GETRENDERERBATCHCALLS_OFFSET UNITYSDK_OFFSET(0x1B2B8440)
#define UNITYENGINE_PROFILING_PROFILER_GETRENDERERVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2B8450)
#define UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET UNITYSDK_OFFSET(0x1B2B8430)
#define UNITYENGINE_PROFILING_PROFILER_GETTOTALALLOCATEDMEMORYLONG_OFFSET UNITYSDK_OFFSET(0x1B2B8520)
#define UNITYENGINE_PROFILING_PROFILER_GETTOTALRESERVEDMEMORYLONG_OFFSET UNITYSDK_OFFSET(0x1B2B8530)
#define UNITYENGINE_PROFILING_PROFILER_GETVISIBLERATIO_OFFSET UNITYSDK_OFFSET(0x1B2B84F0)
#define UNITYENGINE_PROFILING_PROFILER_GETWAITCLIENTTIME_OFFSET UNITYSDK_OFFSET(0x1B2B8460)
#define UNITYENGINE_PROFILING_PROFILER_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B2B8230)
#define UNITYENGINE_PROFILING_PROFILER_GET_SUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B2B8220)
#define UNITYENGINE_PROFILING_PROFILER_INITVISRATIO_OFFSET UNITYSDK_OFFSET(0x1B2B84D0)
#define UNITYENGINE_PROFILING_PROFILER_SETDEFAULTPSPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1B2B84B0)
#define UNITYENGINE_PROFILING_PROFILER_SETFILTERLAYERS_OFFSET UNITYSDK_OFFSET(0x1B2B84C0)
#define UNITYENGINE_PROFILING_PROFILER_SETQUERYENABLE_OFFSET UNITYSDK_OFFSET(0x1B2B84E0)
#define UNITYENGINE_PROFILING_PROFILER_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B2B8240)
#define UNITYENGINE_PROFILING_PROFILER_STARTRUNTIMEPROFILER_OFFSET UNITYSDK_OFFSET(0x1B2B8490)
#define UNITYENGINE_PROFILING_PROFILER_STOPRUNTIMEPROFILER_OFFSET UNITYSDK_OFFSET(0x1B2B84A0)

namespace UnityEngine::Profiling
{
	inline static constexpr unsigned int Profiler_TypeDefinitionIndex = 4497;

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

		static ::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SET_ENABLED_OFFSET))(a1);
		}

		static ::System::Void BeginSample2(::System::String* a1, ::UnityEngine::AnyType a2, ::UnityEngine::Object* a3)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::AnyType, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BeginSample3(::System::String* a1, ::UnityEngine::AnyType a2, ::UnityEngine::AnyType a3, ::UnityEngine::Object* a4)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void BeginSample4(::System::String* a1, ::UnityEngine::AnyType a2, ::UnityEngine::AnyType a3, ::UnityEngine::AnyType a4, ::UnityEngine::Object* a5)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::AnyType, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLE4_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void BeginSampleWithTuple2Impl(::UnityEngine::AnyTuple2 a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple2, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_OFFSET))(a1, a2);
		}

		static ::System::Void BeginSampleWithTuple3Impl(::UnityEngine::AnyTuple3 a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple3, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_OFFSET))(a1, a2);
		}

		static ::System::Void BeginSampleWithTuple4Impl(::UnityEngine::AnyTuple4 a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple4, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetRuntimeMemorySizeLong(::UnityEngine::Object* a1)
		{
			return ((::System::Int64(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRUNTIMEMEMORYSIZELONG_OFFSET))(a1);
		}

		static ::System::Int32 GetRendererBatchCalls(::UnityEngine::Profiling::RendererType a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Profiling::RendererType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRENDERERBATCHCALLS_OFFSET))(a1);
		}

		static ::System::Int32 GetRendererVertexCount(::UnityEngine::Profiling::RendererType a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Profiling::RendererType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETRENDERERVERTEXCOUNT_OFFSET))(a1);
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

		static ::System::Void SetDefaultPSProfileType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SETDEFAULTPSPROFILETYPE_OFFSET))(a1);
		}

		static ::System::Void SetFilterLayers(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SETFILTERLAYERS_OFFSET))(a1);
		}

		static ::System::Void InitVisRatio(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_INITVISRATIO_OFFSET))(a1);
		}

		static ::System::Void SetQueryEnable(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_SETQUERYENABLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetVisibleRatio(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_GETVISIBLERATIO_OFFSET))(a1, a2);
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

		static ::System::Void BeginSampleWithTuple2Impl_Injected(::UnityEngine::AnyTuple2& a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple2&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE2IMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void BeginSampleWithTuple3Impl_Injected(::UnityEngine::AnyTuple3& a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple3&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE3IMPL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void BeginSampleWithTuple4Impl_Injected(::UnityEngine::AnyTuple4& a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::UnityEngine::AnyTuple4&, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROFILING_PROFILER_BEGINSAMPLEWITHTUPLE4IMPL_INJECTED_OFFSET))(a1, a2);
		}
	};
}
