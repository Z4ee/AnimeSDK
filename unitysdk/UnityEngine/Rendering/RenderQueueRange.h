#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3889DB0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x384B490)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3889E10)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1B2CD700)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_LOWERBOUND_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_OPAQUE_OFFSET UNITYSDK_OFFSET(0x1B2CF1F0)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_TRANSPARENT_OFFSET UNITYSDK_OFFSET(0x1B2CF200)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE_GET_UPPERBOUND_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_RENDERING_RENDERQUEUERANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2CF290)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderQueueRange_TypeDefinitionIndex = 4745;

	struct alignas(4) RenderQueueRange
	{
		static ::System::Int32* StaticGet_maximumBound()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderQueueRange_TypeDefinitionIndex)->GetStaticField(0xA480);
		}
		static ::System::Int32* StaticGet_minimumBound()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderQueueRange_TypeDefinitionIndex)->GetStaticField(0xA484);
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

		::System::Boolean Equals(::UnityEngine::Rendering::RenderQueueRange a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RenderQueueRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERQUEUERANGE_GETHASHCODE_OFFSET))(this);
		}
	};
}
