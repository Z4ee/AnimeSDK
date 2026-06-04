#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/RenderGraphModule/RenderGraphResourceType.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xDAD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_ISVALID_OFFSET UNITYSDK_OFFSET(0x145B60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B159270)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0x2C4C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x21F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xDAE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3877780)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x3862960)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphMutableResource_TypeDefinitionIndex = 33655;

	struct alignas(4) RenderGraphMutableResource
	{
		::System::Int32 _handle_k__BackingField; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType _type_k__BackingField; // 0x14
		::System::Int32 _version_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_handle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_handle(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_SET_HANDLE_OFFSET))(this, a1);
		}

		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType get_type()
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_type(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_version(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_SET_VERSION_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource op_Implicit(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource a1)
		{
			return ((::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource(*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphMutableResource))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHMUTABLERESOURCE_ISVALID_OFFSET))(this);
		}
	};
}
