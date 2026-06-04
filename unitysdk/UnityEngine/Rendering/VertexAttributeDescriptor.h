#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttribute.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeFormat.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3884940)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x388C0E0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x388C0B0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x140A50)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_DIMENSION_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x21F0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_STREAM_OFFSET UNITYSDK_OFFSET(0x140A60)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x388C0A0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x85E10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VertexAttributeDescriptor_TypeDefinitionIndex = 4692;

	struct alignas(4) VertexAttributeDescriptor
	{
		::UnityEngine::Rendering::VertexAttribute _attribute_k__BackingField; // 0x10
		::UnityEngine::Rendering::VertexAttributeFormat _format_k__BackingField; // 0x14
		::System::Int32 _dimension_k__BackingField; // 0x18
		::System::Int32 _stream_k__BackingField; // 0x1C

		::System::Void _ctor(::UnityEngine::Rendering::VertexAttribute a1, ::UnityEngine::Rendering::VertexAttributeFormat a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute, ::UnityEngine::Rendering::VertexAttributeFormat, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Rendering::VertexAttribute get_attribute()
		{
			return ((::UnityEngine::Rendering::VertexAttribute(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_ATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_attribute(::UnityEngine::Rendering::VertexAttribute a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttribute))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_ATTRIBUTE_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::VertexAttributeFormat get_format()
		{
			return ((::UnityEngine::Rendering::VertexAttributeFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::Rendering::VertexAttributeFormat a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VertexAttributeFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_FORMAT_OFFSET))(this, a1);
		}

		::System::Int32 get_dimension()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_DIMENSION_OFFSET))(this);
		}

		::System::Void set_dimension(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_DIMENSION_OFFSET))(this, a1);
		}

		::System::Int32 get_stream()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_STREAM_OFFSET))(this);
		}

		::System::Void set_stream(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_SET_STREAM_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::VertexAttributeDescriptor a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VertexAttributeDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
