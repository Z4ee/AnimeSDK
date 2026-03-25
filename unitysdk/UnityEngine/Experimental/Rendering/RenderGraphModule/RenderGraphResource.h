#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceType.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_ISVALID_OFFSET UNITYSDK_OFFSET(0x86340)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x72EF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x21091A0)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphResource_TypeDefinitionIndex = 27748;

	struct alignas(4) RenderGraphResource
	{
		::System::Int32 _handle_k__BackingField; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType _type_k__BackingField; // 0x14

		/*
		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource mutableResource)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE__CTOR_OFFSET))(this, mutableResource);
		}
		*/

		::System::Void _ctor_1(::System::Int32 handle, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE__CTOR_1_OFFSET))(this, handle, type);
		}

		::System::Int32 get_handle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_handle(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_SET_HANDLE_OFFSET))(this, value);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType get_type()
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHRESOURCE_ISVALID_OFFSET))(this);
		}
	};
}
