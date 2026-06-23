#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E8F0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_OFFSET UNITYSDK_OFFSET(0x9F52C0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E8A0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9F5290)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E8B0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_OFFSET UNITYSDK_OFFSET(0x9F52A0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_DONE_OFFSET UNITYSDK_OFFSET(0x9F5270)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_HASERROR_OFFSET UNITYSDK_OFFSET(0x9F5280)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x9F5290)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GET_LAYERDATASIZE_OFFSET UNITYSDK_OFFSET(0x9F52A0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E890)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_OFFSET UNITYSDK_OFFSET(0x9F5280)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E880)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_OFFSET UNITYSDK_OFFSET(0x9F5270)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E8D0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_OFFSET UNITYSDK_OFFSET(0x9F52B0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_WAITFORCOMPLETION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D58E7F0)
#define UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9F5260)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncGPUReadbackRequest_TypeDefinitionIndex = 6135;

	struct alignas(8) AsyncGPUReadbackRequest
	{
		::System::IntPtr m_Ptr; // 0x10
		::System::Int32 m_Version; // 0x18

		::System::Void WaitForCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_WAITFORCOMPLETION_OFFSET))(this);
		}

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

		::System::Void SetScriptingCallback(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_OFFSET))(this, callback);
		}

		::System::IntPtr GetDataRaw(::System::Int32 layer)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_OFFSET))(this, layer);
		}

		static ::System::Void WaitForCompletion_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_WAITFORCOMPLETION_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean IsDone_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_ISDONE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean HasError_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_HASERROR_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 GetLayerCount_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Int32 GetLayerDataSize_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETLAYERDATASIZE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void SetScriptingCallback_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_SETSCRIPTINGCALLBACK_INJECTED_OFFSET))(_unity_self, callback);
		}

		static ::System::IntPtr GetDataRaw_Injected(::UnityEngine::Rendering::AsyncGPUReadbackRequest& _unity_self, ::System::Int32 layer)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ASYNCGPUREADBACKREQUEST_GETDATARAW_INJECTED_OFFSET))(_unity_self, layer);
		}
	};
}
