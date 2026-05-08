#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/Vec3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_CONTOURVERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x86AA40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_CONTOURVERTEX___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x86AA50)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int ContourVertex_TypeDefinitionIndex = 29758;

	struct alignas(8) ContourVertex
	{
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 Position; // 0x10
		::System::Object* Data; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_CONTOURVERTEX_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_CONTOURVERTEX___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
