#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFEEF0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_OFFSET UNITYSDK_OFFSET(0x3ACCCC0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFEEB0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x3ACCC90)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFEEC0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_OFFSET UNITYSDK_OFFSET(0x3ACCCA0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_DONE_OFFSET UNITYSDK_OFFSET(0x3ACCC70)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_HASERROR_OFFSET UNITYSDK_OFFSET(0x3ACCC80)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x3ACCC90)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_LAYERDATASIZE_OFFSET UNITYSDK_OFFSET(0x3ACCCA0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFEEA0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_OFFSET UNITYSDK_OFFSET(0x3ACCC80)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFEE90)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_OFFSET UNITYSDK_OFFSET(0x3ACCC70)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDFEED0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x3ACCCB0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncGPUReadbackRequest_TypeDefinitionIndex = 4673;

	struct alignas(8) AsyncGPUReadbackRequest
	{
		::System::IntPtr m_Ptr; // 0x10
		::System::Int32 m_Version; // 0x18

		::System::Boolean get_done()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_DONE_OFFSET))(this);
		}

		::System::Boolean get_hasError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_HASERROR_OFFSET))(this);
		}

		::System::Int32 get_layerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_LAYERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_layerDataSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_LAYERDATASIZE_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_OFFSET))(this);
		}

		::System::Boolean HasError()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_OFFSET))(this);
		}

		::System::Int32 GetLayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetLayerDataSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_OFFSET))(this);
		}

		::System::Void SetScriptingCallback(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_OFFSET))(this, a1);
		}

		::System::IntPtr GetDataRaw(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_OFFSET))(this, a1);
		}

		static ::System::Boolean IsDone_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_INJECTED_OFFSET))(a1);
		}

		static ::System::Boolean HasError_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_INJECTED_OFFSET))(a1);
		}

		static ::System::Int32 GetLayerCount_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_INJECTED_OFFSET))(a1);
		}

		static ::System::Int32 GetLayerDataSize_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_INJECTED_OFFSET))(a1);
		}

		static ::System::Void SetScriptingCallback_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& a1, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetDataRaw_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_INJECTED_OFFSET))(a1, a2);
		}
	};
}
