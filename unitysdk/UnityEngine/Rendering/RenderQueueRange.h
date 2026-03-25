#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2119380)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x20E84C0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21193E0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x18A453B0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_LOWERBOUND_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x18A46E70)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_TRANSPARENT_OFFSET UNITYSDK_OFFSET(0x18A46E80)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_UPPERBOUND_OFFSET UNITYSDK_OFFSET(0x1DA90)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A46F10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderQueueRange_TypeDefinitionIndex = 4569;

	struct alignas(4) RenderQueueRange
	{
		static ::System::Int32* StaticGet_maximumBound()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderQueueRange_TypeDefinitionIndex)->GetStaticField(0x5D20);
		}
		static ::System::Int32* StaticGet_minimumBound()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderQueueRange_TypeDefinitionIndex)->GetStaticField(0x5D24);
		}
		::System::Int32 m_LowerBound; // 0x10
		::System::Int32 m_UpperBound; // 0x14

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderQueueRange get_all()
		{
			return ((::UnityEngine::Rendering::RenderQueueRange(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_ALL_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderQueueRange get_opaque()
		{
			return ((::UnityEngine::Rendering::RenderQueueRange(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_OPAQUE_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderQueueRange get_transparent()
		{
			return ((::UnityEngine::Rendering::RenderQueueRange(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_TRANSPARENT_OFFSET))();
		}

		::System::Int32 get_lowerBound()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_LOWERBOUND_OFFSET))(this);
		}

		::System::Int32 get_upperBound()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_UPPERBOUND_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RenderQueueRange other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderQueueRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
