#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Rendering/BuiltinRenderTextureType.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x211A0F0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET UNITYSDK_OFFSET(0x211A0B0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x211A090)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18A47BC0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x18A47760)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x18A47790)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x18A47730)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x211A080)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2119F30)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2119F60)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x2119F90)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x2119FC0)
#define UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x2119F00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderTargetIdentifier_TypeDefinitionIndex = 4517;

	struct alignas(8) RenderTargetIdentifier
	{
		::UnityEngine::Rendering::BuiltinRenderTextureType m_Type; // 0x10
		::System::Int32 m_NameID; // 0x14
		::System::Int32 m_InstanceID; // 0x18
		::System::IntPtr m_BufferPointer; // 0x20
		::System::Int32 m_MipLevel; // 0x28
		::UnityEngine::CubemapFace m_CubeFace; // 0x2C
		::System::Int32 m_DepthSlice; // 0x30

		::System::Void _ctor(::UnityEngine::Rendering::BuiltinRenderTextureType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BuiltinRenderTextureType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_1_OFFSET))(this, nameID);
		}

		::System::Void _ctor_2(::System::Int32 nameID, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubeFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_2_OFFSET))(this, nameID, mipLevel, cubeFace, depthSlice);
		}

		::System::Void _ctor_3(::UnityEngine::Rendering::RenderTargetIdentifier renderTargetIdentifier, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubeFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_3_OFFSET))(this, renderTargetIdentifier, mipLevel, cubeFace, depthSlice);
		}

		::System::Void _ctor_4(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER__CTOR_4_OFFSET))(this, tex);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit(::UnityEngine::Rendering::BuiltinRenderTextureType type)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Rendering::BuiltinRenderTextureType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_OFFSET))(type);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_1(::System::Int32 nameID)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_1_OFFSET))(nameID);
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_2(::UnityEngine::Texture* tex)
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_IMPLICIT_2_OFFSET))(tex);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderTargetIdentifier rhs)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_OFFSET))(this, rhs);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::RenderTargetIdentifier lhs, ::UnityEngine::Rendering::RenderTargetIdentifier rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERTARGETIDENTIFIER_OP_EQUALITY_OFFSET))(lhs, rhs);
		}
	};
}
