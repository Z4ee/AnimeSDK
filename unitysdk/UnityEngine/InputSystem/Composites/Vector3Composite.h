#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Composites/Vector3Composite_Mode.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingCompositeContext.h"
#include "unitysdk/UnityEngine/InputSystem/InputBindingComposite_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_READVALUE_OFFSET UNITYSDK_OFFSET(0x1EB400E0)
#define UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB40560)

namespace UnityEngine::InputSystem::Composites
{
	inline static constexpr unsigned int Vector3Composite_TypeDefinitionIndex = 32719;

	class Vector3Composite : public ::UnityEngine::InputSystem::InputBindingComposite_1<::UnityEngine::Vector3>
	{
	public:
		::System::Int32 up; // 0x10
		::System::Int32 down; // 0x14
		::System::Int32 left; // 0x18
		::System::Int32 forward; // 0x1C
		::System::Int32 backward; // 0x20
		::System::Int32 right; // 0x24
		::UnityEngine::InputSystem::Composites::Vector3Composite_Mode mode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 ReadValue(::UnityEngine::InputSystem::InputBindingCompositeContext& context)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::InputSystem::InputBindingCompositeContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_COMPOSITES_VECTOR3COMPOSITE_READVALUE_OFFSET))(this, context);
		}
	};
}
