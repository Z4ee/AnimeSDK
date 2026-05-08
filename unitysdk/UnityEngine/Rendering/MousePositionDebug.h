#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_BUILD_OFFSET UNITYSDK_OFFSET(0x191F7BB0)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_CLEANUP_OFFSET UNITYSDK_OFFSET(0x191F7BF0)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSECLICKPOSITION_OFFSET UNITYSDK_OFFSET(0x191F7CB0)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x191F7C30)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x191F7B30)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x191F7D10)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x191F7BA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MousePositionDebug_TypeDefinitionIndex = 9573;

	class MousePositionDebug : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::MousePositionDebug** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::MousePositionDebug**)Il2CppClass::FromTypeDefinitionIndex(MousePositionDebug_TypeDefinitionIndex)->GetStaticField(0x8AB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::MousePositionDebug* get_instance()
		{
			return ((::UnityEngine::Rendering::MousePositionDebug*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GET_INSTANCE_OFFSET))();
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_BUILD_OFFSET))(this);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_CLEANUP_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetMousePosition(::System::Single ScreenHeight, ::System::Boolean sceneView)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSEPOSITION_OFFSET))(this, ScreenHeight, sceneView);
		}

		::UnityEngine::Vector2 GetMouseClickPosition(::System::Single ScreenHeight)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSECLICKPOSITION_OFFSET))(this, ScreenHeight);
		}
	};
}
