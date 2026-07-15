#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class DefaultControls_IFactoryControls; }

#define UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY_CREATEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x19BF2530)
#define UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BFA5D0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x19BFA5C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_DefaultRuntimeFactory_TypeDefinitionIndex = 5866;

	class DefaultControls_DefaultRuntimeFactory : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::DefaultControls_IFactoryControls** StaticGet_Default()
		{
			return (::UnityEngine::UI::DefaultControls_IFactoryControls**)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_DefaultRuntimeFactory_TypeDefinitionIndex)->GetStaticField(0x3D010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* CreateGameObject(::System::String* a1, ::Il2CppArray<::System::Type*>* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_DEFAULTRUNTIMEFACTORY_CREATEGAMEOBJECT_OFFSET))(this, a1, a2);
		}
	};
}
