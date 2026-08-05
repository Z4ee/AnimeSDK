#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttribute.h"
#include "unitysdk/UnityEngine/Rendering/VertexAttributeFormat.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0FDD0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET UNITYSDK_OFFSET(0xA55230)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA551F0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_ATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_DIMENSION_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_STREAM_OFFSET UNITYSDK_OFFSET(0x330F60)
#define UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA551E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VertexAttributeDescriptor_TypeDefinitionIndex = 6184;

	struct alignas(4) VertexAttributeDescriptor
	{
		::UnityEngine::Rendering::VertexAttribute _attribute_k__BackingField; // 0x10
		::UnityEngine::Rendering::VertexAttributeFormat _format_k__BackingField; // 0x14
		::System::Int32 _dimension_k__BackingField; // 0x18
		::System::Int32 _stream_k__BackingField; // 0x1C

		::UnityEngine::Rendering::VertexAttribute get_attribute()
		{
			return ((::UnityEngine::Rendering::VertexAttribute(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_ATTRIBUTE_OFFSET))(this);
		}

		::UnityEngine::Rendering::VertexAttributeFormat get_format()
		{
			return ((::UnityEngine::Rendering::VertexAttributeFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_FORMAT_OFFSET))(this);
		}

		::System::Int32 get_dimension()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_DIMENSION_OFFSET))(this);
		}

		::System::Int32 get_stream()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GET_STREAM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::VertexAttributeDescriptor other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::VertexAttributeDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VERTEXATTRIBUTEDESCRIPTOR_EQUALS_1_OFFSET))(this, other);
		}
	};
}
