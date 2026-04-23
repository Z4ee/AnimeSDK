#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22EA980)
#define UNITYENGINE_RENDERING_DEPTHSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x22CE5D0)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22EA9E0)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GET_COMPAREFUNCTION_OFFSET UNITYSDK_OFFSET(0x22EA970)
#define UNITYENGINE_RENDERING_DEPTHSTATE_GET_WRITEENABLED_OFFSET UNITYSDK_OFFSET(0x229DBC0)
#define UNITYENGINE_RENDERING_DEPTHSTATE_SET_COMPAREFUNCTION_OFFSET UNITYSDK_OFFSET(0x22D8A70)
#define UNITYENGINE_RENDERING_DEPTHSTATE_SET_WRITEENABLED_OFFSET UNITYSDK_OFFSET(0xD87E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DepthState_TypeDefinitionIndex = 4558;

	struct alignas(1) DepthState
	{
		::System::Byte m_WriteEnabled; // 0x10
		::System::SByte m_CompareFunction; // 0x11

		::System::Boolean get_writeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GET_WRITEENABLED_OFFSET))(this);
		}

		::System::Void set_writeEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_SET_WRITEENABLED_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::CompareFunction get_compareFunction()
		{
			return ((::UnityEngine::Rendering::CompareFunction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_GET_COMPAREFUNCTION_OFFSET))(this);
		}

		::System::Void set_compareFunction(::UnityEngine::Rendering::CompareFunction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEPTHSTATE_SET_COMPAREFUNCTION_OFFSET))(this, value);
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
