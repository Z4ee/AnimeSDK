#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class RenderGraphLogger; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGINDENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x90F3B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGINDENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90F310)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGINDENT__CTOR_OFFSET UNITYSDK_OFFSET(0x90F300)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphLogIndent_TypeDefinitionIndex = 18243;

	struct alignas(8) RenderGraphLogIndent
	{
		::System::Int32 m_Indentation; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_Logger; // 0x18
		::System::Boolean m_Disposed; // 0x20

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger, ::System::Int32 indentation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGINDENT__CTOR_OFFSET))(this, logger, indentation);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGINDENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHLOGINDENT_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
