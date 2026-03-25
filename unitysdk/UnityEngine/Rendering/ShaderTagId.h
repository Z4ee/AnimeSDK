#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x29140)
#define UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET UNITYSDK_OFFSET(0x211AC90)
#define UNITYENGINE_RENDERING_SHADERTAGID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x211ACF0)
#define UNITYENGINE_RENDERING_SHADERTAGID_GET_ID_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_RENDERING_SHADERTAGID_GET_NAME_OFFSET UNITYSDK_OFFSET(0x211AC80)
#define UNITYENGINE_RENDERING_SHADERTAGID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18A49030)
#define UNITYENGINE_RENDERING_SHADERTAGID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18A49040)
#define UNITYENGINE_RENDERING_SHADERTAGID_SET_ID_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_RENDERING_SHADERTAGID__CTOR_OFFSET UNITYSDK_OFFSET(0x211AC60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderTagId_TypeDefinitionIndex = 4574;

	struct alignas(4) ShaderTagId
	{
		static ::UnityEngine::Rendering::ShaderTagId* StaticGet_none()
		{
			return (::UnityEngine::Rendering::ShaderTagId*)Il2CppClass::FromTypeDefinitionIndex(ShaderTagId_TypeDefinitionIndex)->GetStaticField(0x81F0);
		}
		::System::Int32 m_Id; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID__CTOR_OFFSET))(this, name);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GET_NAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::ShaderTagId other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::ShaderTagId tag1, ::UnityEngine::Rendering::ShaderTagId tag2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_OP_EQUALITY_OFFSET))(tag1, tag2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Rendering::ShaderTagId tag1, ::UnityEngine::Rendering::ShaderTagId tag2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADERTAGID_OP_INEQUALITY_OFFSET))(tag1, tag2);
		}
	};
}
