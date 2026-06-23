#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9EA110)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6DBDC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x9EA080)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_INIT_OFFSET UNITYSDK_OFFSET(0x9EA060)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2A3A80)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D2A3A90)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_SET_ID_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A3AA0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderTargetHandle_TypeDefinitionIndex = 5948;

	struct alignas(4) RenderTargetHandle
	{
		static ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle* StaticGet_CameraTarget()
		{
			return (::UnityEngine::NAPRenderPipeline0::RenderTargetHandle*)Il2CppClass::FromTypeDefinitionIndex(RenderTargetHandle_TypeDefinitionIndex)->GetStaticField(0x2300);
		}
		::System::Int32 _id_k__BackingField; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE__CCTOR_OFFSET))();
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_SET_ID_OFFSET))(this, value);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_GET_ID_OFFSET))(this);
		}

		::System::Void Init(::System::String* shaderProperty)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_INIT_OFFSET))(this, shaderProperty);
		}

		/*
		::UnityEngine::Rendering::RenderTargetIdentifier Identifier()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_IDENTIFIER_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle c1, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle c2)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_OP_EQUALITY_OFFSET))(c1, c2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle c1, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle c2)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::RenderTargetHandle, ::UnityEngine::NAPRenderPipeline0::RenderTargetHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RENDERTARGETHANDLE_OP_INEQUALITY_OFFSET))(c1, c2);
		}
	};
}
