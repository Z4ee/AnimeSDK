#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_BUILD_OFFSET UNITYSDK_OFFSET(0x1B0F3C80)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1B0F3C90)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSECLICKPOSITION_OFFSET UNITYSDK_OFFSET(0x1B0F3CD0)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B0F3CA0)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B0F3C00)
#define UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F3C70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MousePositionDebug_TypeDefinitionIndex = 34116;

	class MousePositionDebug : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::MousePositionDebug** StaticGet_s_Instance()
		{
			return (::UnityEngine::Rendering::MousePositionDebug**)Il2CppClass::FromTypeDefinitionIndex(MousePositionDebug_TypeDefinitionIndex)->GetStaticField(0x46710);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG__CTOR_OFFSET))(this);
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

		::UnityEngine::Vector2 GetMousePosition(::System::Single a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSEPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetMouseClickPosition(::System::Single a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MOUSEPOSITIONDEBUG_GETMOUSECLICKPOSITION_OFFSET))(this, a1);
		}
	};
}
