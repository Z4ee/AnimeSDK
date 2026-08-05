#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal { class AtlasAllocator_AtlasNode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1C431A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C431D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C431980)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int AtlasAllocator_TypeDefinitionIndex = 27898;

	class AtlasAllocator : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::AtlasAllocator_AtlasNode* m_Root; // 0x10
		::System::Boolean powerOfTwoPadding; // 0x18
		::System::Int32 m_Height; // 0x1C
		::System::Int32 m_Width; // 0x20

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height, ::System::Boolean potPadding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR__CTOR_OFFSET))(this, width, height, potPadding);
		}

		::System::Boolean Allocate(::UnityEngine::Vector4& result, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ALLOCATE_OFFSET))(this, result, width, height);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_RESET_OFFSET))(this);
		}
	};
}
