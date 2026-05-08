#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSEBUFFER_OFFSET UNITYSDK_OFFSET(0x19BA3280)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19BA30C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTDATABUFFER_OFFSET UNITYSDK_OFFSET(0x19BA32E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETLIGHTINDICESBUFFER_OFFSET UNITYSDK_OFFSET(0x19BA3340)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETSHADOWDATABUFFER_OFFSET UNITYSDK_OFFSET(0x19BA33A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GETSHADOWINDICESBUFFER_OFFSET UNITYSDK_OFFSET(0x19BA3400)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x19BA3050)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA3460)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19BA3040)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderData_TypeDefinitionIndex = 30226;

	class ShaderData : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::ShaderData** StaticGet_m_Instance()
		{
			return (::UnityEngine::Rendering::Universal::ShaderData**)Il2CppClass::FromTypeDefinitionIndex(ShaderData_TypeDefinitionIndex)->GetStaticField(0x24330);
		}
		::UnityEngine::ComputeBuffer* m_ShadowIndicesBuffer; // 0x10
		::UnityEngine::ComputeBuffer* m_ShadowDataBuffer; // 0x18
		::UnityEngine::ComputeBuffer* m_LightDataBuffer; // 0x20
		::UnityEngine::ComputeBuffer* m_LightIndicesBuffer; // 0x28

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
