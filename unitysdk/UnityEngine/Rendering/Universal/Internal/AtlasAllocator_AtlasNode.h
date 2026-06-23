#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ATLASNODE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1AEEC9C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ATLASNODE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AEECCC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ATLASNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEEC920)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int AtlasAllocator_AtlasNode_TypeDefinitionIndex = 26631;

	class AtlasAllocator_AtlasNode : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::Universal::Internal::AtlasAllocator_AtlasNode* m_BottomChild; // 0x10
		::UnityEngine::Rendering::Universal::Internal::AtlasAllocator_AtlasNode* m_RightChild; // 0x18
		::UnityEngine::Vector4 m_Rect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ATLASNODE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::Internal::AtlasAllocator_AtlasNode* Allocate(::System::Int32 width, ::System::Int32 height, ::System::Boolean powerOfTwoPadding)
		{
			return ((::UnityEngine::Rendering::Universal::Internal::AtlasAllocator_AtlasNode*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ATLASNODE_ALLOCATE_OFFSET))(this, width, height, powerOfTwoPadding);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_ATLASALLOCATOR_ATLASNODE_RELEASE_OFFSET))(this);
		}
	};
}
