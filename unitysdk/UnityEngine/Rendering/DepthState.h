#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA095B0)
#define UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA09590)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA09610)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1D737E60)
#define UNITYENGINE_RENDERING_DEPTHSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x417DA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthState_TypeDefinitionIndex = 6239;

	struct alignas(1) DepthState
	{
		::System::Byte m_WriteEnabled; // 0x10
		::System::SByte m_CompareFunction; // 0x11

		::System::Void _ctor(::System::Boolean writeEnabled, ::UnityEngine::Rendering::CompareFunction compareFunction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE__CTOR_OFFSET))(this, writeEnabled, compareFunction);
		}

		static ::UnityEngine::Rendering::DepthState get_defaultValue()
		{
			return ((::UnityEngine::Rendering::DepthState(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GET_DEFAULTVALUE_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Rendering::DepthState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DepthState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
