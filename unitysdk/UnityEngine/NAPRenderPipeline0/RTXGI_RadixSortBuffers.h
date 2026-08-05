#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DATANUM_OFFSET UNITYSDK_OFFSET(0x1EA6FD40)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHARGS_OFFSET UNITYSDK_OFFSET(0x1EA6FDE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHIDX_OFFSET UNITYSDK_OFFSET(0x1EA6FDA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_GROUPSUMS_OFFSET UNITYSDK_OFFSET(0x1EA6FD80)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SCANGROUPPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1EA6FDC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SWAPDATA_OFFSET UNITYSDK_OFFSET(0x1EA6FD60)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_INIT_OFFSET UNITYSDK_OFFSET(0x1EA6F9F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EA6EF30)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DATANUM_OFFSET UNITYSDK_OFFSET(0x1EA6FD50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHARGS_OFFSET UNITYSDK_OFFSET(0x1EA6FDF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHIDX_OFFSET UNITYSDK_OFFSET(0x1EA6FDB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_GROUPSUMS_OFFSET UNITYSDK_OFFSET(0x1EA6FD90)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SCANGROUPPAYLOAD_OFFSET UNITYSDK_OFFSET(0x1EA6FDD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SWAPDATA_OFFSET UNITYSDK_OFFSET(0x1EA6FD70)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SWAPDATA_OFFSET UNITYSDK_OFFSET(0x1EA6FE00)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6FD30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTXGI_RadixSortBuffers_TypeDefinitionIndex = 5800;

	class RTXGI_RadixSortBuffers : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* _dataNum_k__BackingField; // 0x10
		::UnityEngine::ComputeBuffer* _swapData_k__BackingField; // 0x18
		::UnityEngine::ComputeBuffer* _groupSums_k__BackingField; // 0x20
		::UnityEngine::ComputeBuffer* _dispatchIdx_k__BackingField; // 0x28
		::UnityEngine::ComputeBuffer* _scanGroupPayload_k__BackingField; // 0x30
		::UnityEngine::ComputeBuffer* _dispatchArgs_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS__CTOR_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* get_dataNum()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DATANUM_OFFSET))(this);
		}

		::System::Void set_dataNum(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DATANUM_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_swapData()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SWAPDATA_OFFSET))(this);
		}

		::System::Void set_swapData(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SWAPDATA_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_groupSums()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_GROUPSUMS_OFFSET))(this);
		}

		::System::Void set_groupSums(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_GROUPSUMS_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_dispatchIdx()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHIDX_OFFSET))(this);
		}

		::System::Void set_dispatchIdx(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHIDX_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_scanGroupPayload()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_SCANGROUPPAYLOAD_OFFSET))(this);
		}

		::System::Void set_scanGroupPayload(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_SCANGROUPPAYLOAD_OFFSET))(this, value);
		}

		::UnityEngine::ComputeBuffer* get_dispatchArgs()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_GET_DISPATCHARGS_OFFSET))(this);
		}

		::System::Void set_dispatchArgs(::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SET_DISPATCHARGS_OFFSET))(this, value);
		}

		::System::Void Init(::System::Int32 num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_INIT_OFFSET))(this, num);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_RELEASE_OFFSET))(this);
		}

		::System::Void SwapData(::UnityEngine::ComputeBuffer*& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTXGI_RADIXSORTBUFFERS_SWAPDATA_OFFSET))(this, data);
		}
	};
}
