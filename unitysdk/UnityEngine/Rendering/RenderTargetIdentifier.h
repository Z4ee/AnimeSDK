#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinRenderTextureType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C00F30)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C00EF0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C00ED0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DCD4830)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1DCD44C0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1DCD44F0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1DCD4490)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C00EC0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C00CA0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C00CD0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C00D00)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3C00D30)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3C00DF0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x3C00C70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetIdentifier_TypeDefinitionIndex = 4708;

	struct alignas(8) RenderTargetIdentifier
	{
		::UnityEngine::Rendering::BuiltinRenderTextureType m_Type; // 0x10
		::System::Int32 m_NameID; // 0x14
		::System::Int32 m_InstanceID; // 0x18
		::System::IntPtr m_BufferPointer; // 0x20
		::System::Int32 m_MipLevel; // 0x28
		::UnityEngine::CubemapFace m_CubeFace; // 0x2C
		::System::Int32 m_DepthSlice; // 0x30

		::System::Void _ctor(::UnityEngine::Rendering::BuiltinRenderTextureType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BuiltinRenderTextureType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::CubemapFace a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::System::Int32 a2, ::UnityEngine::CubemapFace a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_4(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_4_OFFSET))(this, a1);
		}

		::System::Void _ctor_5(::UnityEngine::Texture* a1, ::System::Int32 a2, ::UnityEngine::CubemapFace a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit(::UnityEngine::Rendering::BuiltinRenderTextureType a1)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::BuiltinRenderTextureType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_2(::UnityEngine::Texture* a1)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_2_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderTargetIdentifier a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::RenderTargetIdentifier a1, ::UnityEngine::Rendering::RenderTargetIdentifier a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_EQUALITY_OFFSET))(a1, a2);
		}
	};
}
