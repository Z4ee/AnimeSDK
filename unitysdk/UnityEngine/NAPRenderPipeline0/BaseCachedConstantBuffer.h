#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E474520)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E4744B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E474440)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_GETGPUBUFFER_OFFSET UNITYSDK_OFFSET(0x1E4743D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_GETNAMEID_OFFSET UNITYSDK_OFFSET(0x1E4743F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_GETSIZE_OFFSET UNITYSDK_OFFSET(0x1E4743E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_UPLOADIFDIRTY_OFFSET UNITYSDK_OFFSET(0x1E474400)
#define UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4745D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int BaseCachedConstantBuffer_TypeDefinitionIndex = 5999;

	class BaseCachedConstantBuffer : public ::System::Object
	{
	public:
		::System::Array* dataToUpload; // 0x10
		::System::Int32 sizeOfT; // 0x18
		::System::Void* curDataAddr; // 0x20
		::System::Void* prevDataAddr; // 0x28
		::UnityEngine::ComputeBuffer* gpuBuffer; // 0x30
		::System::UInt64 curGCHandle; // 0x38
		::System::UInt64 prevGCHandle; // 0x40
		::System::Int32 nameID; // 0x48
		::System::String* name; // 0x50
		::System::Boolean disposed; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER__CTOR_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetGPUBuffer()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_GETGPUBUFFER_OFFSET))(this);
		}

		::System::Int32 GetSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_GETSIZE_OFFSET))(this);
		}

		::System::Int32 GetNameID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_GETNAMEID_OFFSET))(this);
		}

		::System::Void UploadIfDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_UPLOADIFDIRTY_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BASECACHEDCONSTANTBUFFER_DISPOSE_1_OFFSET))(this);
		}
	};
}
