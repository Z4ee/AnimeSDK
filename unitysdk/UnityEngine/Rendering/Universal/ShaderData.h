#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B3500)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C9B3340)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTDATABUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B3560)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTINDICESBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B35C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETSHADOWDATABUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B3620)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETSHADOWINDICESBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9B3680)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C9B32D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9B36E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9B32C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderData_TypeDefinitionIndex = 27763;

	class ShaderData : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::ShaderData** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::ShaderData**)Il2CppClass::FromTypeDefinitionIndex(ShaderData_TypeDefinitionIndex)->GetStaticField(0x232F0);
		}
		::UnityEngine::ComputeBuffer* m_ShadowDataBuffer; // 0x10
		::UnityEngine::ComputeBuffer* m_LightIndicesBuffer; // 0x18
		::UnityEngine::ComputeBuffer* m_ShadowIndicesBuffer; // 0x20
		::UnityEngine::ComputeBuffer* m_LightDataBuffer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::ShaderData* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::ShaderData*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GET_INSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* GetLightDataBuffer(::System::Int32 size)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTDATABUFFER_OFFSET))(this, size);
		}

		::UnityEngine::ComputeBuffer* GetLightIndicesBuffer(::System::Int32 size)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTINDICESBUFFER_OFFSET))(this, size);
		}

		::UnityEngine::ComputeBuffer* GetShadowDataBuffer(::System::Int32 size)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETSHADOWDATABUFFER_OFFSET))(this, size);
		}

		::UnityEngine::ComputeBuffer* GetShadowIndicesBuffer(::System::Int32 size)
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETSHADOWINDICESBUFFER_OFFSET))(this, size);
		}

		::System::Void DisposeBuffer(::UnityEngine::ComputeBuffer*& buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSEBUFFER_OFFSET))(this, buffer);
		}
	};
}
